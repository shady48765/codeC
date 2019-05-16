#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std; 
int max(int arr[], int n);
int main()
{
	int n,x;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	cout<<"nhap so x: ";
	cin>>x;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
	}
	int a[n];
	for (int i=0;i<n;i++)
	{
		a[i]=arr[i]-x;
	}
	cout<<"phan tu xa mang nhat la: "<<max(a,n)+x;
	return 0;
}
int max(int arr[], int n)
{
	int max=arr[0];
	for (int i=0;i<n;i++)
	{
		if (arr[i]>max) max=arr[i];
	}
	return max;
}
