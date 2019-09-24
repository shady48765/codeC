#include <stdio.h>
#include <iostream>
using namespace std;
struct stack
{
    int StkArray[100];
    int StkMax;
    int StkCount;
}STACK;
bool isempty(stack s);
bool isfull(stack s);
void push(stack &s,int n);
void pop(stack &s);
int top(stack s);
int main()
{	
	int a[][50]={
		{0101000000010},
		{1001000000000},
		{0000001000000},
		{1100011000000},
		{0000010110000},
		{0001101000001},
		{0011010000000},
		{0000100010000},
		{0000100100000},
		{0000000000110},
		{0000000001010},
		{1000000001100},
		{0000010000000},
	};
    
    return 0;
}
bool isempty(stack s)
{
    if (s.StkCount==0) return false;
        return true;
}
bool isfull(stack s)
{
    if (s.StkArray[s.StkMax]==NULL) return false;
    return true;
}
void push(stack &s,int n)
{
    s.StkArray[s.StkCount]=n;
    s.StkCount++;
}
void pop(stack &s)
{
    s.StkArray[s.StkCount]=NULL;
    s.StkCount--;
}
int top(stack s)
{
    return s.StkArray[s.StkCount];
}

