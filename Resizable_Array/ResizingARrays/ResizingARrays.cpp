// ResizingARrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;
void resize(int *&,int&);
int main()
{
	int size = 8;
	int *arr = new int[size];
	arr[1] = 25;
	arr[2] = 30;
	int count = 0;    //to check size
	for (int i = 0; i < size; i++)
	{
		count = count + 1;
	}
	cout << count << endl;
	resize(arr, size);
	int new_count = 0;    //to confirm size change
	for (int i = 0; i < size; i++)
	{
		new_count = new_count + 1;
	}
	cout << new_count << endl;
	resize(arr, size);
	int new_count2 = 0;    //to confirm size change
	for (int i = 0; i < size; i++)
	{
		new_count2 = new_count2 + 1;
	}
	cout << new_count2 << endl;
	return 0;
}
void resize(int *& a,int &size)
{
	int newsize = 2 * size;
    int *arr_new = new int[newsize];
	for (int i = 0; i < size; i++)				//copy everything
	{
		arr_new[i] = a[i];
	}
	size = newsize;					//new value of size
	delete [] a;
	a = arr_new;					//pointer pointing to new array
}
