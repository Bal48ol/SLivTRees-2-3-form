#ifndef NODE_H
#define NODE_H

struct Node {
    int key1;
    int key2;
    Node* left;
    Node* mid;
    Node* right;
};

bool is_empty(Node* root) {
    return (root == nullptr);
}

#endif
