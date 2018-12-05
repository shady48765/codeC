/*
 * baitap3.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */

#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("nhap so nguyen duong:");
	scanf("%d",n);
	for (int i=2 ; i<(n/2) ; i++) {
		if ((n/i)==0) {
			printf("%d ko phai la so nguyen to",n);
			break;
		}
	}
	printf("%d la so nguyen to",n);
	return 0;
}
