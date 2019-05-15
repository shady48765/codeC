#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std; 
int max(int arr[], int n);
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
	int m = max(arr,n);
	for (int d=m;d>=1;d--)
	{
		for (int j=0;j<n;j++)
		{
			if (arr[j]>=d) 
				cout<<"*";
			else 
				cout<<" ";
		}
		cout<<"\n";
	}
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
