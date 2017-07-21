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
