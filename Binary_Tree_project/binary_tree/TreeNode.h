#include "pch.h"
#pragma once
#ifndef TREENODE_H
#define TREENODE_H
class TreeNode
{
	friend class Tree;
public:
	TreeNode(int=0);
	int getdata() const;
private:
	TreeNode *lptr;
	TreeNode *rptr;
	int data;
};
#endif // !TREENODE_H
