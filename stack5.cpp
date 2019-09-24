#include <stdio.h>
#include <iostream>
using namespace std;
struct stack
{
    int StkArray[50];
    int StkMax;
    int StkCount;
}STACK;
void Init(stack &s);
bool isempty(stack s);
bool isfull(stack s);
void push(stack &s,int n);
int pop(stack &s);
bool check(int c[]);
int top(stack s);
int main()
{
    struct stack s;
    Init(s);
    int a[][50]={
		{0,1,0,1,0,0,0,0,0,0,0,1,0},
		{1,0,0,1,0,0,0,0,0,0,0,0,0},
		{0,0,0,0,0,0,1,0,0,0,0,0,0},
		{1,1,0,0,0,1,1,0,0,0,0,0,0},
		{0,0,0,0,0,1,0,1,1,0,0,0,0},
		{0,0,0,1,1,0,1,0,0,0,0,0,1},
		{0,0,1,1,0,1,0,0,0,0,0,0,0},
		{0,0,0,0,1,0,0,0,1,0,0,0,0},
		{0,0,0,0,1,0,0,1,0,0,0,0,0},
		{0,0,0,0,0,0,0,0,0,0,1,1,0},
		{0,0,0,0,0,0,0,0,0,1,0,1,0},
		{1,0,0,0,0,0,0,0,0,1,1,0,0},
		{0,0,0,0,0,1,0,0,0,0,0,0,0},
	};
	int c[12]={-1};
	c[0]=0;
	int k=0;
	int count=0;
	push(s,k);
	while(check(c))
	{
		for(int i=0;i<13;i++)
		{
			if(a[i][k]==1 && c[i]==-1)
			{
				push(s,i);
				c[i]=k;
				cout<<k;
				a[i][k]=0;
				k=i;
				break;
			}
		}	
	}
	for(int i=0;i<13;i++)
	{
		cout<<c[i]<<" ";
	}
    return 0;
}
void Init(stack &s)
{
	s.StkCount=0;
	s.StkMax=100;
}
bool isempty(stack s)
{
    if (s.StkCount==0) return false;
        return true;
}
bool isfull(stack s)
{
    if (s.StkCount==s.StkMax) return false;
    return true;
}
void push(stack &s,int n)
{
    s.StkArray[s.StkCount]=n;
    s.StkCount++;
}
int pop(stack &s)
{
    int so=s.StkArray[s.StkCount];
    s.StkCount--;
    return so;
}
int top(stack s)
{
	return s.StkArray[s.StkCount];
}
bool check(int c[])
{
	for(int i=0;i<13;i++)
	{
		if(c[i]==-1) return true;
	}
	return false;
}
