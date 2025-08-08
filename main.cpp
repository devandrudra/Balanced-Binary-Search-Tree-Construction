#include<iostream>
#include<vector>
using namespace std;
#include "BalancedBST.cpp";


void inorderTraversal(node* head)
{
    if(head == NULL) return;
    inorderTraversal(head -> left);
    cout << head -> data << " ";
    inorderTraversal(head -> right);
}

void preTraversal(node* head)
{
    if(head == NULL) return;
    cout << head -> data << " ";
    preTraversal(head -> left);
    preTraversal(head -> right);
    
}

    // Constructing an unbalanced BST
    //        4
    //       / \
    //      3   5
    //     /     \
    //    2       6
    //   /		   \
    //  1		    7

int main()
{
    node* head;
    head = new node(4);
    head -> left = new node(3);
    head -> right = new node(5);
    head -> left -> left = new node(2);
    head -> left -> left -> left = new node(1);
    head -> right -> right = new node(6);
    head -> right -> right -> right = new node(7);
    cout << "\npreorder for real one\n";
    preTraversal(head);

    BinarySearchTree obj(head);
    node* root = obj.BalancedBinarySearchTree();
    cout << "\npreorder for Balanced BINary Search Tree\n";
    preTraversal(root);

    return 0;

}