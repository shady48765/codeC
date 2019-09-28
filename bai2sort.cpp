#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
struct nhanvien
{
	int manv;
	char tennv[40];
	float luong;
};
void nhapnv(nhanvien a[],int n);
void xuatnv(nhanvien a[],int n);
void sapxep(nhanvien a[],int n);
int main()
{
	int n,x;
	cout<<"nhap n: ";
	cin>>n;
	nhanvien a[40];
	nhapnv(a,n);
	xuatnv(a,n);
	sapxep(a,n);
	xuatnv(a,n);
	return 0;
}
void nhapnv(nhanvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nhap ma nv "<<i<<": ";
		cin>>a[i].manv;
		cout<<"nhap ten nv "<<i<<": ";
		cin>>a[i].tennv;
		cout<<"nhap luong nv "<<i<<": ";
		cin>>a[i].luong;
	}
}
void xuatnv(nhanvien a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"nv "<<i<<": "<<endl;
		cout<<a[i].manv<<endl;
		cout<<a[i].tennv<<endl;
		cout<<a[i].luong<<endl;
	}
}
void sapxep(nhanvien a[],int n)
{
	int min_idx;
    for (int i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (int j = i+1; j < n; j++)
            if (a[j].luong < a[min_idx].luong) min_idx = j;
        nhanvien temp =a[i];
        a[i]=a[min_idx];
        a[min_idx]=temp;
    }
}

