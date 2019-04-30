#include <stdio.h>
#include <iostream>
#include <math.h>
#include <string.h>
using namespace std; 
int hecosonho(int n,int h);
int hecosolon(char n,int h);
int main()
{
	int h;
	cout<<"he co so ban muon nhap: ";
	cin>>h;
	int n;
	cout<<"nhap so: ";
	cin>>n;
	hecosonho(n,h);		
	return 0;
}
int hecoso(int n,int h)
{
	int sum=0;
	int k=0;
	while (n>0)
		{
			sum= sum + (n%10)*pow(h,k);
			k++;
			n=n/10;
		}
	cout<<sum;
	return 0;
}
