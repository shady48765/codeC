/*
 * baitap11.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	for (int i=1;i<16;i++){
		for (int j=1; j<11;j++){
			printf("%d * %d = %d\n\t",i,j,i*j);
		}
		printf("\n\n");
	}
	return 0;
}

