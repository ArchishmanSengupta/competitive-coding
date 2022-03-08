#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* next;

	node(int data) {
		this->data = data;
		next = NULL;
	}
};
//This method is to going to accept the head of the linkedlist

// we are passing by reference as we want to see the changes in the main as well
void insertAtHead(node* &head, int data) {
	if (head == NULL) {
		head = new node(data);
		return;
	}
	//otherwise
	node* n = new node(data);
	n->next = head;
	head = n;
}

void printL(node *head) {
	while (head != NULL) {
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}
int main() {
	node* head = NULL;
	insertAtHead(head, 5);
	insertAtHead(head, 4);
	insertAtHead(head, 3);
	insertAtHead(head, 2);
	insertAtHead(head, 1);
	printL(head);

	return 0;
}