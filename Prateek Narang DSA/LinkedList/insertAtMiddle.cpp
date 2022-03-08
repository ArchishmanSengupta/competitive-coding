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

///method to insert at Middle
void insertAtMid(node *&head, int data, int pos) {
	if (pos == 0) {
		insertAtHead(head, data);
	}
	else {
		node *temp = head;
		for (int jump = 1; jump <= pos - 1; i++) {
			temp = temp->next;
		}
		node *n = new node(data);
		n->next = temp->next;
		temp->next = n;

	}
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
	insertAtMiddle(head, 100, 2);
	printL(head);

	return 0;
}