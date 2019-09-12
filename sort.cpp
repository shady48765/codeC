#include <stdio.h>
#include <iostream>
using namespace std;
void bubblesort(int a[],int n);
void input(int a[], int n);
void interchangesort(int a[], int n);
void insertionsort(int a[], int n);
void selectionsort(int a[], int n);
int main()
{
    int a[10];
    int n;
    cout<<"nhap n: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"nhap a["<<i<<"]: ";
        cin>>a[i];
    }
    bubblesort(a, n);
    interchangesort(a, n);
    insertionsort(a,n);
    selectionsort(a, n);
    input(a,n);
    return 0;
}
void bubblesort(int a[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=n-1;
        while (j>=i)
        {
            if (a[j]<a[j-1])
            {
                int temp=a[j];
                a[j]=a[j-1];
                a[j-1]=temp;
            }
        j--;
        }
    }
}
void interchangesort(int a[], int n)
{
    for (int i=0;i<n;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
}
void insertionsort(int a[], int n)
{
    for (int i=1;i<n;i++)
    {
        while (a[i]<a[i-1])
        {
            int temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
            i--;
        }
    }
}
void selectionsort(int a[], int n)
{
    int i, j, min_idx;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (a[j] < a[min_idx]) min_idx = j;
        int temp =a[i];
        a[i]=a[min_idx];
        a[min_idx]=temp;
    }
}
void input(int a[],int n)
{
    for (int i=0;i<n;i++)
    {
        cout<<"a["<<i<<"]: "<<a[i]<<endl;
    }
}
