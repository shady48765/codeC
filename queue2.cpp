#include <stdio.h>
#include <iostream>
#include <map>
#include <time.h>
#include <stdlib.h>
using namespace std;
struct queue
{
    int qArray[51];
    int qMax;
    int qFront;
    int qRear;
};
int sum(int a[][12], int j);
void Init(queue &q);
bool isempty(queue q);
bool isfull(queue q);
void push(queue &q,int n);
int pop(queue &q);
void game(queue q);
void output(int a[][12]);
void xet(int s[]);
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
	int r;
	int a[12][12];
	srand((int)time(0));
	int h[51]={0};
	for(int i=0;i<52;i++)
	{
		do{
        	r = rand() % 52;
        } while(h[r]==1);
        push(q, r);
        h[r]=1;
    }
	for(int i=0;i<13;i++)
	{
		for(int j=0;j<4;j++)
		{
			a[i][j]=pop(q);
		}
	}
	output(a);
}
int sum(int a[][12], int j)
{
	int sum=0;
	for (int i=0;i<13;i++)
	{
		sum=sum+a[i][j];
	}
	return sum;
}
void output(int a[][12])
{
	int s[4]={0};
	for(int i=0;i<4;i++)
	{
		s[i]=sum(a,i);
		for(int j=0;j<13;j++)
		{
			cout<<a[j][i]<<"   ";
		}
		cout<<"tong nguoi choi "<<i+1<<": "<<s[i]<<"\n";
	}	
	xet(s);
}
void xet(int s[])
{
	if(s[0]>s[1]&&s[0]>s[2]&&s[0]>s[3]) cout<<"nguoi choi 1 cao nhat";
	else if(s[1]>s[0]&&s[1]>s[2]&&s[1]>s[3]) cout<<"nguoi choi 2 cao nhat";
	else if(s[2]>s[0]&&s[2]>s[1]&&s[2]>s[3]) cout<<"nguoi choi 3 cao nhat";
	else cout<<"nguoi choi 4 cao nhat";
}
