#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
struct sach
{
	int masach;
	char tensach[40];
	float gia;
};
void nhapsach(sach a[],int n);
void xuatsach(sach a[],int n);
int tuyentinh(sach a[],int n, int x);
void sapxep(sach a[],int n);
int nhiphan(sach a[],int x,int left,int right);
int main()
{
	int n,x;
	cout<<"nhap n: ";
	cin>>n;
	sach a[40];
	nhapsach(a,n);
	xuatsach(a,n);
	cout<<"nhap ma sach tim kiem: ";
	cin>>x;
	cout<<tuyentinh(a,n,x);
	sapxep(a,n);
	cout<<nhiphan(a,x,0,n);
	return 0;
}
void nhapsach(sach a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap ma sach "<<i<<": ";
		cin>>a[i].masach;
		cout<<"nhap ten sach "<<i<<": ";
		cin>>a[i].tensach;
		cout<<"nhap gia sach "<<i<<": ";
		cin>>a[i].gia;
	}
}
void xuatsach(sach a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"sach "<<i<<": "<<endl;
		cout<<a[i].masach<<endl;
		cout<<a[i].tensach<<endl;
		cout<<a[i].gia<<endl;
	}
}
int tuyentinh(sach a[],int n, int x)
{
	for (int i=0; i<n;i++)
	{
		if(a[i].masach==x) return i;
	}
	return -1;
}
void sapxep(sach a[],int n)
{
	for(int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (a[i].masach>a[j].masach)
			{
				sach temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int nhiphan(sach a[],int x,int left,int right)
{
	if(left==right) return -1;
	int mid=(left+right)/2;
	if(x==a[mid].masach) return mid;
	else if(x>a[mid].masach) nhiphan(a,x,mid+1,right);
	else if(x<a[mid].masach) nhiphan(a,x,left,mid-1);
}
