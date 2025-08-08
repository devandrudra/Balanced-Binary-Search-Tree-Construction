# Balanced Binary Search Tree in C++

This project demonstrates how to take an **unbalanced Binary Search Tree** and convert it into a **Balanced Binary Search Tree** (BBST) using an inorder traversal and a divide-and-conquer approach.

---

## 📂 Project Structure

├── BalancedBST.h # Contains struct node and BinarySearchTree class,<br>
├── main.cpp # Builds an unbalanced BST and balances it

## How It Works
1. Perform inorder traversal of the unbalanced BST → gives sorted array.

2. Recursively choose the middle element as the root to ensure balance.

3. Rebuild the tree from the sorted array.

## correctness
I printed it preorder traversal form due to verify that correct order comes from balanced and unbalanced because inorder will produce same output
