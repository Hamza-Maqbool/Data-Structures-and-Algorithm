#include <iostream>
#include <string>
using namespace std;

struct TreeNode
{

    string value;
    TreeNode *left = NULL;
    TreeNode *right = NULL;
};

int solveExpressionTree(TreeNode *root)
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

bool EqualExpressionTree(TreeNode *node1, TreeNode *node2)
{
    int val1 = solveExpressionTree(node1);
    int val2 = solveExpressionTree(node2);
    if (val1 == val2)
        return true;
    return false;
}