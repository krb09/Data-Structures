#pragma once
#include "pch.h"
#ifndef HASH_H
#define HASH_H
#include <string>
using namespace std;

class Hash {
private:
	struct HashNode							//define a hashnode object
	{
		string name;
		string team;
		HashNode* next;
	};
	HashNode* getnewNode(string name="Empty", string team="Empty")		//get a new node
	{
		HashNode* newitem = new HashNode();
		newitem->name = name;
		newitem->team = team;
		newitem->next = nullptr;
		return newitem;
	}
	const int HashTableSize = 10;
	HashNode* HashTable[10];
	
public:
	Hash();
	void Additem(string,string);
	int HashFunction(string);
	int NumberofItems_per_index(int);
	void PrintTable();
};



#endif HASH_H
