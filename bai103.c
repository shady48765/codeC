#include <conio.h>
#include <stdio.h>
#include <iostream>
using namespace std;
void xet(int n)
{
    int a,l,c;
    while (n>0) 
    {
        a = n%10;
        n = (n-a)/10;
        if a%2==0 c++ 
            else l++;
    }
    if (c==0) cout<<"toan so le"<<endl
        else if (l==0) cout<<"toan so chan"<<endl
            else cout<<"co so chan va so le";

}
int main()
{
    int n;
    cout<<"nhap n"<<endl;
    cin>>n;
    xet(n);
    return 0;

}