#include "stdafx.h"
#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 50

void Ve(int A[][MAX], int n);
void XuatMaTran(int A[][MAX], int n);
void main() 
{	int n;
int A[MAX][MAX];
printf("Nhap canh: ");
scanf("%d", &n);
printf("Ket qua: \n");
Ve(A,n);
XuatMaTran(A, n);
_getch();
}
void Ve(int A[][MAX],int n)
{	
bool DiLen = true;
int so = 1, dong=0,cot=0;
while (so <= n*n)
{
A[dong][cot] = so;
so++;
if (dong + cot < n - 1)// nua tren cua duong cheo phu
{	if (DiLen == true)
{	dong--;
cot++;
if (dong < 0)
{	// cot giu nguyen
dong = 0;
DiLen = false;
}
}
else// dang di xuong
{	dong++;
cot--;
if (cot < 0)
{	//dong giu nguyen
cot = 0;
DiLen = true;
}
}
}
else // xet nua duoi cua duong cheo phu
{	if (DiLen == true)
{
dong--;
cot++;
if (cot >= n)
{
cot = n - 1;
dong=dong+2;
DiLen = false;
}
}
else// dang di xuong
{
dong++;
cot--;
if (dong >= n)
{
dong = n - 1;
cot+=2;
DiLen = true;
}
}
}
}

}
void XuatMaTran(int A[][MAX], int n)
{
for (int d = 0; d < n; d++)
{
for (int c = 0; c < n; c++)
printf("%3d",A[d][c]);
printf("\n");
}
}