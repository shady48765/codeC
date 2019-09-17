#include <stdio.h>
#include <iostream>
using namespace std;
struct stack
{
    int StkArray[20];
    int StkMax;
    int StkCount=0;
}STACK;
bool isempty(stack s);
bool isfull(stack s);
void push(stack &s,int n);
void pop(stack &s);
int top(stack s);
void chuyendoi(stack s,int n);
int main()
{
    struct stack s;
    cout<<"nhap max cua stack: ";
    cin>>s.StkMax;
    cout<<"nhap so: ";
    int n;
    cin>>n;
    chuyendoi(s,n);
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
void chuyendoi(stack s,int n)
{
    int k=n/2;
    while(k!=0)
    {
        push(s,n-k*2);
        n=k;
        k=n/2;
    }
    push(s,1);
    pop(s);
    int h=s.StkCount;
    for(int i=0;i<h+1;i++)
    {
        cout<<top(s);
        pop(s);
    }
    cout<<endl;
}

