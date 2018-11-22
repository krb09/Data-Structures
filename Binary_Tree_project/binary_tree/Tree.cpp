#include "pch.h"
#include "Tree.h"
#include <iostream>
using namespace std;

Tree::Tree()
	:rootptr(0)
{

}
void Tree::insertNodeHelper(int value)
{
	insertNode(&rootptr, value);
}
void Tree::insertNode(TreeNode **ptr, int a)					//ptr to a ptr
{
	if (*ptr == 0)
	{
		*ptr = getnewnode(a);							//just the ptr == rootptr
	}
	else if ((*ptr)->data < a)
		insertNode(&(*ptr)->lptr, a);				//address of *ptr
	else if ((*ptr)->data > a)
		insertNode(&(*ptr)->rptr, a);
	else
		cout << "Duplicate value";
}
void Tree::preorderHelper()
{
	preordertraverse(rootptr);
}
void Tree::preordertraverse(TreeNode *ptr)
{
	if (ptr != 0)
	{
		cout << ptr->data<<" ";
		preordertraverse(ptr->lptr);
		preordertraverse(ptr->rptr);
	}
}
void Tree::postorderHelper()
{
	postordertraverse(rootptr);
}
void Tree::postordertraverse(TreeNode *ptr)
{
	if (ptr != 0)
	{
		postordertraverse(ptr->lptr);
		postordertraverse(ptr->rptr);
		cout << ptr->data<<" ";
	}
}
void Tree::inorderHelper()
{
	inordertraverse(rootptr);
}
void Tree::inordertraverse(TreeNode *ptr)
{
	if (ptr != 0)
	{
	inordertraverse(ptr->lptr);
	cout << ptr->data<<" ";
	inordertraverse(ptr->rptr);
	}
}