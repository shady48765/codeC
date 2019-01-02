#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 100
void mangA(int a[MAX])
{
	int i=0;
	do
	{
		cin>>a[i];
		i++;
	} while (a[i]!=0);
}
void input1(int a[MAX])
{
	int i=0;
	while (a[i]!=NULL)
	{
		cout<<a[i];
		i++;
	}
}
void input2(int a[MAX])
{
	int i=0;
	int ch=0;
	int le=0;
	while (a[i]!=NULL)
	{
		if (a[i]%2==0) ch+=a[i];
		else le+=a[i];
		i++;
	}
}
int main()
{
	int a[MAX];
	int b;
	cout<< "chon lenh thuc hien:";
	cin>>b;
	switch (b)
	{
		case 1:
			mangA(a);
			break;
		case 2:
			input1(a);
			break;
		case 3:
			input2(a);
			break;
	}
	return 0;
}
