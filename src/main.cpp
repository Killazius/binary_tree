#include <iostream>
#include "binary_tree.h"



int main() {
    tree_el* root = create_tree_el(15);
    insert_into_tree(root,create_tree_el(10));
    insert_into_tree(root,create_tree_el(1));
    insert_into_tree(root,create_tree_el(11));
    insert_into_tree(root,create_tree_el(16));
    insert_into_tree(root,create_tree_el(2));

    print_tree(root);

    std::cout << std::endl << search_el(root,2);


}
