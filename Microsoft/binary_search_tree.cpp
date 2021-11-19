#include<bits/stdc++.h>
using namespace std;

struct node {
	int data;
	node *left;
	node *right;

	node(int d) {
		data = d;
		left = NULL;
		right = NULL;
	}
};

// Insert in Binary tree
node* insertBST(node *root, int d) {
	//EMPTY NODE
	if (root == NULL) {
		return new node(d);
	}

	if (d < root->data) {
		root->left = insertBST(root->left, d);
	}
	else {
		//d>root->data
		root->right = insertBST(root->right, d);
	}
	return root;

}
void inorder(node *root) {
	if (root == NULL) {
		return;
	}
	inorder(root->left);
	cout << root->data << " ";
	inorder(root->right);
}

int main() {

	node *root = NULL;
	root = insertBST(root, 5);
	insertBST(root, 1);
	insertBST(root, 3);
	insertBST(root, 4);
	insertBST(root, 2);
	insertBST(root, 7);

	inorder(root);
	cout << endl;
	return 0;

}