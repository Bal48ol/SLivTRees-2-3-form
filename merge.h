#ifndef MERGE_H
#define MERGE_H

#include "node.h"

Node* merge(Node* root1, Node* root2) {
    // Вставляем все элементы из второго дерева в первое
    if (!root2) {
        return root1;
    }
    root1 = insert(root1, root2->key1);
    root1 = insert(root1, root2->key2);
    root1 = merge(root1, root2->left);
    root1 = merge(root1, root2->mid);
    root1 = merge(root1, root2->right);
    return root1;
}

#endif
