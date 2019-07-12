#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include <math.h>
void chuyen(int a[][4],int b[]);
void in(int a[][4]);
int main()
{
	int a[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int b[16];
	chuyen(a,b);
	in(a);
	cout<<endl;
	for(int i=0;i<16;i++)
	{
		cout<<" "<<b[i];
	}
	cout<<endl;
	cout<<endl;
	int i=0,j=0,k=0;
	while(k<16)
	{
		a[i][j]=b[k];
		j++;
		k++;
		
		do
		{
		if(j>=0) 
			{
			a[i][j]=b[k];
			k++;
			}
		i++;
		j--;
		}while(j>=0);
		
		j++;	
		a[i][j]=b[k];
		k++;
		
		do
		{
			i--;
			j++;
			if(i>=0) 
			{
			a[i][j]=b[k];
			k++;
			}
		}while(i>=0);
		i++;
	}
	in(a);
    return 0;
}
void chuyen(int a[][4],int b[])
{
	int k=0;
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			b[k]=a[i][j];
			k++;
		}
	}
}
void in(int a[][4])
{
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			cout<<" "<<a[i][j];
		}
		cout<<endl;
	}
}
