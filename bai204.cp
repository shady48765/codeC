#include <stdio.h>
#include  <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstdlib>
#define max 10
void Tach(int arr[], int k);
int sapxep2(int* a, int n);
int sapxep3(int* a, int n);
void random(int a[], int n);
void Xuat(int a[], int n);
int output(int* arr,int* a,int* d);
int main()
{
	int n = max;
	srand((unsigned)time(NULL));
	int arr[max];
	random(arr, max);
	std::cout<<"Mang ban dau: \n" ;
	for (int i = 0; i<max; i++)
	{
		std::cout << "\t" << arr[i];
	}
	std::cout << "\n";
	Tach(arr,n);
	return 0;
}
int output(int* arr,int* a,int* d)
{
	int n=0,m=0;
	for (int i = 0; i<max; i++)
	{
		if (arr[i]>=0) 
		{
			arr[i]=d[n];
			n++;
		} else
		{
			arr[i]=a[m];
			m++;
		}
	}
	Xuat(arr,n);
}
void Tach(int* arr, int k)
{
	int a[max];
	int d[max];
	int n=0,m=0;
	int i=max-1;
	while (i>=0)
	{
		if (arr[i]>=0) 
		{
			d[n]=arr[i];
			n++;
		}
		else
		{
			a[m]=arr[i];
			m++;
		}
		i--;
	}
	std::cout<<"Mang 1:\n";
	sapxep2(d, n);
	std::cout<<"\nMang 2:\n";
	sapxep3(a, m);
	output(arr,a,d);
}
void random(int a[], int n)
{
	int x=0;
	int min=-10;
	int KT[2 * max] = { 0 };
	for (int i = 0; i<max; i++)
	{
		do
		{
			x = min + rand() % (max+1-min);
		} while (KT[x+10] == 1);
		a[i] = x;
		KT[x+10] = 1;
	}
}
int sapxep2(int* a, int n)
{
	int temp;
	for (int i = 1; i<n-1; i++)
		for (int j = i+1; j<n; j++)	
			if (a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	Xuat(a,n);
	return 0;
}
int sapxep3(int* a, int n)
{
	int temp;
	for (int i = 1; i<n-1; i++)
		for (int j = i+1; j<n; j++)	
			if (a[i]<a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
	Xuat(a,n);
	return 0;
}
void Xuat(int a[], int n)
{
	for (int i = 0; i<n; i++)
	{
		std::cout << "\t" << a[i];
	}
}
