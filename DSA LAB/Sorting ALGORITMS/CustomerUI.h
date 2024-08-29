#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;
class CustomerUI
{
public:
    static int MainMenu() {
        cout << "1. BUBBLE SORT." << endl;
        cout << "2. SELECTION SORT." << endl;
        cout << "3. INSERTION SORT." << endl;
        cout << "4. MERGE SORT." << endl;
        cout << "5. QUICK SORT." << endl;
        cout << "6. HEAP SORT." << endl;
        cout << "7. COUNTING SORT." << endl;
        cout << "8. RADIX SORT." << endl;
        cout << "9. BUCKET SORT." << endl;
        cout << "10. EXIT." << endl;
        cout << "Enter your Option........." << endl;
        int op;
        cin >> op;
        return op;
    }
    static int FirstMenu() {
        cout << "1. Load 100 Records." << endl;
        cout << "2. Load 1000 Records." << endl;
        cout << "3. Load 10000 Records." << endl;
        cout << "4. Load 100000 Records." << endl;
        cout << "5. Load 500000 Records." << endl;
        cout << "6. Back." << endl;
        int op;
        cin >> op;
        return op;
    }
    static int SecondMenu() {
        cout << "1. SORT THE DATA BY NO. OF EMPLOYS." << endl;
        cout << "2. SORT THE DATA BY INDEX." << endl;
        cout << "3. Back." << endl;
        int op;
        cin >> op;
        return op;
    }
};

