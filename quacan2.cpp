#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;
struct QuaCan
{
    int somu;
    int soluong;
};
int main()
{
    QuaCan A[10];
    int n=11, tam, i=0;
    int dem=0;
    tam=n;
    while (tam%3!=0)
    {
        tam++;
        dem++;
    }
    int k=0;
    while (tam>0)
    {
        while (pow(3,k+1)<tam)
            k++;
        A[i].somu=k;
        A[i].soluong=tam/(pow(3,k));
        int q=pow(3,k);
        tam=tam%q;
        k--;
        i++;
    }
    printf("%d + (%d x 3^0) =",n, dem);
    for(int j=0;j<i;j++)
    {
        printf("%d x 3^%d + ",A[j].soluong,A[j].somu);
    }
    return 0;
}
