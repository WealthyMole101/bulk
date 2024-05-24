#include "printer.h"

#include <iostream>

using namespace std;

Printer::Printer()
{

}

void Printer::out(vector<string>& blocks)
{
    cout << "bulk: ";
    for (auto it = blocks.begin(); it != blocks.end(); ++it) {
        cout << *it;
        if (it != blocks.end() -1) {
            cout << ", ";
        }
    }

    cout << endl;
}
