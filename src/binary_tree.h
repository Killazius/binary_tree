//
// Created by killaz on 14.08.2024.
//

#ifndef BINARY_TREE_H
#define BINARY_TREE_H

struct tree_el {
    int value;
    tree_el* left;
    tree_el* right;
    tree_el(int _value, tree_el* _left = nullptr,tree_el* _right = nullptr): value(_value), left(_left), right(_right){};
};

tree_el* create_tree_el(int value);

void insert_into_tree(tree_el* root, tree_el* cur_elem);

void print_tree(tree_el* root);

tree_el* search_el(tree_el* root, int value);

tree_el* delete_el(tree_el* root, int value);

void clear_tree(tree_el* root);

tree_el* find_min(tree_el* root);
tree_el* find_max(tree_el* root);
#endif //BINARY_TREE_H
