#include <iostream>
#include "node.h"
#include "insertion.h"
#include "minimum.h"
#include "merge.h"

// Вспомогательная функция для вывода дерева на экран
void print(Node* root) {
    if (!root) {
        return;
    }
    std::cout << root->key1 << ' ';
    if (root->key2 > 0) {
        std::cout << root->key2 << ' ';
    }
    print(root->left);
    print(root->mid);
    print(root->right);
}

int main() {
    Node* root1 = nullptr;
    Node* root2 = nullptr;

    // Проверяем, что первое дерево пустое
    if (is_empty(root1)) {
        std::cout << "Убедились, что первое дерево пустое" << std::endl;
    }

    // Добавляем элементы в первое дерево
    root1 = insert(root1, 1);
    root1 = insert(root1, 20);
    root1 = insert(root1, 30);
    root1 = insert(root1, 40);
    
    std::cout << "Первое дерево: ";
    print(root1);
    std::cout << std::endl;
    
    // Находим минимальный элемент первого дерева
    int min1 = minimum(root1);
    std::cout << "Минимальный элемент первого дерева: " << min1 << std::endl;

    // Проверяем, что второе дерево пустое
    if (is_empty(root2)) {
        std::cout << "Убедились, что второе дерево пустое" << std::endl;
    }

    // Добавляем элементы во второе дерево
    root2 = insert(root2, 5);
    root2 = insert(root2, 15);
    root2 = insert(root2, 2);
    root2 = insert(root2, 35);
    
    std::cout << "Второе дерево: ";
    print(root2);
    std::cout << std::endl;
    
    // Находим минимальный элемент второго дерева
    int min2 = minimum(root2);
    std::cout << "Минимальный элемент второго дерева: " << min2 << std::endl;

    // Объединяем два дерева
    Node* mergedRoot = merge(root1, root2);

    // Проверяем, что объединенное дерево не пустое
    if (!is_empty(mergedRoot)) {
        std::cout << "Объединенное дерево: ";
        print(mergedRoot);
        std::cout << std::endl;

        // Находим минимальный элемент объединения
        int minMerged = minimum(mergedRoot);
        std::cout << "Минимальный элемент объединения: " << minMerged << std::endl;
    } else {
        std::cout << "Объединенное дерево пустое" << std::endl;
    }

    return 0;
}
