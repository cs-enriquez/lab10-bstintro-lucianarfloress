#include <iostream>

using namespace std;

// Implement the node class we will need for our Binary Search Tree
class Node {
	public:
		// the Node should contain
		int key;// 	- an integer "key" that holds the value of the Node
		Node *left;// 	- a pointer to each child possible child node ("right" and "left")
		Node *right;

		Node(int inkey ) { // Write a constructor for the Node
		key = inkey; // input: only an integer value for "key", no pointer arguments
		left = nullptr; // 		right and left pointers should be null
		right = nullptr;
		}
};


// Use this function to create a Binary Search Tree (BST) tree with the following values
// {13, 0, 7, 6, 21, 15, -2, 12, 99, 18, 19, -1}
Node* createTree() {
	// root
	Node *root = new Node(13);

			// LEFT SIDE
	root -> left = new Node(0);
	root -> left -> left = new Node(-2);
	root -> left -> right = new Node(7);
	root -> left -> right -> left = new Node(6);
	root -> left -> right -> right = new Node(12);
	root -> left -> left -> right = new Node(-1);

			// RIGHT SIDE
	root -> right = new Node(21);
	root -> right -> left = new Node(15);
	root -> right -> right = new Node(99);
	root -> right -> left -> right = new Node(18);
	root -> right -> left -> right -> right = new Node(19);
	

	return root;
}

// Write a function that will search the BST for a target value
//	input: integer target to search for,
			// pointer to root Node
// 	returns: true or false depending on if the value is found
// You should write this function recursively! What is the base case? What is the general case?
bool searchTree(int target, Node* root) {
	// Base cases
	return false;

	// General case
	return false;
	
}

// Write a function that will return the total number of Nodes in the tree
// 	input: pointer to the root Node
// 	returns: number of nodes currently in the tree
// You should write this function recursively!
int treeSize(Node* root) {
	// base case
	return -1;

	// General case
	return -1;

}

// BONUS! Write a function that will determine the height of the tree
int treeHeight(Node* root) {
	// base case
	return -1;

	// General case
	return -1;
}
