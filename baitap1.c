/*
 * baitap1.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
 int main()
 {
	 int n;
	 int a=0;
	 printf("nhap so n:");
	 scanf("%d",n);
	 for (int i=0;i<n;i++)
	 {
		 a=a + i;
	 };
	 printf("ket qua tinh tong = %d",a);
	 return 0;
 }

