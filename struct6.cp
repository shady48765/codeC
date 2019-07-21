#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include<iostream>
using namespace std;
#include<math.h>
struct ps
{
	int a;
	int b;
};
int UCLN(int x, int y);
ps tong(ps* k);
ps min(ps* k);
ps max(ps* k);
int main()
{
	ps k[5];
	for (int i=0;i<5;i++)
	{
		cout << "\n nhap phan so thu "<<i+1<<": ";
    	cout << "\n nhap tu so:"; 
		cin >> k[i].a;
    	cout << " nhap mau so:"; 
		cin >> k[i].b;
	}
	cout<<"\n"<<" tong phan so trong mang: "<<tong(k).a<<"/"<<tong(k).b;
	cout<<"\n min: "<<min(k).a<<"/"<<min(k).b;
	cout<<"\n max: "<<max(k).a<<"/"<<max(k).b;
	return 0;
}
ps tong(ps* k)
{
	ps tg;
	tg.b=1;
	tg.a=0;
	int s;
	for (int i=0;i<5;i++)
	{
		tg.b*=k[i].b;
	}
	for (int i=0;i<5;i++)
	{
		tg.a+=(k[i].a*(tg.b/k[i].b));
	}
	int ucln = UCLN(tg.a, tg.b);
	tg.a = tg.a / ucln;
	tg.b = tg.b / ucln;
	return tg;
}
int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}

	while (x != y)
	{
		if (x > y)
		{
			x = x - y;
		}
		else
		{
			y = y - x;
		}
	}
	return x;
}
ps min(ps* k)
{
	ps min;
	min.a=k[0].a;
	min.b=k[0].b;
	for(int i=1;i<5;i++)
	{
		if((min.a*k[i].b)>(k[i].a*min.b)) 
		{
			min.a=k[i].a;
			min.b=k[i].b;
		}
	}
	return min;
}
ps max(ps* k)
{
	ps max;
	max.a=k[0].a;
	max.b=k[0].b;
	for(int i=1;i<5;i++)
	{
		if(max.a*k[i].b<k[i].a*max.b) 
		{
			max.a=k[i].a;
			max.b=k[i].b;
		}
	}
	return max;
}
