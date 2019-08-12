#include<stdio.h>
#include<math.h>
#include<conio.h>
#define MAX 50

void Ve(int A[][MAX], int n);
void XuatMaTran(int A[][MAX], int n);
int main()
{    int n;
    int A[MAX][MAX];
    printf("Nhap canh: ");
    scanf("%d", &n);
    printf("Ket qua: \n");
    Ve(A,n);
    XuatMaTran(A, n);
    return 0;
}
void Ve(int A[][MAX],int n)
{
    bool DiLen = true;
    int so = 1, dong=0,cot=0;
    while (so <= n*n)
    {
        A[dong][cot] = so;
        so++;
        if (dong + cot < n - 1)
        {    if (DiLen == true)
        {    dong--;
            cot++;
            if (dong < 0)
            {
                dong = 0;
                DiLen = false;
            }
        }
        else
        {    dong++;
            cot--;
            if (cot < 0)
            {    
                cot = 0;
                DiLen = true;
            }
        }
        }
        else
        {    if (DiLen == true)
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
        else
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
