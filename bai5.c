/*
 * bai5.c
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
	printf("nhap a,b,c,d :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("A = (%d * %d) % %d = %5.3f",a,b,c,(a*b) %c);
	printf("B = 2 * %d^5 + 3 % (%d – %d) = %5.3f",b,a,c,2*pow(b,5) + 3%(a-c));
	printf("C = %d * (%d ^ %d + ( %d ^ %d – 4 * 3)) = %5.3f",a,b,d,c,d,a*(pow(d,b)+(pow(c,d)-4*3)));
	printf("D = (2 * %d^5 + 3 % (%d – %d))/%d = %5.3f",b,a,c,c((2*pow(b,5)+3%(a-c))/c));

}


