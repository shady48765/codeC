#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int bcnn(int a, int b);
int sosanh(int a, int b);
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
	int bc=bcnn(arr[0],arr[1]);
	for (int i=2;i<n;i++)
	{
		bc=bcnn(bc,arr[i]);
	}
	cout<<bc;
	return 0;
}
int bcnn(int a, int b)
{
	int tich=a*b;
	for ( int i = sosanh(a,b);i<=tich;i++)
	{
		if (i%a==0 && i%b==0)
		{
			return i;
			break;
		}
	}
	
}
int sosanh(int a, int b)
{
	if (a>=b) return a;
	else return b;
}
