#include"pch.h"
#pragma once
#ifndef LISTNODE_H
#define LISTNODE_H
class ListNode
{
friend class List;
public:
	ListNode(int = 0, ListNode* = nullptr, ListNode* = nullptr);
	void setData(int);
	int getData() const;
	void setnextPtr(ListNode*);
	ListNode* getnextPtr();
	void setprevPtr(ListNode*);
	ListNode* getprevPtr();
private:
	int data;
	ListNode *nextptr;
	ListNode *prevptr;
};
#endif 

