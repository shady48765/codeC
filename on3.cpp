
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void docfile(int a[][5]);
void bac(int a[][5]);
int main()
{
    int a[5][5];
    docfile(a);
    bac(a);
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
void bac(int a[][5])
{
    int b[5]={0};
    for(int i=0;i<6;i++)
        for(int j=0;j<6;j++)
        {
            b[i]=b[i]+a[i][j];
        }
    for(int i=0;i<6;i++)
    {
        printf("dinh %d bac %d\n",i,b[i]);
    }
}
