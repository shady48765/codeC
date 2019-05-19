#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int maxChan(int arr[],int n,int m);
int minLe(int arr[],int n); 
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
	int m=minLe(arr,n);
	if (m<maxChan(arr,n,m)) cout<<"ko ton tai";
	else cout<<maxChan(arr,n,m);
	return 0;
}
int minLe(int arr[],int n)
{
	int min;
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2==1)
		{
		min=arr[i];
		break;
	    }
	}
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2==1 && min>arr[i])
		min = arr[i];
	}
	return min;
}
int maxChan(int arr[],int n, int m)
{
	int max;
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2==0)
		{
		max=arr[i];
		break;
	    }
	for (int i=0;i<n;i++)
	{
		if (arr[i]%2==0 && max<arr[i] && arr[i]<m)
		max = arr[i];
	}
	return max;
}
}
