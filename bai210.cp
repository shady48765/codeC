#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void xuatmang(int* a,int n);
void chenmang(int* a,int k,int x);
int main()
{
   time_t t;
   int a[30],b[3];
   srand((unsigned) time(&t));
   for(int i = 0 ; i < 20 ; i++ ) 
   {
      a[i]=rand() % 50;
   }
   int k,x;
   cout<<"nhap k: ";
   cin>>k;
   cout<<"nhap x: ";
   cin>>x;
   xuatmang(a,20);
   chenmang(a,k,x);
   return(0);
}
void xuatmang(int* a,int n)
{
for(int i = 0 ; i < n ; i++ ) 
   {
      cout<<a[i]<<" ";
   }	
   cout<<endl;
}
void chenmang(int* a,int k,int x)
{
	int temp;
	for(int i=k; i< 21;i++)
	{
		temp=a[i];
		a[i]=x;
		x=temp;
	}
	xuatmang(a,21);
}
