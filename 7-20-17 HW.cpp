struct Node {
	Node* next = NULL;
	int data;
};

struct BNode() extends Node {
	BNode* left = NULL;
	BNode* right = NULL;
	int data = 0;
};


//HW comments
//Doubly linked list, its goona be push front and push back.

//Binary Tree, if oyu do push back, it should go to the next available spot. If you do push front it should almost create a new binary tree and the old binary tree is a left node.

//Take the structs and change them so that they're object oreiented in style. Have DNode extend Node. More complicated extends basic.

// Double linked List
Node* pushback(Node& input, Node& root) {
	Node* itr = root;
	while (itr->next != NULL) {
		itr = itr->next;
	}

	itr->next = input;
	input->prev = itr;
	return itr->next;
}

Node* pushfront(Node& input, Node& root) {
	Node* temp = input;
	temp->next = root;
	root->prev = temp;
	root = temp;
	return root;

}

//Binary Tree
BNode* pushback(BNode& input, BNode& root) {
	BNode* itr = root;
	while (itr != NULL) {
		if (input->data > itr->data) {
			itr = itr->right;
		}
		else {
			itr = itr->left;
		}
	}

	input = itr;
	return itr;
}

BNode* pushfront(Node& input, BNode* root) {
	BNode* temp = input;
	temp->left = root;
	BNode* itr = root;
	while (itr->data != NULL) {
		if (temp->left->right != NULL) {

			while (temp->right != NULL) {

			}
		}
	}
}
