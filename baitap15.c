/*
 * baitap15.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int m,n;
	printf("nhap m va n");
	scanf("%d %d",m,n);
	int a=m*n;
	while (a>0){
		for (int i=0;i<m;i++){
			printf("%d\t",a);
			a=a--;
		}
		printf("\n");
	}
	return 0;
}

