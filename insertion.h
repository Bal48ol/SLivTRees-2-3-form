#ifndef INSERTION_H
#define INSERTION_H

#include "node.h"

Node* insert(Node* root, int key) {
    if (!root) { // Если дерево пустое
        Node* node = new Node;
        node->key1 = key;
        return node;
    }
    if (!root->left && !root->right) { // Если узел - лист
        if (key < root->key1) {
            root->key2 = root->key1;
            root->key1 = key;
        } else {
            root->key2 = key;
        }
        return root;
    }
    if (key < root->key1) {
        root->left = insert(root->left, key);
    } else if (key > root->key2) {
        root->right = insert(root->right, key);
    } else {
        root->mid = insert(root->mid, key);
    }
    return root;
}

#endif
