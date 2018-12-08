/*
 * bai5_chap6.c
 *
 *  Created on: Dec 7, 2018
 *      Author: nhat
 */

void (a[],int n)
{
	int i=0;
	do
		{
		cin>>a[i];
		i++;
		}
	while (a[i]!0);
}
void (a[], int n)
{
	int a=0;
	for (int i=0;i<n;i++)
	{
		if a[i]<0 a+=a[i];
	}
	if a==0 printf("-1");
}
void (a[], int n)
{
	int sumA=0;
	int sumD=0;
	for (int i=0;i<n;i++)
	{
		if a[i]<0 sumA-=a[i];
		if a[i]>0 sumD+=a[i];
	}
	if (sumA+sumD)<0 printf("tom am nhieu hon tong duong");
	else printf("tong duong nhieu hon tong am");
}
