#include "project/binary_search_tree.h"

#include <iostream>

int main() {
    BinarySearchTree tree;
    for (int value : {50, 30, 70, 20, 40, 60, 80}) {
        tree.insert(value);
    }

    std::cout << "In-order traversal:";
    for (int value : tree.inorderTraversal()) {
        std::cout << ' ' << value;
    }
    std::cout << "\nSize: " << tree.size()
              << "\nHeight: " << tree.height()
              << "\nMinimum: " << tree.minimum()
              << "\nMaximum: " << tree.maximum()
              << "\nContains 40: " << (tree.contains(40) ? "yes" : "no")
              << '\n';

    tree.remove(30);
    std::cout << "After removing 30:";
    for (int value : tree.inorderTraversal()) {
        std::cout << ' ' << value;
    }
    std::cout << '\n';

    return 0;
}
