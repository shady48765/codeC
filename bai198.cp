#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void doichieu(int* arr, int n);
void doichieu2(int* arr, int n);
int main()
{
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
	}
	doichieu2(arr,n);
	return 0;
}
void doichieu(int* arr, int n)
{
	int arr1[n];
	for(int i=0;i<n;i++)
	{
		arr1[i]=arr[n-i-1];
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr1[i]<<" ";
	}
}
void doichieu2(int* arr, int n)
{
	int arr1[n];
	for(int i=0;i<n/2;i++)
	{
		int temp=arr[i];
		arr[i]=arr[n-i-1];
		arr[n-i-1]=temp;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
