#include <stdio.h>
#include <iostream>
using namespace std;
void xet(int a[][10],int b[6],int &t, int k);
void chay(int a[][10],int b[6], int k);
int main()
{
    int b[6]={0};
    int t=0;
    int a[][10]=
    {
        {0,0,1,0,0,1,0},
        {0,0,0,0,1,0,1},
        {1,0,0,0,0,1,0},
        {0,0,0,0,1,0,1},
        {0,1,0,1,0,0,0},
        {1,0,1,0,0,0,0},
        {0,1,0,1,0,0,0}
    };
    for(int i=0;i<7;i++)
    {
        xet(a,b,t,i);
    }
    for(int i=0;i<7;i++)
    {
        cout<<b[i];
    }

    return 0;
}
void xet(int a[][10],int b[6], int &t, int k)
{
    if (b[k]==0)
    {
        t++;
        b[k]=t;
        for(int i=0;i<7;i++)
        {
            if(a[k][i]==1) b[i]=t;
        }
        for(int i=0;i<7;i++)
        {
            if (b[i]==t) chay(a,b,i);
        }
    }
}
void chay(int a[][10],int b[6], int k)
{
    for(int i=0;i<7;i++)
    {
        if(a[k][i]==1 && b[i]==0) b[i]=b[k];
    }
}

