#include "pch.h"
#pragma once
#include "ListNode.h"
#ifndef LIST_H
#define LIST_H
class List
{
public:
	List(ListNode* = nullptr, ListNode* = nullptr);
	void insertatfront(const int&);
	void removefromfront();
	void insertatlast(const int&);
	void removefromlast();
	void print();
	bool IsEmpty();
private:
	ListNode *firstptr;
	ListNode *lastptr;
	ListNode* getNewNode(int value);

};
#endif
