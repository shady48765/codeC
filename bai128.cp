#include <stdio.h>
#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <time.h>
using namespace std; 
int xet(int n,int i);
int main()
{
	int n,min=-100, max=100;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	srand((int)time(NULL));
	arr[0]= rand() % (max-min+1)+min;
	for (int i=1;i<n;i++)
	{
		arr[i]= rand() % (max-min+1)+min;
		if (xet(arr[i],arr[i-1])==0)
			i--;
	}
	for( int i = 0 ; i < n ; i++ )
	{
		cout<<"phan tu"<<i<<" cua mang la: "<<arr[i]<<"\n";
	}
	return 0;
}
int xet(int n, int i)
{
	if(n>i) return 1;
	else return 0;	
}
