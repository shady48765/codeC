#include <stdio.h>
#include <iostream>
using namespace std;
struct stack
{
    int StkArray[20];
    int StkMax;
    int StkCount;
}STACK;
void Init(stack &s);
bool isempty(stack s);
bool isfull(stack s);
void push(stack &s,int n);
int pop(stack &s);
int top(stack s);
void chuyendoi16(stack s,int n);
void chuyendoi2(stack s,int n);
void chuyendoi8(stack s,int n);
int main()
{
    struct stack s;
    Init(s);
    cout<<"nhap so: ";
    int n;
    cin>>n;
    cout<<"nhap co so muon chuyen: ";
    int k;
    cin>>k;
    if (k==2) chuyendoi2(s,n);
    else if (k==8) chuyendoi8(s,n);
    else if (k==16) chuyendoi16(s,n);
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
    if (s.StkArray[s.StkMax]==NULL) return false;
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
void chuyendoi2(stack s,int n)
{
    int k=n/2;
    while(k!=0)
    {
        push(s,n-k*2);
        n=k;
        k=n/2;
    }
    int h=s.StkCount;
    for(int i=0;i<h+1;i++)
    {
        cout<<top(s);
        pop(s);
    }
    cout<<endl;
}
void chuyendoi8(stack s,int n)
{
    while (n>0)
    {
    	int k=n%8;
    	push(s,k);
    	n=n/8;
	}
    while (isempty(s))
    {
    	cout<<pop(s);
	}
}
void chuyendoi16(stack s,int n)
{
    int k=n/16;
    while(k!=0)
    {
        push(s,n-k*16);
        n=k;
        k=n/16;
    }
    push(s,n);
    pop(s);
    int h=s.StkCount;
    for(int i=0;i<h+1;i++)
    {
    	if (top(s)<10) cout<<top(s);
    	else if (top(s)==10) cout<<"A";
    	else if (top(s)==11) cout<<"B";
    	else if (top(s)==12) cout<<"C";
    	else if (top(s)==13) cout<<"D";
    	else if (top(s)==14) cout<<"E";
    	else cout<<"F";
        pop(s);
    }
    cout<<endl;
}
