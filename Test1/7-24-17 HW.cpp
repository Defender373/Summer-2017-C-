#include <iostream>
#include <set>
#include <queue>

using namespace std;

struct DNode {
	DNode* prev;
	DNode* next;
	int data;
};

struct BNode {
	BNode* left = NULL;
	BNode* right = NULL;
	int data = 0;
};

struct Node{
    Node* next = NULL;
    int data;
};

struct Queue{
    Node* head = NULL;
    Node* tail = NULL;

    void push(Node* data);
    int pop();
};

void Queue::push(Node* data){
    //tail->next = data;
    //Had to changes because of segmentation faults

    if (head == NULL && tail == NULL) {
        head = data;
        tail = data;
    }else{
        tail->next = data;
        tail = data;
    }



}

int Queue::pop(){
    int answer = 0;
    Node* temp = head;
    if (temp != NULL){
        answer = temp->data;
        head = head->next;
        delete temp;

    }
    else{
        answer = -1;
        return answer;
    }

    return answer;
}

void preOrder(BNode* root) {
	if (root == NULL) {
		return;
	}
	else {
		int temp = root->data;
		preOrder(root->left);
		preOrder(root->right);
	}
    //How does this function know when to stop?
}

void addToQueue(BNode* root, Queue &origin){
    if (root == NULL){
        return;
    }
    else{
        int temp = root->data;
        Node *place = new Node();
        place->data = temp;
        origin.push(place);

        addToQueue(root->left, origin);
        addToQueue(root->right, origin);
    }
}

void pushBack(BNode* root, BNode* enter, Queue &origin){
    BNode *pos = new BNode();

    if (root->data < enter->data){
        enter->left = root;
        pos = enter->left;
    }

    if (root->data > enter->data){
        enter->right = root;
        pos = enter->right;
    }


    int pop = 0;
    while (pop != -1){
        pop = origin.pop();
        if (pop > pos->data) {
            pos->right = new BNode;
            pos->right->data = pop;

            pos = pos->right;
        }
        if (pop < pos->data && pop != -1){
            pos->left = new BNode;
            pos->left->data = pop;

            pos = pos->left;
        }
    }

}

int main() {


//	DNode *root = new DNode();
//	root->data = 0;
//	root->next = new DNode();
//	root->next->data = 10;
//	root->next->next = new DNode();


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


	preOrder(b_root);

    Queue origin;
//    Node *test = new Node();
//    test->data = 1;
//
//    origin.push(test);
//
//    Node *second = new Node();
//    second->data = 2;
//
//    origin.push(second);

    addToQueue(b_root, origin);








    //pushback function test below
    BNode* push_root = new BNode();
    push_root->data = 15;



    pushBack(b_root, push_root, origin);


	return 0;
}

//Implement the pushback function
//Clean up code as I go and anything that I can turn into classes and struct.
//Queue class that has constructor

//Take some screenshots to make sure that I'm done. Add to Github