/*
 * bai2.c
 *
 *  Created on: Dec 5, 2018
 *      Author: nhat
 */

void a(int a[], int n)
{
	int i=0;
	do
	{
		cin>>a[i];
		i++;
	} while (i!n)
}
void b(int a[], int n)
{
	int i=0;
	do
	{
		cin>>a[i];
		i++;
	} while (i!n)
}
void c(int a[], int n)
{
	for (int i=0;i<n;i++)
	{
		c[i]=a[i];
		c[n+i]=b[i];
	}

}
void main()
{
	int n;
	for (int i=0;i<2*n-1;i++)
	{
		cout << c[i];
	}
}



