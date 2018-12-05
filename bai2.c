/*
 * bai2.c
 *
 *  Created on: Oct 17, 2018
 *      Author: nhat
 */

#define PI 3,14
#include<math.h>
void main()
{
	float r,cv,dt;
	printf(" Nhap  :");
	scanf("%f",&r);
	cv = 2*PI*r;
	dt = PI*r*r;
	printf("%f %f", cv,dt)
}
