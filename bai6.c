/*
 * bai6.c
 *
 *  Created on: Oct 23, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	printf("nhap so co 3 chu so :");
	scanf("%d", &d);
	a = d % 10;
	b = (d % 100 - a): 10;
	c = (d - b*10 - a): 100;
	printf("so dao nguoc la : %d %d %d",a,b,c);
}



