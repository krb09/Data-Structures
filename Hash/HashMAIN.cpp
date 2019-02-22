// Hash.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <string>
#include "Hash.h"
using namespace std;

int main()
{
	Hash Table;
	Table.Additem("KARTIK", "Barcelona");
	Table.Additem("SHANTANU", "Liverpool");
	Table.Additem("KATHIK", "ManU"); 
	Table.Additem("SWARAJ", "ManU"); 
	Table.Additem("GOPI", "Real Madrid");
	Table.Additem("SAGAR", "ManU"); 
	Table.Additem("AYAN", "Arsenal");
	Table.Additem("KANISHK", "Arsenal");
	Table.Additem("SAUMYA", "PSG");
	Table.PrintTable();
}

