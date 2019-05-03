#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int day(int n);
int phantu(int k);
int main()
{
	int n,k;
	cout<<"nhap n: ";
	cin>>n;
	cout<<"nhap k: ";
	cin>>k;
	day(n);
	phantu(k);
	return 0;
}
int day(int n)
{
	int a1=1,a2=1,a3;
	cout<<"day: ";
	cout<<a1<<" "<<a2<<" ";
	for (int i=3;i<=n;i++)
	{
		a3=a1+a2;
		cout<<a3<<" ";
		a1=a2;
		a2=a3;
		
	}
	cout<<endl;
	return 0;
}
int phantu(int k)
{
	int a1=1,a2=1,a3;
	for (int i=3;i<=k;i++)
	{
		a3=a1+a2;
		a1=a2;
		a2=a3;
	}
	cout<<"phan tu thu "<<k<<": "<<a3;
	return 0;
}
