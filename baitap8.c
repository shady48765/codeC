/*
 * baitap8.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){
	int n;
	float a=0;
	printf("nhap n");
	scanf("%d",n);
	for (int i=1;i<n+1;i++){
		a = a + 1/i;
	}
	printf("ket qua = %f",a);
}

