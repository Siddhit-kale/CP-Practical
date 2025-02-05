#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

void collectLeaves(Node* root,
                    vector<int>& result) {
  
    if (root == nullptr) {
        return;
    }

    collectLeaves(root->left, result);

    if (root->left == nullptr && 
        root->right == nullptr) {
        result.push_back(root->data);
    }

    collectLeaves(root->right, result);
}

void collectBoundaryLeft(Node* root, 
                         vector<int>& result) {
    if (root == nullptr) {
        return;
    }

    if (root->left) {
        result.push_back(root->data);
        collectBoundaryLeft(root->left, result);
    }
    else if (root->right) {
        result.push_back(root->data);
        collectBoundaryLeft(root->right, result);
    }
}

void collectBoundaryRight(Node* root, 
                          vector<int>& result) {
    if (root == nullptr) {
        return;
    }

    if (root->right) {
        collectBoundaryRight(root->right, result);
        result.push_back(root->data);  
    } 
    else if (root->left) {
        collectBoundaryRight(root->left, result);
        result.push_back(root->data);
    }
}

vector<int> getBoundary(Node* root) {
    vector<int> result;

    if (root == nullptr) {
        return result;
    }

    result.push_back(root->data);

    collectBoundaryLeft(root->left, result);

    collectLeaves(root->left, result);
    collectLeaves(root->right, result);

    vector<int> rightBoundary;
    collectBoundaryRight(root->right, rightBoundary);
    result.insert(result.end(), 
                  rightBoundary.begin(), 
                  rightBoundary.end());

    return result;
}


int main() {
  
    Node* root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(22);
    root->left->left = new Node(4);
    root->left->right = new Node(12);
    root->left->right->left = new Node(10);
    root->left->right->right = new Node(14);
    root->right->right = new Node(25);

    vector<int> boundary = getBoundary(root);
    for (int x : boundary) {
        cout << x << " ";
    }

    return 0;
}
