//
// Created by killaz on 14.08.2024.
//

#include "binary_tree.h"
#include <iostream>

tree_el* create_tree_el(int value) {
    tree_el* root = new tree_el(value);
    return root;
}

void insert_into_tree(tree_el* root, tree_el* cur_elem) {
    if (cur_elem->value < root->value) {
        if (root->left == nullptr) root->left = cur_elem;
        else insert_into_tree(root->left, cur_elem);
    }
    else {
        if (root->right == nullptr) root->right = cur_elem;
        else insert_into_tree(root->right, cur_elem);
    }
}

void print_tree(tree_el* root) {
    if (root->left != nullptr) {
        print_tree(root->left);
    }
    std::cout << root->value << " ";
    if (root->right != nullptr) {
        print_tree(root->right);
    }
}

