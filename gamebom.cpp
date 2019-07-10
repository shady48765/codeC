#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include <math.h>
void output(int** a);
int** dau(int** a);
int main()
{
    srand(time(NULL));
    int a[5][10]={0};
    int k=rand()%5;
    int h=rand()%10;
    int i=0;
    while (i<10)
    {
        if(a[k][h]==0)
        {
            a[k][h]=9;
            i++;
        }
        else
        {
            k=rand()%5;
            h=rand()%10;
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<10;j++)
        {
            if(a[i][j]>=9)
            {
                a[i-1][j-1]++;
                a[i-1][j]++;
                a[i-1][j+1]++;
                a[i][j-1]++;
                a[i][j+1]++;
                a[i+1][j-1]++;
                a[i+1][j]++;
                a[i+1][j+1]++;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<10;j++)
        {
            if(a[i][j]>=9)
            {
                a[i][j]=9;
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<10;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
