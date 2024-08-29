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
struct ATreeNode
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
	ATreeNode* left;
	ATreeNode* right;
	int height;
};
class AVL
{
public:
    ATreeNode* root;
    AVL()
    {
        root = NULL;
    }
    ATreeNode* createNode(int idx, string id, string fnam, string lnam, string comp, string city, string country, string p1, string p2, string email, string web, string sub)
    {
        ATreeNode* record = new ATreeNode();
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
        record->height = 1;
        return record;
    }
    int height(ATreeNode* node)
    {
        if (node == NULL)
        {
            return 0;
        }
        return node->height;
    }
    int getBalanceFactor(ATreeNode* node)
    {
        if (node == NULL)
            return 0;
        return height(node->left) - height(node->right);
    }
    int max(int a, int b)
    {
        if (a > b)
        {
            return a;
        }
        return b;
    }
    ATreeNode* rightRotate(ATreeNode* x)
    {
        ATreeNode* y = x->left;
        ATreeNode* T2 = y->right;
        y->right = x;
        x->left = T2;
        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;
        return y;
    }
    ATreeNode* leftRotate(ATreeNode* x)
    {
        ATreeNode* y = x->right;
        ATreeNode* T2 = y->left;
        y->left = x;
        x->right = T2;
        x->height = max(height(x->left), height(x->right)) + 1;
        y->height = max(height(y->left), height(y->right)) + 1;
        return y;
    }
    stack<ATreeNode*> insert(ATreeNode* node)
    {
        stack<ATreeNode*> s;
        if (root == NULL)
        {
            root = node;
            return s;
        }
        ATreeNode* prev = root;
        ATreeNode* next = root;
        while (next != NULL)
        {
            prev = next;
            s.push(next);
            if (node->Index < prev->Index)
                next = prev->left;
            else
                next = prev->right;
        }
        s.push(node);
        if (node->Index >= prev->Index)
            prev->right = node;
        else
            prev->left = node;
        return s;
    }
    void rotate(stack<ATreeNode*> s, ATreeNode* node)
    {
        ATreeNode* temp;
        ATreeNode* temp1 = NULL;
        while (!s.empty())
        {
            temp = s.top();
            bool isBalanceChanged = false;
            temp->height = max(height(temp->left), height(temp->right)) + 1;
            int balanceFactor = getBalanceFactor(temp);
            if (balanceFactor > 1)
            {
                if (node->Index < temp->left->Index)
                    temp1 = rightRotate(temp);
                else if (node->Index > temp->left->Index)
                {
                    temp->left = leftRotate(temp->left);
                    temp1 = rightRotate(temp);
                }
                isBalanceChanged = true;
            }
            if (balanceFactor < -1)
            {
                if (node->Index > temp->right->Index)
                    temp1 = leftRotate(temp);
                else if (node->Index < temp->right->Index)
                {
                    temp->right = rightRotate(temp->right);
                    temp1 = leftRotate(temp);
                }
                isBalanceChanged = true;
            }
            s.pop();
            if (isBalanceChanged)
            {
                if (s.empty())
                    root = temp1;
                else
                {
                    if (s.top()->left == temp)
                        s.top()->left = temp1;
                    else
                        s.top()->right = temp1;
                }
            }
        }
    }
    void insertionWithRotation(ATreeNode* node)
    {
        stack<ATreeNode*> s = insert(node);
        rotate(s, node);
    }
    ATreeNode* search(int value)
    {
        ATreeNode* temp = root;

        while (temp != NULL)
        {
            if (temp->Index == value)
                return temp;
            if (value < temp->Index)
                temp = temp->left;
            else
                temp = temp->right;
        }
        return NULL;
    }
    void printTree(int idx) {
        ATreeNode* node = search(idx);
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
    void ReadFromFile(string path)
    {
        ifstream file;
        file.open(path);
        string line, id, fnam, lnam, comp, city, country, p1, p2, email, web, sub;
        while (getline(file, line)) {
            int idx;
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
            ATreeNode* node = createNode(idx, id, fnam, lnam, comp, city, country, p1, p2, email, sub, web);
            insertionWithRotation(node);
        }
        file.close();

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
        ATreeNode* node = createNode(idx, id, fnam, lnam, comp, city, country, p1, p2, email, sub, web);
        insertionWithRotation(node);
        // }
    }
    void ClearTree()
    {
        root = NULL;
    }
    void bfs()
    {
        queue<ATreeNode*> q;
        q.push(root);
        while (!q.empty())
        {
            ATreeNode* temp = q.front();
            q.pop();
            if (temp->left == NULL && temp->right == NULL)
                cout << temp->Index << endl;
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
        stack<ATreeNode*> stack;
        stack.push(root);
        while (!stack.empty())
        {
            ATreeNode* curr = stack.top();
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
        stack<ATreeNode*> s1, s2;
        s1.push(root);
        while (!s1.empty())
        {
            ATreeNode* curr = s1.top();
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
        stack<ATreeNode*> stack;
        ATreeNode* curr = root;
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
    void update(int idx) {
        ATreeNode* node = search(idx);
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
    ATreeNode* minValueNode(ATreeNode* node)
    {
        ATreeNode* current = node;
        while (current->left != NULL)
            current = current->left;

        return current;
    }

    ATreeNode* deleteValue(ATreeNode* root, int key)
    {
        if (root == NULL)
            return root;
        if (key < root->Index)
            root->left = deleteValue(root->left, key);
        else if (key > root->Index)
            root->right = deleteValue(root->right, key);
        else
        {
            if ((root->left == NULL) ||
                (root->right == NULL))
            {
                ATreeNode* temp = root->left ? root->left : root->right;

                if (temp == NULL)
                {
                    temp = root;
                    root = NULL;
                }
                else
                    *root = *temp;

                free(temp);
            }
            else
            {
                ATreeNode* temp = minValueNode(root->right);
                root->Index = temp->Index;
                root->right = deleteValue(root->right,
                    temp->Index);
            }
        }
        if (root == NULL)
            return root;
        root->height = 1 + max(height(root->left), height(root->right));
        int balance = getBalanceFactor(root);
        if (balance > 1 &&
            getBalanceFactor(root->left) >= 0)
            return rightRotate(root);
        if (balance > 1 &&
            getBalanceFactor(root->left) < 0)
        {
            root->left = leftRotate(root->left);
            return rightRotate(root);
        }

        if (balance < -1 && getBalanceFactor(root->right) <= 0)
            return leftRotate(root);

        if (balance < -1 && getBalanceFactor(root->right) > 0)
        {
            root->right = rightRotate(root->right);
            return leftRotate(root);
        }
        return root;
    }

};

