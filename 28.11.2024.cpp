#include <iostream>
#include "Printer.h"
using namespace std;

void main() {
    Printer printer;

    printer.AddClient("Alice", 2, 10);
    printer.AddClient("Bob", 1, 5);
    printer.AddClient("Charlie", 3, 15);
    printer.AddClient("Diana", 2, 20);
    printer.AddClient("Eve", 1, 7);
    printer.AddClient("Frank", 3, 12);
    printer.AddClient("Grace", 2, 18);

    cout << "-------------------------------------------------------------" << endl;
    printer.Print();
    cout << "-------------------------------------------------------------" << endl;

}

