#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int xet(int a, int b);
int main()
{
    int a,b;
    do {
        cout<<"nhap so a: ";
        cin>>a;
        cout<<"nhap so b: ";
        cin>>b;
    } while (xet(a,b)==2);

    return 0;
}
int xet(int a, int b)
{
    int c;
    if ((a>b) && (a>0) && (a%7==0))  c = 1; else c = 2;
    if ((b>a) && (b>0) && (b%7==0))  c = 1; else c = 2;
    return c;
}


