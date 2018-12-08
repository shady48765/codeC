/*
 * vidu2.c
 *
 *  Created on: Nov 14, 2018
 *      Author: nhat
 */

void a(int a[500], int n)
{
	int i=0;
	do
	{
		cin>>a[i];
		i++;
	} while (i!n)
}

int b(int a[100], int n)
{
	int even, odd;
	int sumEven =0;
	int sumOdd =0;
	for (int i=0;i<100;i++){
		if a[i] %2 =0 {
			even++;
			sumEven += a[i];

		}
		else {
			odd++;
			sumOdd += a[i];
		}
	}
	return 0;
}

int c(int a[100], int n)
{
	for (int i=0;i<100;i++){
		if a[i] ==0 printf("%d\t",i);
	}
}




