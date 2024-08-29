
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <queue>
#include "BST.h"
#include "UI.h"
#include <cstdio>
using namespace std;
main(){
    string path;
    while(true){
        int op = UI.MainMenu();
    while(true){
            if(op == 1){
                op = UI.FirstMenu();
                if(op == 1){
                    path = "customers-100.csv";
                    BST.ReadFromFile(path);
                }
                else if(op == 2){
                    path = "customers-1000.csv";
                    BST.ReadFromFile(path);
                }
                else if(op == 3){
                    path = "customers-10000.csv";
                    BST.ReadFromFile(path);
                }
                else if(op == 4){
                    path = "customers-100000.csv";
                    BST.ReadFromFile(path);
                }
                else if(op == 5){
                    break;
                }
            }
        }
        else if(op == 2){
            
        }
        else if(op == 3){
            break;
        }
    }
   
}
