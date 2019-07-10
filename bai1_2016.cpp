#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    srand(time(NULL));
    int n=9;
    int a[9]={11,1,2,1,1,5,10,2,3};
    int t=10;
    int d=0;
    for(int i=0;i<n;i++)
    {
        int j=i;
        int d1=0;
        int d2=0;
        while(d1<=t)
        {
            d1+=a[j];
            j++;
            d2++;
        }
        d+=d2-1;
    }
    cout<<n<<"\t"<<t<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n"<<d<<endl;
    return 0;
}
