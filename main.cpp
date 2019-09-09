#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include <math.h>
int max(int a[][5]);
int main()
{
    srand(time(NULL));
    int a[5][5]={0};
    int k=rand()%5;
    int h=rand()%5;
    int i=0;
    while (i<10)
    {
        if(a[k][h]==0)
        {
            a[k][h]=-1;
            i++;
        }
        else
        {
            k=rand()%5;
            h=rand()%5;
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    int c=1;
    //dong 1
    if(a[0][0]==-1)
    {
        a[0][0]=c;
        c++;
    }
    for(int i=1;i<5;i++)
    {
        if(a[0][i-1]!=0 && a[0][i]==-1)
        {
            a[0][i]=a[0][i-1];
        } else if(a[0][i-1]==0 && a[0][i]==-1)
        {
            a[0][i]=c;
            c++;
        }
    }
    
    //dong 2 den het
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if(j==0 && a[i-1][j]!=0 && a[i][j]==-1)
            {
                a[i][j]=a[i-1][j];
            } else if (j==0 && a[i-1][j]==0 && a[i][j]==-1)
            {
                a[i][j]=c;
                c++;
            } else if (a[i-1][j]!=0 && a[i][j-1]==0 && a[i][j]==-1)
            {
                a[i][j]=a[i-1][j];
            } else if (a[i-1][j]==0 && a[i][j-1]!=0 && a[i][j]==-1)
            {
                a[i][j]=a[i][j-1];
            } else if (a[i-1][j]==0 && a[i][j-1]==0 && a[i][j]==-1)
            {
                a[i][j]=c;
                c++;
            } else if (a[i-1][j]!=0 && a[i][j-1]!=0 && a[i][j]==-1)
            {
                a[i][j]=a[i-1][j];
                int c1=j-1;
                while(a[i][c1]!=0 && c1>=0)
                {
                    if (a[i][c1]>a[i][c1+1]) c--;
                    a[i][c1]=a[i][c1+1];
                    c1--;
                }
            }
        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
    //xet lan 2
    
    for(int i=1;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            if (a[i-1][j-1]!=0 && a[i][j]!=0)
            {
                if (a[i-1][j-1]>a[i][j])
                {
                    int temp =a[i-1][j-1];
                    for(int k=0;k<5;k++)
                    {
                        for (int h=0;h<5;j++)
                        {
                            if (a[k][h]==temp) a[k][h]=a[i][j];
                            if (a[k][h]==max(a)) a[k][h]=temp;
                        }
                    }
                } else
                {
                    int temp =a[i][j];
                    for(int k=0;k<5;k++)
                    {
                        for (int h=0;h<5;j++)
                        {
                            if (a[k][h]==temp) a[k][h]=a[i-1][j-1];
                            if (a[k][h]==max(a)) a[k][h]=temp;
                        }
                    }

                }
            }
            if (a[i-1][j+1]!=0 && a[i][j]!=0)
            {
                if (a[i-1][j+1]>a[i][j])
                {
                    int temp =a[i-1][j+1];
                    for(int k=0;k<5;k++)
                    {
                        for (int h=0;h<5;j++)
                        {
                            if (a[k][h]==temp) a[k][h]=a[i][j];
                            if (a[k][h]==max(a)) a[k][h]=temp;
                        }
                    }
                } else
                {
                    int temp =a[i][j];
                    for(int k=0;k<5;k++)
                    {
                        for (int h=0;h<5;j++)
                        {
                            if (a[k][h]==temp) a[k][h]=a[i-1][j+1];
                            if (a[k][h]==max(a)) a[k][h]=temp;
                        }
                    }

                }
            }

        }
    }
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
int max(int a[][5])
{
    int max=a[0][0];
    for(int i=0;i<5;i++)
    {
        for (int j=0;j<5;j++)
        {
            if (a[i][j]>max) max=a[i][j];
        }
    }
    return max;
}
