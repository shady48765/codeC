#include <stdio.h>
#include <conio.h>  
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
int duyet(int n);
using namespace std;
int main()
{
	int n;
    cout<<"nhap n: ";
    cin>>n;
    int trai[50];
    int phai[50];
    phai[0]=duyet(n);
    int bu=pow(3,phai[0])-n;
    int i=0;
    while (bu>3)
    {
    	trai[i]=duyet(bu)-1;
    	bu=bu-pow(3,trai[i]);
    	i++;
	}  
	for(int j=0;j<bu;j++)
	{
		trai[i]=0;
		i++;
	}
	for(int j=0;j<i;j++)
	{
		cout<<trai[j]<<" ";
	}
	cout<<endl;
	cout<<phai[0];
	return 0;
}
int duyet(int n)
{
    int i=0;
    while(pow(3,i)<=n)
    {
        i++;
    }
    return i;
}
