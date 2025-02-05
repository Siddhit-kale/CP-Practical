#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node *left, *right;
};

struct Node* newNode(int data)
{
	struct Node* node = new Node;
	node->data = data;
	node->left = node->right = NULL;

	return (node);
}


vector<int> longestPath(Node* root)
{
	if (root == NULL) {
		vector<int> temp
			= {};
		return temp;
	}

	vector<int> rightvect
		= longestPath(root->right);

	vector<int> leftvect
		= longestPath(root->left);

	if (leftvect.size() > rightvect.size())
		leftvect.push_back(root->data);

	else
		rightvect.push_back(root->data);

	return (leftvect.size() > rightvect.size()
				? leftvect
				: rightvect);
}

// Driver Code
int main()
{
	struct Node* root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->left->right->right = newNode(6);

	vector<int> output = longestPath(root);
	int n = output.size();

	cout << output[n - 1];
	for (int i = n - 2; i >= 0; i--) {
		cout << " -> " << output[i];
	}

	return 0;
}
