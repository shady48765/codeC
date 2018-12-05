/*
 * baitap13.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int so_1=1;
	int so_2=1;
	int so_3=2;
	printf("%d\t %d\t %d\t",so_1,so_2,so_3);
	printf("nhap so n");
	scanf("%d",n);
	while (so_3 <= n){
		so_1=so_2;
		so_2=so_3;
		so_3= so_1 + so_2;
		printf("%d\t",so_3);
	}
	return 0;
}

