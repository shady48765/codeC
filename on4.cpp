
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void docfile(int a[][5]);
void bac(int a[][5],int b[],int c[]);
bool kiemtra(int a[][5],int b[],int c[]);
int main()
{
    int a[5][5];
    int b[]={0};
    int c[]={0};
    docfile(a);
    bac(a,b,c);
    kiemtra(a,b,c);
    return 0;
}
void docfile(int a[][5])
{
    FILE *f;
    f=fopen("‎/⁨Desktop⁩/input.txt", "rt");
    if (f==NULL)
        printf("khong mo duoc file\n");
    else
    {
        for(int i=0;i<6;i++)
            for(int j=0;j<6;j++)
            {
                fscanf(f,"%d",&a[i][j]);
            }
        fclose(f);
    }
}
void bac(int a[][5], int b[],int c[])
{
    for(int i=0;i<6;i++)
    for(int j=0;j<6;j++)
    {
        b[i]=b[i]+a[i][j];
        c[i]=c[i]+a[j][i];
    }
    for(int i=0;i<6;i++)
    {
        printf("dinh %d bac %d\n",i,b[i]);
    }
}
bool kiemtra(int a[][5],int b[],int c[])
{
    for(int i=0;i<6;i++)
        if (a[i][i]!=0) return false;
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {
            if (a[i][j]!=0 || a[i][j]!=1) return false;
        }
    for(int i=0;i<6;i++)
        if(c[i] != b[i]) return false;
    return true;
}
