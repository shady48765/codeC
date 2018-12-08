/*
 * bai3.c
 *
 *  Created on: Dec 5, 2018
 *      Author: nhat
 */

void print(int a[], int n)
{
	for (int i=0; i<n;i++)
	{
		cout<< "a[" << i << "]=" << a[i] << "\n";
	}
}
int MinMax(int a[], int n)
{
	int min=0;
	int max=0;
	for (int i=0; i<n;i++)
	{
		if a[i]>max max=a[i];
		if a[i]<min min=a[i];
	}
}
