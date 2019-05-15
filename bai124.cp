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
	for (int i=0;i<n;i++)
	{
		cout<<"nhap so phan tu "<<i<<": ";
		cin>>arr[i];
		if (xet(arr[i],i)==0)
			i--;
	}
		
	return 0;
}
int xet(int n, int i)
{
	if(n%2==0 && i%2==0 ) return 1;
	else if (n%2==1 && i%2==1) return 1;
	else return 0;
	
}
