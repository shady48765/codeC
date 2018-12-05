/*
 * baitap12.c
 *
 *  Created on: Nov 8, 2018
 *      Author: nhat
 */
#include<conio.h>
#include<stdio.h>
#include<math.h>
int main(){
	int n;
	int count_am=0;
	int count_ko=0;
	printf("nhap so n");
	scanf("%d",n);
	for (int i=0;i<n;i++){
		printf("nhap so %d",i);
		if (i<0) count_am = count_am ++;
		else if (i>0) count_ko = count_ko ++;
	}
	printf("co %d so am",count_am);
	printf("co %d so 0",count_ko);
	printf("co %d so duong",n -(count_am+count_ko));
	return 0;
}


