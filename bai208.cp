#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
void xuatmang(int* a);
void timmang(int* a);
int main()
{
   time_t t;
   int a[20];

   srand((unsigned) time(&t));
   for(int i = 0 ; i < 20 ; i++ ) 
   {
      a[i]=rand() % 50;
   }
   xuatmang(a);
   timmang(a);
   return(0);
}
void xuatmang(int* a)
{
for(int i = 0 ; i < 20 ; i++ ) 
   {
      cout<<a[i]<<" ";
   }	
   cout<<endl;
}
void timmang(int* a)
{
	int giatridau=a[0];
	int demchinh=1,demphu=1,index=0,indexphu=0;
	for(int i=1;i<20;i++)
	{
		if(a[i]<a[i-1])
		{
			if (demchinh<demphu) 
			{
				demchinh=demphu;
				index=indexphu;
			}
			demphu=1;
			indexphu=i;
		} else 
		{
			demphu++;
		}
	}
	for(int i=index;i<demchinh+index;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
