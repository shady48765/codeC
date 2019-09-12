#include <stdio.h>
#include <iostream>
#include <stack>
using namespace std;
int xet(int a[][10]);
void duongdi(int a[][10]);
void showstack(stack <int> s);
int main()
{
    int a[][10]=
    {
        {0,1,1,0,0},
        {1,0,1,1,1},
        {1,1,0,1,1},
        {0,1,1,0,1},
        {0,1,1,1,0}
    };
    if (xet(a)==1) cout<<"do thi co chu ki"<<endl;
    else if (xet(a)==2)
    {
        cout<<"do thi co duong di"<<endl;
        duongdi(a);
    }
    else if (xet(a)==3) cout<<"do thi binh thuong"<<endl;
    return 0;
}
int xet(int a[][10])
{
    int b[10]={0};
    int count=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            b[i]=b[i]+a[i][j];
        }
    }
    for(int i=0;i<5;i++)
    {
        if (b[i]%2==1) count++;
        if (count==3) return 3;
    }
    if (count==2) return 2;
    return 1;
}
void duongdi(int a[][10])
{
    int b[10]={0};
    int k=0;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            b[i]=b[i]+a[i][j];
        }
    }
    for (int i=0;i<5;i++)
    {
        if (b[i]%2==1)
        {
            k=i;
            break;
        }
    }
    stack <int> s;
    int j=0;
    s.push(k);
    while(j<8)
    {
        for(int i=0;i<6;i++)
        {
            if (a[k][i]==1)
            {
                s.push(i);
                a[k][i]=0;
                a[i][k]=0;
                k=i;
                break;
            }
        }
        j++;
    }
    showstack(s);
}
void showstack(stack <int> s)
{
    while (!s.empty())
    {
        cout << '\t' << s.top();
        s.pop();
    }
    cout << '\n';
}
