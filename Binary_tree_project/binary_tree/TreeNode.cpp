#include "pch.h"
#include "TreeNode.h"

TreeNode::TreeNode(int a)
	:lptr(0),rptr(0),data(a)
{
}
int TreeNode::getdata() const
{
	return data;
}
