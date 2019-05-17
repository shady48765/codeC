#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int tim(int arr[],int n); 
int main()
{
	int n,x;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
	}
	cout<<tim(arr,n);
	return 0;
}
int tim(int arr[],int n)
{
	for (int i=0;i<n;i++)
	{
		int sosanh=2;
		while (arr[i]>=sosanh)
		{
			if (arr[i]==sosanh)
			{
				return arr[i];
				break;
			}
			sosanh=sosanh*2;
			
		}
	}
	return -1;
}
