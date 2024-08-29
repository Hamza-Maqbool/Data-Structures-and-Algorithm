#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <queue>
#include "BST.h"
#include "UI.h"
#include <cstdio>
#include <conio.h>
using namespace std;
class UI{
     
    public:
        static int MainMenu() {
            cout << "1. Binary Search Tree." << endl;
            cout << "2. AVL Tree." << endl;
            cout << "3. Exit." << endl;
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
            cout << "5. Back." << endl;
            int op;
            cin >> op;
            return op;
        }
        static int SecondMenu() {
            cout << "1. Insert a New Record." << endl;
            cout << "2. Retrieve a Record." << endl;
            cout << "3. Update a Record." << endl;
            cout << "4. Delete a Record." << endl;
            cout << "5. Traverse a Tree." << endl;
            cout << "6. Back." << endl;
            int op;
            cin >> op;
            return op;
        }
        static int ThirdMenu() {
            cout << "1. BFT." << endl;
            cout << "2. Inorder Traversal." << endl;
            cout << "3. Postorder Traversal." << endl;
            cout << "4. Preorder Traversal." << endl;
            cout << "5. Back." << endl;
            int op;
            cin >> op;
            return op;
        }
        static void clearScreen() {
            
            cout << "Press any Key...." << endl;
            _getch();
            system("cls");
        }
        
      
};

