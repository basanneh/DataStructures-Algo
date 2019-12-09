#include <iostream>
#include <list>
#include "bintree.h"
#include "bst.h"
using namespace std;

template<class T> 
    void my_inorder(list<T>* l, binary_tree_node<T>* tree_node) {
        if (tree_node !=NULL) {
            my_inorder(l, tree_node->left());
            l->push_back(tree_node->data());
            my_inorder(l, tree_node->right());
        }
    }

int main() {
    list<int> l;
    binary_tree_node<int>* n = new binary_tree_node<int>(7,new binary_tree_node<int>(4,new binary_tree_node<int>(1),new binary_tree_node<int>(5)),new binary_tree_node<int>(8));

    my_inorder<int>(&l, n);
    for (list<int>::iterator it = l.begin(); it != l.end(); ++it)
        cout << *it << " ";
    cout <<endl;
    
    return 0;


}