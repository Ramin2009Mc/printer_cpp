#include <iostream>
#include <queue>
#include <string>
#include <iomanip>
using namespace std;

struct Client {
    string name;
    int priority;
    int pages;

    Client(string n, int p, int pg) : name(n), priority(p), pages(pg) {}

    bool operator<(const Client& other) const {
        return priority < other.priority;
    }
};

class Printer {
    priority_queue<Client> printQueue;

public:
    void AddClient(const string& name, int pr, int pg);
    const double timePage = 0.5;
    void Print();
};
