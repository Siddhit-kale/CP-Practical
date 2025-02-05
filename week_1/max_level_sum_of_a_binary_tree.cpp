#include <bits/stdc++.h> 
using namespace std; 

struct Node 
{ 
	int data; 
	struct Node *left, *right; 
}; 

int maxLevelSum(struct Node* root) 
{ 
	if (root == NULL) 
		return 0; 

	int result = root->data; 

	queue<Node*> q; 
	q.push(root); 
	while (!q.empty()) 
	{ 
		int count = q.size(); 

		int sum = 0; 
		while (count--) 
		{ 
			Node* temp = q.front(); 
			q.pop(); 

			sum = sum + temp->data; 

			if (temp->left != NULL) 
				q.push(temp->left); 
			if (temp->right != NULL) 
				q.push(temp->right); 
		} 

		result = max(sum, result); 
	} 

	return result; 
} 

struct Node* newNode(int data) 
{ 
	struct Node* node = new Node; 
	node->data = data; 
	node->left = node->right = NULL; 
	return (node); 
} 

int main() 
{ 
	struct Node* root = newNode(1); 
	root->left = newNode(2); 
	root->right = newNode(3); 
	root->left->left = newNode(4); 
	root->left->right = newNode(5); 
	root->right->right = newNode(8); 
	root->right->right->left = newNode(6); 
	root->right->right->right = newNode(7); 

	cout << "Maximum level sum is " << maxLevelSum(root) 
		<< endl; 
	return 0; 
}

	/* Constructed Binary tree is: 
				1 
			/    \ 
			2	 3 
		  /  \	  \ 
		 4    5	  8 
			  / \ 
			 6   7 ```````*/
