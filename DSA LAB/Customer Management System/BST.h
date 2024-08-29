
#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
#include <queue>
// #ifndef BST_H
// #define BST_H
#include <cstdio>
using namespace std;
// struct TreeNode;
Class BST{
        public:
            TreeNode *root;
            BST(){
            root=NULL;
            }
            void Insert(TreeNode *node)
            {
            TreeNode *prev = root;
            TreeNode *next = root;
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
                string array[12];
                std::ifstream data(path);
                std::string line;
                int count = 0, count1 = 0;
                cout << "INNN" << endl;
                while (std::getline(data, line))
                {
                    std::stringstream lineStream(line);
                    std::string cell;
                    while (std::getline(lineStream, cell, ','))
                    {
                        array[count1] = cell;
                        count1++;
                    }
                    count1 = 0;
                    if (count > 0)
                    {
                        TreeNode *tree = new TreeNode();
                        tree->Index = stoi(array[0]);
                        cout<<tree->Index<<endl;
                        tree->CustomerId = array[1];
                        tree->FirstName = array[2];
                        tree->LastName = array[3];
                        tree->Company = array[4];
                        tree->City = array[5];
                        tree->Country = array[6];
                        tree->Phone1 = array[7];
                        tree->Phone2 = array[8];
                        tree->Email = array[9];
                        tree->SubscriptionDate = array[10];
                        tree->Website = array[11];
                        tree->left == NULL;
                        tree->right == NULL;
                        Insert(tree);
                    }
                    count++;
                }
            }
};
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

    TreeNode *left;
    TreeNode *right;
};