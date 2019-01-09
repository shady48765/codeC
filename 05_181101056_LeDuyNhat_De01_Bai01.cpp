#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 99
void input(int arrA[MAX])
{
	int i=0;
	while ((arrA[i]-1) != 0)
	{
		cout<<"nhap gia tri a["<<i<<"]:";
		cin>> arrA[i];
		i++;
	}
}
void output(int arrA[MAX])
{
	int i=0;
	while (arrA[i]!=NULL)
	{
		cout<< arrA[i]<< "\t";
		i++;
	}
	cout<<endl;
}
void sum(int arrA[MAX])
{
	int i=0;
	int sumA=0;
	int sumD=0;
		while (arrA[i]!=NULL)
	{
		if (arrA[i]<0) sumA=sumA+arrA[i];
		if (arrA[i]>0) sumD=sumD+arrA[i];
		i++;
	}
	cout<<"tong gia tri am:"<< sumA<<endl;
	cout<<"tong gia tri duong:"<< sumD<<endl;
}
void tbD(int arrA[MAX])
{
	int i=0;
	int sumD=0;
	int dem=0;
		while (arrA[i]!=NULL)
	{
		if (arrA[i]>0)
	{	
	sumD=sumD+arrA[i];
	dem++;
	}
		i++;
	}
	cout<<"gia tri trung binh phan tu duong:"<<sumD/dem<<endl;
}
int main()
{
	int arrA[MAX];
	int a;
	while (true)
	{
		cout<<"********MENU********"<<endl;
		cout<< "chon lenh: "<<endl;
		cin>>a;
		switch (a)
		{
			case 1:
				{
				input(arrA);
				break;
				}
			case 2:
				{
				output(arrA);
				break;
				}
			case 3:
				{
				sum(arrA);
				break;
				}
			case 4:
				{
				tbD(arrA);
				break;	
				}
		}
	}
	return 0;
}

