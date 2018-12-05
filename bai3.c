/*
 * bai3.c
 *
 *  Created on: Oct 17, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c;
	float dt,p;
	printf("nhap 3 canh :");
	scanf("%d %d %d",&a,&b,&c);
	printf("chu vi: %d\n",a+b+c);
	p = (float)(a+b+c)/2;
	dt = (float)sqrt(p*(p-a)*(p-b)*(p-c));
	printf("dien tich : %f",dt);

}

