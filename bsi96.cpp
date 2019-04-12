#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
void vehinh1(int n);
void vehinh2(int n);
void vehinh3(int n);
void vehinh4(int n);
void vehinh5(int n);
void vehinh6(int n);
void vehinh7(int n);
void vehinh8(int n);
int main()
{
    int n;
    cout<<"nhap canh: ";
    cin>>n;
    vehinh1(n);
    vehinh2(n);
    vehinh3(n);
    vehinh4(n);
    vehinh5(n);
    vehinh6(n);
    vehinh7(n);
    vehinh8(n);
    return 0;
}
void vehinh1(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if(d+c<=n+1)
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh2(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if(d+c>=n+1)
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh3(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if((d==1)&&(c+d<n+1)||(c==1)&&(c+d<n+1)||(c+d==n+1))
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh4(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if((d==n)&&(c+d>n+1)||(c==n)&&(c+d>n+1)||(c+d==n+1))
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh5(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if(d+c<=d+d)
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh6(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if(d+c<=c+c)
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh7(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if((d==n)&&(c+d<d+d)||(c==1)&&(c+d<d+d)||(c+d==c+c))
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
void vehinh8(int n)
{
    for(int d=1;d<=n;d++)
    {
        for(int c=1;c<=n;c++)
            if((d==1)&&(c+d<c+c)||(c==n)&&(c+d<c+c)||(c+d==c+c))
                cout<<"* ";
            else cout<<"  ";
        cout<<"\n";
    }
    cout<<"\n";
}
