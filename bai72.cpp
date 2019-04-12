#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int xet(int a, int b, int c);
int main()
{
    int a,b,c;
    do {
        cout<<"nhap ngay: ";
        cin>>a;
        cout<<"nhap thang: ";
        cin>>b;
        cout<<"nhap nam: ";
        cin>>c;
    } while (xet(a,b,c)==2);
    return 0;
}
int xet(int a, int b, int c)
{
    int i;
    int j;
    if ((a<0) || (b<0) || (c<0)) i=2;
    if (b>12) i=2;
    if (a>31) i=2;
    if ((a%4==0) && (a%100!=0) || (a%400==0)) j=1; else j=2;
    if ((j==1) && (a>30) && (b==2)) i=2;
    if ((j==2) && (a>29) && (b==2)) i=2;
    if ((b%2==0)&& (b<7) && (a==31)) i=2;
    if ((b%2==1)&& (b>7) && (a==31)) i=2;
    return i;
}
