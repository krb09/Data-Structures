#include "pch.h"
#include "ListNode.h"
#include<iostream>
using namespace std;

ListNode::ListNode(int a, ListNode* b, ListNode* c)
{
	setData(a);
	setnextPtr(b);
	setprevPtr(c);
}

void ListNode::setData(int a)
{
	data = a;
}
int ListNode::getData() const
{
	return data;
}
//---------------------------------------------------//
void ListNode::setnextPtr(ListNode* ptr)
{
	nextptr = ptr;
}
ListNode* ListNode::getnextPtr()
{
	return nextptr;
}
//---------------------------------------------------//
void ListNode::setprevPtr(ListNode* ptr)
{
	prevptr = ptr;
}
ListNode* ListNode::getprevPtr()
{
	return prevptr;
}
//---------------------------------------------------//
