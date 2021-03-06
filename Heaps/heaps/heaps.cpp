// heaps.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
void max_heapify(int[], int);
using namespace std;

int main()
{
	int a[] = { 5,6,0,3,1 }; 
	for (int i = 0; i < 5; i++)					//size
	{
		cout << a[i] << " ";
	}
	cout << "\n";
	for (int i = 2; i >= 0; i--)
	{
		max_heapify(a, i);
	}
	for (int i = 0; i < 5; i++)					//size
	{
		cout << a[i] << " ";
	}
}

void max_heapify(int x[], int k)
{
	int heap_size = 5;					// Size
	int largest= k; 
	int l = 2 * k;
	int r = 2 * k + 1;
	if (l < heap_size && x[l] > x[k])
	{
		largest = l;
	}
	else if (r < heap_size && x[r] > x[k])
	{
		largest = r;
	}
	if (largest != k)									// swap function 
	{
		int temp = x[k];
		x[k] = x[largest];
		x[largest] = temp;
		max_heapify(x, largest);
	}
	return;
}
