#include <stdio.h>
#include <conio.h>
#include <cstdlib>
#define row 5
#define col 6
int** taomang();
void xuatmang(int** p);
int main()
{
	int **p=new int*[row];
	for (int i=0;i<row;i++)
	{
		p[i]=new int[col];
	}
	p=taomang();
	xuatmang(p);
	return 0;
}
int** taomang()
{
	int **p=new int*[row];
	for (int i=0;i<row;i++)
	{
		p[i]=new int[col];
	}
	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			p[i][j]=1;
		}
	}
	return p;
}
void xuatmang(int** p)
{
		for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			printf(" %d ",*(&p[i][j]));
		}
		printf("\n");
	}
}

