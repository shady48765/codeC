#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void xuatmang(int* a,int n);
void duyetmang(int* a,int* b);
int main()
{
   time_t t;
   int a[20],b[3];

   srand((unsigned) time(&t));
   for(int i = 0 ; i < 20 ; i++ ) 
   {
      a[i]=rand() % 50;
   }
    for(int i = 0 ; i < 3 ; i++ ) 
   {
      b[i]=rand() % 50;
   }
   xuatmang(a,20);
   xuatmang(b,3);
   duyetmang(a,b);
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
void duyetmang(int* a,int* b)
{
	int dem=0;
	bool k=false;
	for(int i = 0 ; i < 20 ; i++ )
	{
		if (dem==3)
		{
			k=true;
			break;
		} else dem=0;
		for(int j=0;j<3;j++)
		{
			if (a[i+j]==b[j]) dem++;
		}
	}
	if (k==true) cout<<"yes";
	else cout<<"No"; 
}
