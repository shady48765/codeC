/*
 * bai7.c
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
	printf("ket qua la = %f",(((pow(a,1/2)-pow(b,1/2))/(pow(a,1/4)-pow(b,1/4)))-((pow(a,1/2)+pow(a*b,1/4))/(pow(a,1/4)+pow(b,1/4)))))
}
