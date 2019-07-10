#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n=3;
    int l=1;
    int a=l*pow(2,n);
    double t=0;
    for(int i=0;i<=3;i++)
    {
        t+=1/(pow(2,i*2));
    }
    double t1=pow(a,2)*(t);
    int k=(pow(10,9)+7);
    cout<<(int)t1%k<<endl;
    return 0;
}
