/*
 * bai9.c
 *
 *  Created on: Oct 23, 2018
 *      Author: nhat
 */

#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
	float a,b;
	printf("nhap 2 so :");
	scanf("%f %f",&a,&b);
	printf("ket qua la = %f",(((a+b)/(pow(a,1/3)+pow(b,1/3))))/pow(pow(a,1/3)-pow(b,1/3),2))
}
