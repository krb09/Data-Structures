#include "pch.h"
#include "TreeNode.h"
#pragma once
#ifndef TREE_H
#define TREE_H
class Tree
{
public:
	Tree();
	void insertNode(TreeNode**, int);
	void preordertraverse(TreeNode*);
	void postordertraverse(TreeNode*);
	void inordertraverse(TreeNode*);
	void insertNodeHelper(int);
	void preorderHelper();
	void postorderHelper();
	void inorderHelper();
private:
	TreeNode *rootptr;
	TreeNode* getnewnode(int value)								//utility function
	{
		TreeNode* newptr = new TreeNode(value);
		return newptr;
	}
	
};
#endif // !TREE_H
