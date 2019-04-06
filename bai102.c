#include <stdio.h>
#include <iostream>
using namespace std;
int mayman(int n);
int doixung(int n);
int main()
{
    int n;
    cout<<"nhap so"<<endl;
    cin>>n;
    if mayman(n) == 0 && doixung(n) == n cout<<"n la so may man va doi xung";
    if mayman(n) != 0 && doixung(n) == n cout<<"n ko la so may man nhung doi xung";
    if mayman(n) == 0 && doixung(n) != n cout<<"n la so may man nhung ko doi xung";
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