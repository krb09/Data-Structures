// binary_tree.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include "Tree.h"
#include"TreeNode.h"
#include <iostream>
using namespace std;

int main()
{
	Tree BinaryTree;				//create a object of the type list
	int choice;
	int number;
	do {
		cout << "Welcome to Binary Tree program" << "\n" << "What would you like to do?\n";			//prompt user
		cout <<"1. add an element to the tree\n"
			<< "2. preorder transverse\n"
			<< "3. postorder transverse\n"
			<< "4. inorder transverse\n"
			<< "0. exit\n";
		cout << "Your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the item number:";
			cin >> number;
			BinaryTree.insertNodeHelper(number);
			break;
		case 2:
			BinaryTree.preorderHelper();
			break;
		case 3:
			BinaryTree.postorderHelper();
			break;
		case 4:
			BinaryTree.inorderHelper();
			break;
		case 0:
			break;
		}
	} while (choice != 0);
	return 0;
}

