#include <stdio.h>
#include <iostream>
using namespace std;
struct queue
{
    int qArray[51];
    int qMax;
    int qFront;
    int qRear;
};
int sum(int a[]);
void Init(queue &q);
bool isempty(queue q);
bool isfull(queue q);
void push(queue &q,int n);
int pop(queue &q);
void game(queue q);
int main()
{
	struct queue q;
	Init(q);
	game(q);
	return 0;
}
void Init(queue &q)
{
	q.qFront=0;
	q.qRear=0;
	q.qMax=100;
}
bool isempty(queue q)
{
	if (q.qFront>q.qRear) return true;
	return false;
}
bool isfull(queue q)
{
	if (q.qFront==0 && q.qRear==q.qMax) return true;
	else false;
}
void push(queue &q,int n)
{
	q.qArray[q.qRear]=n;
	q.qRear++;
}
int pop(queue &q)
{
	q.qFront++;
	return q.qArray[q.qFront];	
}
void game(queue q)
{
	int a[12],b[12],c[12];
	for(int i=0;i<52;i++)
	{
		push(q, i);
	}
	for(int i=0;i<13;i++)
	{
		a[i]=pop(q);
		b[i]=pop(q);
		c[i]=pop(q);
	}
	cout<<"a: "<<sum(a)<<endl;
	cout<<"b: "<<sum(b)<<endl;
	cout<<"c: "<<sum(c)<<endl;
	if (sum(a)>sum(b) && sum(a)>sum(c)) cout<<"a cao nhat";
	else if (sum(b)>sum(a) && sum(b)>sum(c)) cout<<"b cao nhat"; 
	else cout<<"c cao nhat"; 
}
int sum(int a[])
{
	int sum=0;
	for (int i=0;i<13;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}
