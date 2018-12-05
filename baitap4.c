/*
 * baitap4.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int a=0;
	int b=0;
	printf("nhap so n");
	scanf("%d",n);
	for (int i=0; i<n; i++){
		a = a+i;
		if (i%2==0) b=b+i;
	}
	printf("tong la = %d\n",a);
	printf("tong so chan = %d\n",b);
	printf("tong so le la = %d",a-b);
	return 0;
}

