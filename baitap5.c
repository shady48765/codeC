/*
 * baitap5.c
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
	for (int j=0;j<n ;j++){
	for (int i=2 ; i<(j/2) ; i++) {
		if ((n/i)==0) break;
		printf("%d\t",j);
	}
	printf("%d\t",n);
  }
	return 0;
}


