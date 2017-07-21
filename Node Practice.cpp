#include <cstring>

struct DNode {
	DNode *prev;
	DNode *next;
	int data;
};

struct BNode {
	BNode *left = NULL;
	BNode *right = NULL;
	int data = 0;
};



int main() {


	DNode *root = new DNode();
	root->data = 0;
	root->next = new DNode();
	root->next->data = 10;
	root->next->next = new DNode();


	BNode *b_root = new BNode();
	b_root->data = 5;
//b_root->left = NULL;
//b_root->right = NULL;

	b_root->left = new BNode;
	b_root->left->data = 3;
//b_root->left->left = NULL;
//b_root->left->right = NULL;

	b_root->left->right = new BNode;
	b_root->left->right->data = 4;
//b_root->left->right->left = NULL;
//b_root->left->right->right = NULL;

	b_root->left->left = new BNode;
	b_root->left->left->data = 1;

	b_root->right = new BNode;
	b_root->right->data = 6;

	b_root->right->right = new BNode;
	b_root->right->right->data = 11;

	b_root->right->right->left = new BNode;
	b_root->right->right->left->data = 7;
}

