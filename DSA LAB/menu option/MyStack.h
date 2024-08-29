#pragma once
#include <iostream>
using namespace std;
class MyStack
{
	struct node {
		int data;
		node *next;
	};
	node *top = NULL;
public:
	void push(int value) {
		node *ptr = new node();
		ptr->data = value;
		ptr->next = top;
		top = ptr;
	}
	bool isEmpty() {
		if (top == NULL) {
			return true;
		}
		else
			return false;
	}
	void pop() {
		if (isEmpty() == true) {
			cout << "Stack is Empty"<<endl;
		}
		else {
			node* ptr = top;
			top = top->next;
			delete(ptr);
		}
	}
	int ShowTop() {
		if (isEmpty() == true) {
			cout << "Stack is Empty" << endl;
		}
		else {
			return top->data;
		}
	}
};

