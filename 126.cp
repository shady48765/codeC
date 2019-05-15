#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std; 
int xet(int n,int i);
int main()
{
	int n,m;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	cout<<"nhap so phan tu 0: ";
	cin>>arr[0];
	for (int i=1;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
		if (xet(arr[i],arr[i-1])==0)
			i--;
	}
		
	return 0;
}
int xet(int n, int i)
{
	if(n>=i) return 1;
	else return 0;	
}
