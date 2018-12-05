/*
 * baitap10.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main() {
	int n;
	float a = sqrt(2);
	printf("nhap n");
	scanf("%d",n);
	for (int i=0;i<n;i++){
		a = sqrt(a+1);
	}
	printf("ket qua la %f",a);

}

