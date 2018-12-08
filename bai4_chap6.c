/*
 * bai4.c
 *
 *  Created on: Dec 5, 2018
 *      Author: nhat
 */

void medium(a[], int n)
{
	int sum=0;
	int medium;
	for (int i=0; i<n;i++)
	{
		sum+= a[i];
	}
	medium=sum/n;
}
void print(a[], int n)
{
	if n%2==0
		{
		int i1=n/2;
		int i2=i1+1
		cout<< a[i1] << a[i2];
		}
	else {
		cout<< a[n/2+1];
	}
	cout<< a[0];
}
