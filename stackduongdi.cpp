#include <stdio.h>
#include <iostream>
using namespace std;
typedef struct typeSTACK
{
    int* StkArray;
    int StkMax;
    int StkCount;
}STACK;
void initstack(STACK& s,int maxitems);
bool isempty(int a[],int n);
bool isfull(int a[], int n);
void push(int a[],int b,int n);
int pop(int a[], int n);
int main()
{
    STACK s;
    int maxitems;
    cin>>maxitems;
    initstack(s,maxitems);
    
    return 0;
}
void initstack(STACK& s,int maxitems);
{
    
}

bool isempty(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        if (a[i]!=NULL) return false;
    }
    return true;
}
bool isfull(int a[], int n)
{
    if (a[n-1]!=NULL) return true;
        else return false;
}
void push(int a[],int b,int n)
{
    for(int i=0;i<n;i++)
    {
        if(a[i]==NULL)
        {
            a[i]=b;
            break;
        }
    }
}
int pop(int a[],int n)
{
    int top=a[n-1];
    for(int i=0;i<n;i++)
    {
        if(a[i]==NULL)
        {
            top=a[i-1];
            a[i-1]=NULL;
            return top;
        }
    }
    a[n-1]=NULL;
    return top;
}
