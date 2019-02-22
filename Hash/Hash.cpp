#include "pch.h"
#include "Hash.h"
#include <iostream>
#include <string>
using namespace std;


Hash::Hash()
{

	for (int i = 0; i < HashTableSize; i++)
	{
		HashTable[i] = getnewNode();
		HashTable[i]->name = "Empty";
		HashTable[i]->team = "Empty";
		HashTable[i]->next = nullptr;
	}
}
int Hash::HashFunction(string team) 
{
	int index;
	int sum = 0;
	for (int i = 0; i < team.length(); i++)
	{
		sum = sum + int(team[i]);
	}
	index = sum % HashTableSize;
	return index;
}
void Hash::Additem(string name,string team)
{
	HashNode* newitem = getnewNode(name, team);
	int index = HashFunction(team);
	if (HashTable[index]->name == "Empty")
	{
		HashTable[index]->name=name;
		HashTable[index]->team = team;;
		HashTable[index]->next=nullptr;
	}
	else
	{
		HashNode* temp = HashTable[index];
		while (temp->next != nullptr)
		{
			temp = temp->next;
		}
		temp->next = newitem;
	}
}
int Hash::NumberofItems_per_index(int index) 
{
	int count = 0;
	if (HashTable[index]->name == "Empty")
		return 0;
	else
	{
		count++;
		HashNode* tempptr = HashTable[index];
		while (tempptr->next != nullptr)
		{
			tempptr = tempptr->next;
			count++;
		}
		return count;
	}
}
void Hash::PrintTable()
{
	for (int i = 0; i < HashTableSize; i++)
	{
		HashNode* tempptr = HashTable[i];
		while (tempptr!= nullptr)
		{
			cout << tempptr->name<< "----->";
			tempptr = tempptr->next;
		}
		cout << endl;
	}
}