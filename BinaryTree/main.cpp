#include "bintree.h"
#include "build_tree.h"
#include <iostream>
using namespace std;
//
//template <class T>
//void printItem(T item)
//{
//    cout<<item<<" ";
//}

 //Finding the depth of the tree --Question 1
    template <class Item>
    int depth(binary_tree_node<Item> *root)
    {
       if(root == NULL)
           return -1;
       else return 1 + max(depth(root->left()), depth(root->right()));
    }

    // Return True if the tree is balanced else False --Question 5
    template <class Item>
    bool tree_is_balanced(binary_tree_node<Item> *root) {
       if(root==NULL) 
           return true;
       else if(!tree_is_balanced(root->left())||!tree_is_balanced(root->right())) 
           return false;
       else if(abs((depth(root->left()))-(depth(root->right()))>1) )
           return false;
       else return true;
    }
    // Finding the max value in a tree --Question 2
    template <class Item>
    Item max(binary_tree_node<Item> *root){
//        if(root->right() == NULL)
//            return root->data();
//        else max(root->right());
        assert(root!=NULL);
        Item rmax = 0;
        Item lmax = 0;
        if(root->left()==NULL);
        else lmax = max(root->left());
        if(root->right()==NULL);
        else lmax = max(root->right());
        if(root->data() > lmax && root->data() > rmax)
            return root->data();
        else if(lmax > root->data() && lmax > rmax )
            return lmax;
        else if (rmax > root->data() && rmax > lmax )
            return rmax;

    }
    
    // The sum of values in all nodes of a tree --Question 3
    double tree_sum(binary_tree_node<double> *root) {
        if(root == NULL) 
            return 0;
        return (root->data() + tree_sum(root->left()) + tree_sum(root->right()));        
    }

    double tree_average(binary_tree_node<double> *root)
    {
        return tree_sum(root) / tree_size(root) ;
    }



int main() {
    binary_tree_node<int> *s1 = sample1();
   
        cout<<"Size of s1 "<< tree_size(s1);
        cout<<"\nDepth of s1 "<< depth(s1);
        cout<<"\nMax of s1 "<< max(s1)<<"\n\n";
    
    
    binary_tree_node<int> *s2 = sample2();
   
        cout<<"Size of s2 "<< tree_size(s2);
        cout<<"\nDepth of s2 "<< depth(s2);
        cout<<"\nMax of s2 "<< max(s2)<<"\n\n";
    
    
    binary_tree_node<double> *s3 = sample3();
    
        cout<<"Size of s3 "<< tree_size(s3);
        cout<<"\nDepth of s3 "<< depth(s3);
        cout<<"\nMax of s3 "<< max(s3)<<"\n\n";
    
    
    binary_tree_node<double> *s4 = sample4();
    binary_tree_node<string> *s5 = sample5();
    binary_tree_node<double> *b1 =sample_bal1();
    binary_tree_node<double> *b2 =sample_bal2();
    
   
        cout<<"Size of s4 "<< tree_size(s4);
        cout<<"\nDepth of s4 "<< depth(s4);
        cout<<"\nMax of s4 "<< max(s4)<<"\n\n";
   
    
        cout<<"Sum of s3 "<< tree_sum(s3);
        cout<<"\nAverage of s3 "<< tree_average(s3);
        cout<<"\nSize of s4 "<< tree_size(s3)<<"\n\n";
        
        cout<<"Sum of b1 "<< tree_sum(b1);
        cout<<"\nAverage of b1 "<< tree_average(b1);
        cout<<"\nSize of b1 "<< tree_size(b1)<<"\n\n";
        
        cout<<"Sum of b2 "<< tree_sum(b2);
        cout<<"\nAverage of b2 "<< tree_average(b2);
        cout<<"\nSize of b2 "<< tree_size(b2)<<"\n\n";
        
        cout<<"s1 is balanced : "<<tree_is_balanced(s1)<<endl;
        cout<<"s2 is balanced : "<<tree_is_balanced(s2)<<endl;
        cout<<"s3 is balanced : "<<tree_is_balanced(s3)<<endl;
        cout<<"s4 is balanced : "<<tree_is_balanced(s4)<<endl;
        cout<<"s5 is balanced : "<<tree_is_balanced(s5)<<endl;
        cout<<"b1 is balanced : "<<tree_is_balanced(b1)<<endl;
        cout<<"b2 is balanced : "<<tree_is_balanced(b2)<<endl;
        
    
    //print(s1, 0);
    //cout<<endl;    
    
//    inorder(printItem<int>, s1);
//    cout<<endl;    
//        
//    preorder(printItem<int>, s1);
//    cout<<endl;    
//        
//    postorder(printItem<int>, s1);
//    cout<<endl;    
//    
    
    //cout<<
    //print(s2, 0);
   // cout<<endl;
    
//    inorder(printItem<int>, s2);
//    cout<<endl;    
//        
//    preorder(printItem<int>, s2);
//    cout<<endl;    
//        
//    postorder(printItem<int>, s2);
//    cout<<endl;   
//    
/*    binary_tree_node<double> *s3 =sample3();
    print(s3, 0);
    cout<<endl;
    
    binary_tree_node<double> *s4 =sample4();
    print(s4, 0);
    cout<<endl;


    binary_tree_node<string> *s5 = sample5();
    print(s5, 0);
    cout<<endl;
     
    binary_tree_node<double> *s6 =sample_bal1();
    print(s6, 0);
    cout<<endl;
    
    binary_tree_node<double> *s7 =sample_bal2();
    print(s7, 0);
    cout<<endl;
*/
}
