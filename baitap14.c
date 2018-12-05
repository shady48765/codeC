/*
 * baitap14.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int min=0;
	int max=0;
	int a=1;
	while (a!=0){
		printf("nhap so");
		scanf("%d",a);
		if (a<min) min=a;
		if (a>max) max=a;
	}
	printf("min = %d",min);
	printf("max = %d",max);
	return 0;
}

