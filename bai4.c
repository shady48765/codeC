/*
 * bai4.c
 *
 *  Created on: Oct 23, 2018
 *      Author: nhat
 */

#include<conio.h>
#include<stdio.h>
#include<math.h>
void main(){
	int a,b,c,d;
	printf("nhap a,b,c,d :");
	scanf("%d %d %d %d",&a,&b,&c,&d);
	printf("ket qua 1 = %d",(a*b) %c);
	printf("ket qua 2 = %d",2*pow(b,5) + 3%(a-c));
	printf("ket qua 3 = %d",a*(pow(d,b)+(pow(c,d)-4*3)));
	printf("ket qua 4 = %d",((2*pow(b,5)+3%(a-c))/c));
}
