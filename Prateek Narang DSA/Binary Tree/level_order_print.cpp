#include<bits/stdc++.h>
using namespace std;

class node {
public:
	int data;
	node* left;
	node* right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

node* buildTree() {
	int d;
	cin >> d;
	if (d == -1) {
		return NULL;
	}
	node* n = new node(d);
	n->left = buildTree();
	n->right = buildTree();

	return n;
}
void levelOrderPrint(node*root) {

	queue<node*> q;
	q.push(root);
	q.push(NULL);

	while (!q.empty()) {
		node* temp = q.front();
		if (temp == NULL) {
			cout << endl;
			q.pop();
			if (!q.empty()) {
				q.push(NULL);
			}
		}
		else {
			q.pop();
			if (temp->left) {
				q.push(temp->left);
			}
			if (temp->right) {
				q.push(temp->right);
			}
		}
	}
	return;

}
int main() {
	node* root = buildTree();
	levelOrderPrint(root);

	return 0;
}
