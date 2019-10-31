#include <stdio.h>
#include <iostream>
using namespace std;
void selectionsort(int a[], int n);
void output(int a[], int n);
int tim(int a[], int n, int x);
int binarySearch(int A[], int x, int left, int right);
int main()
{
    int a[10];
    int n,x;
    cout<<"nhap n: ";
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cout<<"nhap a["<<i<<"]: ";
        cin>>a[i];
    }
    cout<<"nhap so can tim: ";
    cin>>x;
    output(a,n);
    cout<<endl;
    cout<<tim(a,n,x)<<endl;
    selectionsort(a, n);
    output(a,n);
    cout<<endl;
    cout<<binarySearch(a,x,0,n)<<endl;
    return 0;
}
void output(int a[], int n)
{
	for (int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
int tim(int a[], int n, int x)
{
	for (int i=0;i<n;i++)
    {
        if(a[i]==x) return i;
    }
    return -1;
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
int binarySearch(int a[], int x, int left, int right)
{
    if(left > right)
        return -1;

    else{

        int mid = (left + right) / 2;

        if(a[mid] == x) 
            return mid;

        if(a[mid] > x)
            return binarySearch(a, x, left, mid - 1);

        if(a[mid] < x) 
            return binarySearch(a, x, mid + 1, right);
        }
}

