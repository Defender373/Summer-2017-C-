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

struct box {
	int value;
	box *prev;
	box *next;

};


//Making a double list
//Method 1

int main() {
	std::list<double> holder;
}
