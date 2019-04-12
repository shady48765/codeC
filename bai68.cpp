#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int xet(int a, int b, int c);
int main()
{
    int a,b,c;
    do {
        cout<<"nhap gio: ";
        cin>>a;
        cout<<"nhap phut: ";
        cin>>b;
        cout<<"nhap giay: ";
        cin>>c;
    } while (xet(a,b,c)==2);
    return 0;
}
int xet(int a, int b, int c)
{
    int i;
    if ((a<0) || (b<0) || (c<0)) i=2;
    if (a>24) i=2;
    if ((b>59) || (c>59)) i=2;
    return i;
}
