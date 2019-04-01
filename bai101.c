#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
int mayman(int n);
int main()
{
    int n;
    cout<<"nhap so"<<endl;
    cin>>n;
    if mayman(n) == 0 cout<<"n la so may man"<<endl
        else cout<<"n ko phai so may man"<<endl;
    return 0;
}
int mayman(int n)
{
    int a;
    int b=0;
    while (n>0) 
    {
        a = n%10;
        n = (n-a)/10;
        if (a!=8) || a(!6) 
        {
            b++;
            break;
        }
    }
    return b;
}