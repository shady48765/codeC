#include <stdio.h>
#include <iostream>
using namespace std;
int doixung(int n);
void doc(int k);
int _main()
{
    int n,k;
    cout<<"nhap n"<<end;
    cin>>n;
    if n<0 cout<<"am ";
    while (doixung(n)>0)
    {
        k= doixung(n)%10;
        n= (doixung(n)-k)/10;
        cout<<doc(k);
    }
    return 0;
}
void doc(int k)
{
    if k=0 cout<<"khong ";
    if k=1 cout<<"mot ";
    if k=2 cout<<"hai ";
    if k=3 cout<<"ba ";
    if k=4 cout<<"bon ";
    if k=5 cout<<"nam ";
    if k=6 cout<<"sau ";
    if k=7 cout<<"bay ";
    if k=8 cout<<"tam ";
    if k=9 cout<<"chin ";
}
int doixung(int n)
{
    int a;
    int b=0;
    while (n>0) 
    {
        a = n%10;
        b = b*10 +a;
        n = (n-a)/10;
    } 
    return b;
}
