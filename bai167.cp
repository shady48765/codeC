#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
int khoangcach(int* arr,int n);
void giatri(int* arr,int n, int kc);
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
	giatri(arr,n,khoangcach(arr,n));
	return 0;
}
int khoangcach(int* arr, int n)
{
	int kc=abs(arr[0]-arr[1]);
	for (int i = 0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		if (abs(arr[i]-arr[j])<kc) kc=abs(arr[i]-arr[j]);
	}
	return kc;
}
void giatri(int* arr,int n, int kc)
{
	for (int i = 0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		if (abs(arr[i]-arr[j])==kc) cout<<arr[i]<<" "<<arr[j];
	}
}

