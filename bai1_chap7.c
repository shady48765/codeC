/*
 * bai1_chap7.c
 *
 *  Created on: Dec 7, 2018
 *      Author: nhat
 */

int arrMaxMin(a[][], int row, int colom)
{
int max=0;
int min=0;

	for (int i=0;i <row;i++)
	{
		for (int j=0;j< colom;j++)
		{
			if (a[i][j] <min) min=a[i][j];
			if (a[i][j] >min) max=a[i][j];
		}
	}
	return 0;
}

void sosanh(a[][], int row, int colum)
{
	int sumxx=0;
	int sum=0;

	if (row==colum) printf("hang bang cot");
	{
	for (int i=0;i <row;i++)
		{
		sumxx+= a[i][i];
		sum+= a[i][row-i];
		}
	}
	if (sumxx>sum) printf("cheo xuong lon hon cheo len");
	else printf("cheo len lon hon cheo xuong");
}
void sosanh2(a[][], int row, int colum,b[])
{
	for (int i=0;i <row;i++)
		{
			for (int j=0;j <colum;j++)
			{
				b[i]+=a[i][j];
			}
		}
}

