#include <iostream>
#include <string>
using namespace std;

struct node
{

    string value;
    node *left = NULL, *right = NULL;
};

int solveExpressionTree(node *root)
{

    if (root == NULL)
        return 0;

    if (root->left == NULL && root->right == NULL)
    {
        if (root->value != "null")
            return stoi(root->value);
        else
            return 0;
    }

    int left = solveExpressionTree(root->left);
    int right = solveExpressionTree(root->right);

    if (root->value == "+")
        return left + right;

    if (root->value == "-")
        return left - right;

    if (root->value == "*")
        return left * right;

    if (root->value == "/")
        return left / right;

    return -1;
}