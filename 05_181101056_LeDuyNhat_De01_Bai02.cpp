#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
#define MAX 40
#include <ctime>
#include <cstdlib>
void input(int arr2D[MAX][MAX], int &column)
{
	srand(time(NULL));
	for (int i=0;i<column;i++)
	{
		for (int j=0;j<column;i++)
		{
			arr2D[i][j]=50+rand()%40;
		}
	}
}
void output(int arr2D[MAX][MAX], int &column)
{
	for (int i=0;i<column;i++)
	{
		for (int j=0;j<column;i++)
		{
			cout<<"gia tri a["<<i<<"]["<<j<<"]: "<<arr2D[i][j]<<endl;
		}
	}
}
void output2(int arr2D[MAX][MAX], int &column)
{
	for (int i=0;i<column;i++)
	{
		for (int j=0;j<column;i++)
		{
			cout<<arr2D[i][j]<<"\t";
		}
		cout<<endl;
	}
}
void tinh(int arr2D[MAX][MAX],int &column)
{
	int min=arr2D[0][0];
	int max=arr2D[0][0];
	int i=0;
	int j=0;
	while (i<column)
	{
		if (arr2D[i][i]>max) max=arr2D[i][i];
		if (arr2D[j][column-j-1]>max) max=arr2D[j][column-j-1]>max;
		if (arr2D[i][i]<min) min=arr2D[i][i];
		if (arr2D[j][column-j-1]<min) min=arr2D[j][column-j-1]>max;
		i++;
		j++;
	}
	cout<<"gia tri nho nhat:"<<min<<endl;
	cout<<"gia tri lon nhat:"<<max<<endl;
}

int main()
{
	srand(time(NULL));
	int column=4+rand()%7;
	int a;
	int arr2D[MAX][MAX];
while (true)
	{
		cout<<"********MENU********"<<endl;
		cout<< "chon lenh: "<<endl;
		cin>>a;
		switch (a)
		{
			case 1:
				{
				input(arr2D,column);
				break;
				}
			case 2:
				{
				output(arr2D,column);
				break;
				}
			case 3:
				{
				output2(arr2D,column);
				break;
				}
			case 4:
				{
				tinh(arr2D,column);
				break;	
				}
		}
	}
	return 0;
}
