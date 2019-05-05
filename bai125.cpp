#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std; 
int xet(int n);
int main()
{
	int n,m;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	cout<<"nhap so nguyen to va phan tu 0: ";
	cin>>arr[0];
	for (int i=1;i<n;i++)
	{
		if (xet(arr[i]==0))
		{
			cout<<"nhap so nguyen to va phan tu "<<i<<": ";
			cin>>arr[i];
		} 
	}
		
	return 0;
}
int xet(int n)
{
	if(n<=2) return 1;
	for (int i=2;i<n;i++)
	{
		if (n % i ==0) return 1;
	}
	return 0;
}
