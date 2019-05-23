#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <math.h>
#include <time.h>
#include <cstdlib>
//const max =1000
using namespace std;
int sapxep(int arr[]);
int random(int a[], int n);
void Xuat(int a[], int max);
int main()
{
	int max =1000;
	srand((unsigned)time(NULL));
	int arr[max];
	
	random(arr, max+10);
	cout<<"Mang ban dau: "<<endl;
	Xuat(arr, max);
	cout<<endl;
	//sapxep(arr);
	return 0;
}
int sapxep(int* arr)
{
	int temp;
	for (int i=1;i<10;i++)
	{
		int k=i;
		while (arr[k]<arr[k-1])
		{
			temp=arr[k-1];
			arr[k-1]=arr[k];
			arr[k]=temp;
			k--;
		}	
	}
	for (int i=0;i<10;i++)
	{
		cout<<arr[i]<<"  ";
	}
	return 0;
}
int random(int a[], int max)
{
	int x;
	int KT[2*max]={0};
	for (int i=0;i<max;i++)
	{
		do 
		{
			int x=rand()%2001;
		}while (KT[x]==1);
		a[i]=x;
		KT[x]=1;
	}
}
void Xuat(int a[], int max)
{
	for (int i=0;i<max;i++)
	{
		cout<<setw(5)<<a[i]<<"  ";
	}
}
