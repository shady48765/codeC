#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void dichtrai(int* arr, int n,int k);
void dichtrai1(int* arr, int n,int k);
int main()
{
	int n,k;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	cout<<"nhap so lan can dich trai: ";
	cin>>k;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
	}
	dichtrai1(arr,n,k);
	return 0;
}
void dichtrai(int* arr, int n, int k)
{
	int a[n];
	for(int i=0;i<n-k;i++)
	{
		a[i]=arr[i+k];
	}
	for(int i=0;i<k;i++)
	{
		a[n-k+i]=arr[i];	
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
}
void dichtrai1(int* arr, int n, int k)
{
	int temp;
	int i=0;
	while (i<k)
	{
		for(int j=1;j<n;j++)
		{
		temp=arr[j];
		arr[j]=arr[j-1];
		arr[j-1]=temp;
		}
		i++;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
