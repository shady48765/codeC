/*
 * baitap7.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main() {
	int n;
	int a=0;
	int b=1;
	printf("nhap n");
	scanf("%d",n);
	for (int i=1;i<n+1;i++){
		a = a+b;
		for (int j=1;i<j+1;j++){
			b = b*j;
		}
	}
	printf("ket qua la %d",a);
	return 0;
}

