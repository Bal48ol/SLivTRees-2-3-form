#ifndef MINIMUM_H
#define MINIMUM_H

#include "node.h"

int minimum(Node* root) {
    while (root->left || root->right) {
        if (root->left) {
            root = root->left;
        } else {
            root = root->mid;
        }
    }
    return root->key1;
}

#endif
