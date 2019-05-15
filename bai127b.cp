#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <math.h>
#include <time.h>
using namespace std; 
int main()
{
	int n;
	cout<<"nhap so phan tu cua mang: ";
	cin>>n;
	int arr[n];
	//time_t t;
	srand((int)time(NULL));
	for( int i = 0 ; i < n ; i++ )
	{
		arr[i]= -100 + rand() % 201;
	}
	for( int i = 0 ; i < n ; i++ )
	{
		cout<<"phan tu"<<i<<" cua mang la: "<<arr[i]<<"\n";
	}
	return 0;
}
