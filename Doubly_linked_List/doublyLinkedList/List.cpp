#include "pch.h"
#include "List.h"
#include <iostream>
using namespace std;
#include "ListNode.h"

List::List(ListNode *a, ListNode *b)
{
	a = nullptr;
	b = nullptr;
}
void List::insertatfront(const int &a)
{
	ListNode *newptr = getNewNode(a);
	if (IsEmpty())
	{
		firstptr = lastptr = newptr;
	}
	else
	{
			newptr->nextptr = firstptr;
			firstptr->prevptr= newptr;
			firstptr = newptr;
	}
}
void List::insertatlast(const int &a)
{
	ListNode *newptr = getNewNode(a);
	if (IsEmpty())
	{
		firstptr = lastptr = newptr;
	}
	else
	{
		newptr->prevptr = lastptr;
		lastptr->nextptr = newptr;
		lastptr = newptr;
	}
}
void List::removefromfront() 
{
	ListNode *tempptr = firstptr;
	if (IsEmpty())
	{
		cout << "The list is empty.\n";
	}
	{
		if (firstptr == lastptr)
		{
			firstptr = lastptr = nullptr;
		}
		else
		{
			firstptr->nextptr->prevptr = nullptr;
			firstptr = firstptr->nextptr;
			delete tempptr;
		}
	}
}
void List::removefromlast()
{
	ListNode *tempptr = lastptr;
	if (IsEmpty())
	{
		cout << "The list is empty.\n";
	}
	else
	{
		if (firstptr == lastptr)
		{
			firstptr = lastptr = nullptr;
		}
		else
		{
		tempptr->prevptr->nextptr = nullptr;
		lastptr = lastptr->prevptr;
		delete tempptr;
		}
	}
}
void List::print() 
{
	ListNode *tempptr = firstptr;
	if (IsEmpty())
	{
		cout << "The list is empty";
	}
	else
	{
		while (tempptr != nullptr)
		{
			cout << tempptr->getData()<<" ";
			tempptr = tempptr->nextptr;
		}
	}
}
bool List::IsEmpty()
{
	if (firstptr == nullptr)
		return true;
	else
		return false;
}
ListNode* List::getNewNode(int value)
{
	ListNode *newobj = new ListNode(value);
	return newobj;
}