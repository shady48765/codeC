#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
void doichieuchan(int* arr, int n);
void doichieuchan2(int* arr, int n);
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
	doichieuchan2(arr,n);
	return 0;
}
void doichieuchan2(int* arr, int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		while ((arr[i]%2==1) && (i<j))
			i++;
		while ((arr[j]%2==1) && (i<j))
			j--;			

		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}
void doichieuchan(int* arr, int n)
{
	int i=0;
	int j=n-1;
	while(i!=j)
	{
		if (arr[i]%2==1)
		{
			i++;
		}
		if (arr[j]%2==1)
		{
			j--;
		}
		if (arr[i]%2==0 && arr[j]%2==0)
		{
		int temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;
		i++;
		j--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
}

