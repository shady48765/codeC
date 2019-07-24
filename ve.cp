#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
#define max 10
int main()
{
	char a[max][max],b[max][max]={{'x',' ','x'},{' ','o',' '},{'x',' ','x'}};
	int row=5,col=5;
	for(int d=0;d<row;d++)
		for(int c=0;c<col;c++)
			a[d][c]=b[d%3][c%3];		
	for(int d=0;d<row;d++)
	{
		for(int c=0;c<col;c++)
			printf("%c",a[d][c]);
		printf("\n");
	}
	return 0;
}

