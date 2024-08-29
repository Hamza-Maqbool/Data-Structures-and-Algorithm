#pragma once
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <queue>
#include <stack>
#include <cstdio>
#include "BST.h"
#include "UI.h"
using namespace std;
    struct TreeNode
    {
        int Index;
        string CustomerId;
        string FirstName;
        string LastName;
        string Company;
        string City;
        string Country;
        string Phone1;
        string Phone2;
        string Email;
        string SubscriptionDate;
        string Website;

        TreeNode* left;
        TreeNode* right;
    };
class BST{
        public:
            TreeNode *root;
            BST() {
            root = NULL;
            }
            TreeNode* createNode(int idx,string id, string fnam, string lnam, string comp, string city, string country, string p1, string p2, string email, string web, string sub)
            {
                TreeNode* record = new TreeNode();
                record->Index = idx;
                record->CustomerId = id;
                record->FirstName = fnam;
                record->LastName = lnam;
                record->Company = comp;
                record->City = city;
                record->Country = country;
                record->Phone1 = p1;
                record->Phone2 = p2;
                record->Email = email;
                record->SubscriptionDate = sub;
                record->Website = web;
                record->left = NULL;
                record->right = NULL;
                return record;
            }
            void Insert(TreeNode* node)
            {
            TreeNode* prev = root;
            TreeNode* next = root;
            if (root == NULL)
            {
                root = node;
                return;
            }
            while (next != NULL)
            {
                prev = next;
                if (node->Index < prev->Index)
                    next = prev->left;
                else
                    next = prev->right;
            }
                if (node->Index >= prev->Index)
                    prev->right = node;
                else
                    prev->left = node;
            }
            void ReadFromFile(string path)
            {
                ifstream file;
                file.open(path);
                string line,id,fnam,lnam,comp,city,country,p1,p2,email,web,sub;
                while (getline(file,line)){
                    int idx = 0;
                    string index;
                    stringstream lineofFile(line);
                    getline(lineofFile, index, ',');
                    getline(lineofFile, id, ',');
                    getline(lineofFile, fnam, ',');
                    getline(lineofFile, lnam, ',');
                    getline(lineofFile, comp, ',');
                    getline(lineofFile, city, ',');
                    getline(lineofFile, country, ',');
                    getline(lineofFile, p1, ',');
                    getline(lineofFile, p2, ',');
                    getline(lineofFile, email, ',');
                    getline(lineofFile, sub, ',');
                    getline(lineofFile, web, ',');
                    idx = stoi(index);
                    TreeNode* node = createNode(idx, id, fnam, lnam, comp, city, country, p1, p2, email, sub, web);
                    Insert(node);
                }
                file.close();
               
            }
            TreeNode *search(int value)
            {
                TreeNode* temp = root;
                
                while (temp != NULL)
                {
                    if (temp->Index == value)
                        return temp;
                    if (value < temp->Index)
                        temp = temp->left;
                    else
                        temp = temp->right;
                }
               // if (temp->Index != value) {
                 //   return NULL;
               // }
                return NULL;
            }
            void printTree(int idx) {
                TreeNode* node = search(idx);
                if (node == NULL) {
                    cout << "Enter Valid Index." << endl;
                }
                else {
                    cout << node->FirstName << endl;
                    cout << node->LastName << endl;
                    cout << node->Company << endl;
                    cout << node->City << endl;
                    cout << node->Country << endl;
                    cout << node->Phone1 << endl;
                    cout << node->Phone2 << endl;
                    cout << node->Email << endl;
                    cout << node->SubscriptionDate << endl;
                    cout << node->Website << endl;
                }
            }
            void InsertANewRecord() {
                int idx;
                //BST obj2;
                string line, id, fnam, lnam, comp, city, country, p1, p2, email, web, sub;
                cout << "Enter Index : " << endl;
                cin >> idx;
                //if (idx > 100) {
                    cout << "Enter Customer Id : " << endl;
                    cin >> id;
                    cout << "Enter First Name : " << endl;
                    cin >> fnam;
                    cout << "Enter Last Name : " << endl;
                    cin >> lnam;
                    cout << "Enter City Name : " << endl;
                    cin >> city;
                    cout << "Enter Companay Name : " << endl;
                    cin >> comp;
                    cout << "Enter Country Name : " << endl;
                    cin >> country;
                    cout << "Enter  Phone1 : " << endl;
                    cin >> p1;
                    cout << "Enter Phone2 : " << endl;
                    cin >> p2;
                    cout << "Enter Email : " << endl;
                    cin >> email;
                    cout << "Enter Subriciption Date : " << endl;
                    cin >> sub;
                    cout << "Enter Website Name : " << endl;
                    cin >> web;
                    TreeNode* node = createNode(idx, id, fnam, lnam, comp, city, country, p1, p2, email, sub, web);
                    Insert(node);
               // }
            }
            void update(int idx) {
                TreeNode* node = search(idx);
                //BST obj2;
                string line, id, fnam, lnam, comp, city, country, p1, p2, email, web, sub;
                cout << "Enter Customer Id : " << endl;
                cin >> id;
                cout << "Enter First Name : " << endl;
                cin >> fnam;
                cout << "Enter Last Name : " << endl;
                cin >> lnam;
                cout << "Enter City Name : " << endl;
                cin >> city;
                cout << "Enter Companay Name : " << endl;
                cin >> comp;
                cout << "Enter Country Name : " << endl;
                cin >> country;
                cout << "Enter  Phone1 : " << endl;
                cin >> p1;
                cout << "Enter Phone2 : " << endl;
                cin >> p2;
                cout << "Enter Email : " << endl;
                cin >> email;
                cout << "Enter Subriciption Date : " << endl;
                cin >> sub;
                cout << "Enter Website Name : " << endl;
                cin >> web;
                node->FirstName = fnam;
                node->LastName = lnam;
                node->CustomerId = id;
                node->City = city;
                node->Country = country;
                node->SubscriptionDate = sub;
                node->Website = web;
                node->Email = email;
                node->Phone1 = p1;
                node->Phone2 = p2;
                node->Company = comp;
            }
            void ClearTree()
            {
                root = NULL;
            }
            bool deleteTreeNode(int value)
            {
                TreeNode* prev = root;
                TreeNode* next = root;
                while (next != NULL && next->Index != value)
                {
                    prev = next;
                    if (value < prev->Index)
                        next = prev->left;
                    else
                        next = prev->right;
                }
                if (next == NULL)
                {
                    cout << "Value not Found" << endl;
                    return false;
                }
                else if (next->left == NULL && next->right == NULL)
                {
                    if (next == prev->left)
                        prev->left = NULL;
                    else
                        prev->right = NULL;
                    delete next;
                    return true;
                }
                else if (next->left == NULL || next->right == NULL)
                {
                    TreeNode* newCurr;
                    if (next->left == NULL)
                        newCurr = next->right;
                    else
                        newCurr = next->left;
                    if (prev == root)
                    {
                        delete next;
                        root = newCurr;
                        return true;
                    }
                    if (next == prev->left)
                        prev->left = newCurr;
                    else
                        prev->right = newCurr;
                    delete next;
                }
                else
                {
                    TreeNode* p = NULL;
                    TreeNode* temp;
                    temp = next->right;
                    while (temp->left != NULL)
                    {
                        p = temp;
                        temp = temp->left;
                    }
                    if (p != NULL)
                        p->left = temp->right;
                    else
                        next->right = temp->right;
                    next->Index = temp->Index;
                    delete temp;
                }
                return true;
            }
            void bfs()
            {
                queue<TreeNode*> q;
                q.push(root);
                while (!q.empty())
                {
                    TreeNode* temp = q.front();
                    q.pop();
                    if(temp->left == NULL && temp->right == NULL)
                        cout << temp->Index<<endl;
                    else {
                        cout << temp->Index << ", ";
                    }
                    if (temp->left != NULL)
                        q.push(temp->left);
                    if (temp->right != NULL)
                        q.push(temp->right);
                }
            }
            void preOrder()
            {
                stack<TreeNode*> stack;
                stack.push(root);
                while (!stack.empty())
                {
                    TreeNode* curr = stack.top();
                    stack.pop();
                    if (curr->left == NULL && curr->right == NULL)
                        cout << curr->Index << endl;
                    else {
                        cout << curr->Index << ", ";
                    }
                    if (curr->right != NULL)
                        stack.push(curr->right);
                    if (curr->left != NULL)
                        stack.push(curr->left);
                }
            }
            void postOrder()
            {
                stack<TreeNode*> s1, s2;
                s1.push(root);
                while (!s1.empty())
                {
                    TreeNode* curr = s1.top();
                    s2.push(curr);
                    s1.pop();
                    if (curr->left != NULL)
                        s1.push(curr->left);
                    if (curr->right != NULL)
                        s1.push(curr->right);
                }
                while (!s2.empty())
                {
                    cout << s2.top()->Index << ",";
                    s2.pop();
                }
            }
            void inOrder()
            {
                stack<TreeNode*> stack;
                TreeNode* curr = root;
                while (!stack.empty() || curr != NULL)
                {
                    if (curr != NULL)
                    {
                        stack.push(curr);
                        curr = curr->left;
                    }
                    else
                    {
                        curr = stack.top();
                        stack.pop();
                        if (curr->left == NULL && curr->right == NULL)
                            cout << curr->Index << endl;
                        else {
                            cout << curr->Index << ", ";
                        }
                        //cout << curr->Index << ",";
                        curr = curr->right;
                    }
                }
            }
};


