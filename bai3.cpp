#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
int tinh(int b[500], int k);
int main()
{
    int n=9;
    int a[9]={11,1,2,1,1,5,10,2,3};
    int t=10;
    int d=0;
    int b[500]={0};
    b[1]=1;
    int i=0;
    while(i<n-1)
    {
        int j=i;
        int d1=0;
        while(d1<=t && j<=n)
        {
            d1+=a[j];
            j++;
        }
        if(a[j-1]>t) i++;
        else
        {
        	d+=tinh(b,j-i-1);
        	i=j-1;
    	}
    }
    cout<<n<<" "<<t<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"\n"<<d<<endl;
    return 0;
}
int tinh(int b[500], int k)
{
	if(k!=1 && b[k-1]==0) tinh(b,k-1);
	b[k]=b[k-1]+k;
	return b[k];
}
