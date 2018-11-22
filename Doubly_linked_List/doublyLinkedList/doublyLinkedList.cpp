//Rattan, Kartik 187001624
#include"pch.h"
#include"List.h"    //include the header file for list		
#include<iostream>
#include<string>
using namespace std;
int main()
{
	List shoppinglist;				//create a object of the type list
	int choice;
	int number;
	do {
		cout << "Welcome to the shopping list program" << "\n" << "What would you like to do?\n";			//prompt user
		cout << "1. add an element to the front of list\n"
			<< "2. add an element to the end of list\n"
			<< "3. remove the item from front of the list\n"
			<< "4. remove the item from end of the list\n"
			<< "5. print the list\n"
			<< "0. exit\n";
		cout << "Your choice: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			cout << "Enter the item number:";
			cin >> number;
			shoppinglist.insertatfront(number);
			break;
		case 2:
			cout << "Enter the item number:";
			cin >> number;
			shoppinglist.insertatlast(number);
			break;
		case 3:
			shoppinglist.removefromfront();
			break;
		case 4:
			shoppinglist.removefromlast();
			break;
		case 5:
			shoppinglist.print();
			break;
		case 0:
			break;
		}
	} while (choice != 0);
	return 0;
}