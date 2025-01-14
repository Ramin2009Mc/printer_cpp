
#include "Printer.h"

void Printer::AddClient(const string& name, int pr, int pg) {
    Client newClient(name, pr, pg);
    printQueue.push(newClient);
}

void Printer::Print() {
    int waitTime = 0;
    int requestNumber = 1;
    cout << left << setw(10) << "Request #"
        << setw(15) << "Client Name"
        << setw(10) << "Priority"
        << setw(15) << "Pages"
        << setw(15) << "Wait Time" << endl;
    cout << "-------------------------------------------------------------" << endl;
    while (!printQueue.empty()) {
        Client current = printQueue.top();
        printQueue.pop();

        // double allP = waitTime;
        waitTime += current.pages * timePage;

        cout << left << setw(10) << requestNumber++
            << setw(15) << current.name
            << setw(10) << current.priority
            << setw(15) << current.pages
            << setw(15) << waitTime << endl;
    }
}