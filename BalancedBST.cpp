#ifndef BALANCEDBST_H
#define BALANCEDBST_H

#include<iostream>
#include<vector>
using namespace std;

struct node
{
    int data;
    node* left = NULL;
    node* right = NULL;
    node(int data)
    {
        this -> data = data;
    }
};

class BinarySearchTree
{
    node* head;
    void helper(node* head, vector<int> &in_arr)
    {
        if(head == NULL) return;
        helper(head -> left, in_arr);
        in_arr.push_back(head -> data);
        helper(head -> right, in_arr);
    }


    public:
    BinarySearchTree(node* head)
    {
        this -> head = head;
        
    }

    node* BalancedBinarySearchTree()
    {
        vector<int> vector_inorder = inorderVector();
        return BBST(0, vector_inorder.size() - 1, vector_inorder);
    }

    node* BBST(int start, int end, vector<int> vector_inorder)
    {
        
        if(start > end) return NULL;
        int mid = (start + end) / 2;
        node* root = new node(vector_inorder[mid]);
        root -> left = BBST(start, mid - 1, vector_inorder);
        root -> right = BBST(mid + 1, end, vector_inorder);
        return root;
    }


    vector<int> inorderVector()
    {
        vector<int> in_arr;
        this -> helper(this -> head, in_arr);
        return in_arr;
    }


};

#endif