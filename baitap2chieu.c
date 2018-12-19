#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 50
void input(int a[][MAX], int row, int column)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			printf("Moi ban nhap gia tri cho moi phan tu trong mang a[%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}	
}

void output(int a[][MAX])
{
	int row=0;
	int column=0;
		while (a[0][column]!=NULL)
		{
			column++;
		}
		while (a[row][0]!=NULL)
		{
			row++;
		}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout<<a[i][j]<<"\t";	
		}
		cout<<endl;
	}	
}

int main()
{
	int row,column;
	int a[MAX][MAX];
	cout << "Moi ban nhap gia tri row: ";
	cin >> row;
	cout << "Moi ban nhap gia tri column: ";
	cin >> column;
	input(a,row,column);
	output(a);
	return 0;
}
