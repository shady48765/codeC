#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int tuyentinh(int n,int a[], int x);
void nhapmang(int a[],int n);
void sapxep(int a[],int n);
int nhiphan(int a[],int x,int left,int right);
int main()
{
	int n, x;
	int a[50];
	cout<<"nhap n: ";
	cin>>n;
	nhapmang(a,n);
	cout<<"nhap gia tri tinh kiem: ";
	cin>>x;
	cout<<tuyentinh(n,a,x);
	cout<<endl;
	sapxep(a,n);
	cout<<endl;
	cout<<nhiphan(a,x,0,n-1);
	return 0;
}
int tuyentinh(int n,int a[], int x)
{
	for (int i=0; i<n;i++)
	{
		if(a[i]==x) return i;
	}
	return -1;
}
void nhapmang(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap a["<<i<<"]: ";
		cin>>a[i];
	}
}
void sapxep(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i]>a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<"\t";
	}
}
int nhiphan(int a[],int x,int left,int right)
{
	if(left==right) return -1;
	int mid=(left+right)/2;
	if(x==a[mid]) return mid;
	else if(x>a[mid]) nhiphan(a,x,mid+1,right);
	else if(x<a[mid]) nhiphan(a,x,left,mid-1);
}
