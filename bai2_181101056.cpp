#include <conio.h>
#include <stdio.h>
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
#define MAX 80
int random(int n)
{
	srand(time(NULL));
	return rand()%n;
}
void mangA(int a[MAX][MAX],int column, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			a[i][j]=10 + random(89);
		}
	}	
}
void input(int a[MAX][MAX], int column, int row)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<a[i][j];
		}
	}	
}
void input1(int a[MAX][MAX], int column, int row)
{
	int max=0;
	int min=0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			if (a[i][j]>max) max=a[i][j];
			if (a[i][j]<min) min=a[i][j];
		}
	}
	cout<<"min:"<<min<<endl;
	cout<<"max:"<<max<<endl;	
}
void input2(int a[MAX][MAX],int column, int row)
{
	int tb;
	int tong=0;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			tong+=a[i][j];
		}
	}
	tb= tong/(row*column);
	cout<<"trung binh:"<<tb;
}
int main()
{
	int a[MAX][MAX];
	int b;
	int row= 3 + random(7);
	int column= 3 + random(7);
	cout<< "chon lenh thuc hien:";
	cin>>b;
	switch (b)
	{
		case 1:
			{
				mangA(a,column,row);
				break;
			}
		case 2:
			{
				input(a,column,row);
				break;
			}
		case 3:
			{
				input1(a,column,row);
				break;
			}
		case 4:
			{
				input2(a,column,row);
				break;
			}
	}
	return 0;
}
