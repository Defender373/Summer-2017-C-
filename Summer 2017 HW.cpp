// 7/18/17
// used this website http://www.cprogramming.com/tutorial/lesson18.html
// Binary Tree with a few values added to it.
struct node
{
	int key_value;
	node *left;
	node *right;
};

void insert(int key, node *leaf) {
	if (key < left->key_value) {
		if (leaf->left != NULL) {
			insert(key, leaf->left);
		}
		else {
			leaf->left = new node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
	else if (key >= leaf->key_value) {
		if (leaf->right != NULL) {
			insert(key, leaf->left);
		}
		else {
			leaf->right = new node;
			leaf->right->key_value = key;
			leaf->right-> left = NULL;
			leaf->right-> right = NULL;
		}
	}
}

int main() {
	BstNode* root = Null;
	insert(root, 15);
	insert(root, 10);
	insert(root, 20);
}

//Double linked list
int main(int argc, char** argv) {
	struct box {
		int data;
		box *prev;
		box *next;

	};

	box* head;
	box* tail;
	box* n;

	//First node
	n = new node;
	n->data = 1;
	n->prev = NULL;
	head = n;
	tail = n;

	//Second node
	n = new node;
	n->data = 2;
	n->prev = tail;
	tail->next = n;
	tail->n;

	//Third node
	n = new node;
	n->data = 3;
	n->prev = tail;
	tail->next = n;
	tail->n;
	
	//Last node needs to have Tail set to Null
	tail->next = NULL;


	return 0;
}


//Making a double list
//Method 1

int main() {
	std::list<double> holder;
}




/* 7-20-17 Notes */
struct Node {
	Node* next = NULL;
	int data;
}


struct DNode() {
	DNode* prev;
	DNode* next;
	int data;
}
DNode root = new DNode()
root = 0;
root->next = new DNode();
root->next->data = 10;
root->next->next = new DNode();




struct BNode() {
	BNode* left = NULL;
	BNode* right = NULL;
	int data = 0;
};
BNode root = new BNode();
root->data = 5;
//root->left = NULL;
//root->right = NULL;

root->left->data = 3;
//root->left->left = NULL;
//root->left->right = NULL;

root->left->right->data = 4;
//root->left->right->left = NULL;
//root->left->right->right = NULL;

root->left->left->data = 1;

root->right->data = 6;

root->right->right->data = 11;

root->right->right->left->data = 7;



//Linked List Insert Function

Node* pushback(Node& input, Node& root) {

	Node* itr = root;
	while (itr->next != NULL) {
		itr = itr->next;
	}

	itr->next = input;

	//itr->next = new Node();
	//manually put information from the user into the new node.

	return itr->next;
}

Node* pushfront(Node& input, Node& root) {

	Node* temp = input;

	temp->next = root;

	root = temp;

	return root;
}

//Doubly linked list, its goona be push front and push back.

//Binary Tree, if oyu do push back, it should go to the next available spot. If you do push front it should almost create a new binary tree and the old binary tree is a left node.

//Take the structs and change them so that they're object oreiented in style. Have DNode extend Node. More complicated extends basic.





