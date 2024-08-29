#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <queue>
#include "BST.h"
#include "UI.h"
#include "AVL.h"
#include "chrono"
#include <cstdio>
using namespace std;
int main() {
    string path;
    UI obj;
    BST obj1;
    AVL obj2;
    while (true) {
        int op = obj.MainMenu();
        if (op == 1) {
            while (true) {
                op = obj.FirstMenu();
                if (op == 1) {
                    path = "customers-100.csv";
                    auto start = chrono::steady_clock::now();
                    obj1.ReadFromFile(path);
                    auto end = chrono::steady_clock::now();
                    auto diff = end - start;
                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    while (true) {
                        op = obj.SecondMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj1.InsertANewRecord();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.printTree(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.update(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            bool found = obj1.deleteTreeNode(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            op = obj.ThirdMenu();
                                if (op == 1) {
                                    auto start = chrono::steady_clock::now();
                                    obj1.bfs();
                                    auto end = chrono::steady_clock::now();
                                    auto diff = end - start;
                                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                                }
                                else if (op == 2) {
                                    auto start = chrono::steady_clock::now();
                                    obj1.inOrder();
                                    auto end = chrono::steady_clock::now();
                                    auto diff = end - start;
                                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                                }
                                else if (op == 3) {
                                    auto start = chrono::steady_clock::now();
                                    obj1.postOrder();
                                    auto end = chrono::steady_clock::now();
                                    auto diff = end - start;
                                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                                }
                                else if (op == 4) {
                                    auto start = chrono::steady_clock::now();
                                    obj1.preOrder();
                                    auto end = chrono::steady_clock::now();
                                    auto diff = end - start;
                                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                                }
                                else if (op == 5) {
                                    break;
                                }
                            }
                        else if (op == 6) {
                            break;
                        }
                    }
                    
                    obj1.ClearTree();
                   
                }
                else if (op == 2) {
                    path = "customers-1000.csv";
                    auto start = chrono::steady_clock::now();
                    obj1.ReadFromFile(path);
                    auto end = chrono::steady_clock::now();
                    auto diff = end - start;
                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    while (true) {
                        op = obj.SecondMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj1.InsertANewRecord();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.printTree(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.update(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            bool found = obj1.deleteTreeNode(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            op = obj.ThirdMenu();
                            if (op == 1) {
                                auto start = chrono::steady_clock::now();
                                obj1.bfs();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 2) {
                                auto start = chrono::steady_clock::now();
                                obj1.inOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 3) {
                                auto start = chrono::steady_clock::now();
                                obj1.postOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 4) {
                                auto start = chrono::steady_clock::now();
                                obj1.preOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 5) {
                                break;
                            }
                            obj.clearScreen();
                        }
                        else if (op == 6) {
                            break;
                        }
                    }
                    obj.clearScreen();
                    obj1.ClearTree();
                }
                else if (op == 3) {
                    path = "customers-10000.csv";
                    auto start = chrono::steady_clock::now();
                    obj1.ReadFromFile(path);
                    auto end = chrono::steady_clock::now();
                    auto diff = end - start;
                    cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    while (true) {
                        op = obj.SecondMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj1.InsertANewRecord();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.printTree(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.update(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            bool found = obj1.deleteTreeNode(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            op = obj.ThirdMenu();
                            if (op == 1) {
                                auto start = chrono::steady_clock::now();
                                obj1.bfs();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 2) {
                                auto start = chrono::steady_clock::now();
                                obj1.inOrder();
                            }
                            else if (op == 3) {
                                auto start = chrono::steady_clock::now();
                                obj1.postOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 4) {
                                auto start = chrono::steady_clock::now();
                                obj1.preOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 5) {
                                break;
                            }
                        }
                        else if (op == 6) {
                            break;
                        }
                    }
                    obj.clearScreen();
                    obj1.ClearTree();
                }
                else if (op == 4) {
                    path = "customers-100000.csv";
                    auto start = chrono::steady_clock::now();
                    obj1.ReadFromFile(path);
                    while (true) {
                        op = obj.SecondMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj1.InsertANewRecord();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.printTree(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            obj1.update(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            cout << "Enter Index : ";
                            int idx;
                            cin >> idx;
                            auto start = chrono::steady_clock::now();
                            bool found = obj1.deleteTreeNode(idx);
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            op = obj.ThirdMenu();
                            if (op == 1) {
                                auto start = chrono::steady_clock::now();
                                obj1.bfs();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 2) {
                                auto start = chrono::steady_clock::now();
                                obj1.inOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 3) {
                                auto start = chrono::steady_clock::now();
                                obj1.postOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 4) {
                                auto start = chrono::steady_clock::now();
                                obj1.preOrder();
                                auto end = chrono::steady_clock::now();
                                auto diff = end - start;
                                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                            }
                            else if (op == 5) {
                                break;
                            }
                        }
                        else if (op == 6) {
                            break;
                        }
                    }
                    obj1.ClearTree();
                }
                else if (op == 5) {
                    break;
                }
            }
            obj.clearScreen();
            obj1.ClearTree();
        }
    else if (op == 2) {
        while (true) {
            op = obj.FirstMenu();
            if (op == 1) {
                path = "customers-100.csv";
                auto start = chrono::steady_clock::now();
                obj2.ReadFromFile(path);
                auto end = chrono::steady_clock::now();
                auto diff = end - start;
                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                while (true) {
                    op = obj.SecondMenu();
                    if (op == 1) {
                        auto start = chrono::steady_clock::now();
                        obj2.InsertANewRecord();
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 2) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.printTree(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 3) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.update(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 4) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        //ATreeNode* node = obj2.search(idx);
                        bool found = obj2.deleteValue(obj2.root, idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 5) {
                        op = obj.ThirdMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj2.bfs();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            auto start = chrono::steady_clock::now();
                            obj2.inOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            auto start = chrono::steady_clock::now();
                            obj2.postOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            auto start = chrono::steady_clock::now();
                            obj2.preOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            break;
                        }
                    }
                    else if (op == 6) {
                        break;
                    }
                }
                obj.clearScreen();
                obj2.ClearTree();
            }
            else if (op == 2) {
                auto start = chrono::steady_clock::now();
                path = "customers-1000.csv";
                obj2.ReadFromFile(path);
                auto end = chrono::steady_clock::now();
                auto diff = end - start;
                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                while (true) {
                    op = obj.SecondMenu();
                    if (op == 1) {
                        auto start = chrono::steady_clock::now();
                        obj2.InsertANewRecord();
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 2) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.printTree(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 3) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.update(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 4) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                       // ATreeNode* node = obj2.search(idx);
                        bool found = obj2.deleteValue(obj2.root,idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 5) {
                        op = obj.ThirdMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj2.bfs();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            auto start = chrono::steady_clock::now();
                            obj2.inOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            auto start = chrono::steady_clock::now();
                            obj2.postOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            auto start = chrono::steady_clock::now();
                            obj2.preOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            break;
                        }
                    }
                    else if (op == 6) {
                        break;
                    }
                }
                obj.clearScreen();
                obj2.ClearTree();
            }
            else if (op == 3) {
                auto start = chrono::steady_clock::now();
                path = "customers-10000.csv";
                obj2.ReadFromFile(path);
                auto end = chrono::steady_clock::now();
                auto diff = end - start;
                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                while (true) {
                    op = obj.SecondMenu();
                    if (op == 1) {
                        auto start = chrono::steady_clock::now();
                        obj2.InsertANewRecord();
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 2) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.printTree(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 3) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.update(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 4) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        //ATreeNode* node = obj2.search(idx);
                        bool found = obj2.deleteValue(obj2.root, idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 5) {
                        op = obj.ThirdMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj2.bfs();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            auto start = chrono::steady_clock::now();
                            obj2.inOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            auto start = chrono::steady_clock::now();
                            obj2.postOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            auto start = chrono::steady_clock::now();
                            obj2.preOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            break;
                        }
                    }
                    else if (op == 6) {
                        break;
                    }
                }
                obj.clearScreen();
                obj2.ClearTree();
            }
            else if (op == 4) {
            auto start = chrono::steady_clock::now();
                path = "customers-100000.csv";
                obj2.ReadFromFile(path);
                auto end = chrono::steady_clock::now();
                auto diff = end - start;
                cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                while (true) {
                    op = obj.SecondMenu();
                    if (op == 1) {
                        auto start = chrono::steady_clock::now();
                        obj2.InsertANewRecord();
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 2) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.printTree(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 3) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        obj2.update(idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 4) {
                        cout << "Enter Index : ";
                        int idx;
                        cin >> idx;
                        auto start = chrono::steady_clock::now();
                        //ATreeNode* node = obj2.search(idx);
                        bool found = obj2.deleteValue(obj2.root, idx);
                        auto end = chrono::steady_clock::now();
                        auto diff = end - start;
                        cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                    }
                    else if (op == 5) {
                        op = obj.ThirdMenu();
                        if (op == 1) {
                            auto start = chrono::steady_clock::now();
                            obj2.bfs();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 2) {
                            auto start = chrono::steady_clock::now();
                            obj2.inOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 3) {
                            auto start = chrono::steady_clock::now();
                            obj2.postOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 4) {
                            auto start = chrono::steady_clock::now();
                            obj2.preOrder();
                            auto end = chrono::steady_clock::now();
                            auto diff = end - start;
                            cout << chrono::duration <double, milli>(diff).count() << "ms" << endl;
                        }
                        else if (op == 5) {
                            break;
                        }
                    }
                    else if (op == 6) {
                        break;
                    }
                }
                obj.clearScreen();
                obj2.ClearTree();
            }
            else if (op == 5) {
                break;
            }
        }

        }
        else if (op == 3) {
            break;
        }
    }

}


