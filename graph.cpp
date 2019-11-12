#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MAX 10
#define inputfile "C:/test.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
};
int DocMT(char tenFile[100], DOTHI &g);
void XuatMT(DOTHI g);
void kiemtraMT(DOTHI g);
int main()
{
	DOTHI g;
	DocMT(inputfile,g);
	XuatMT(g);
	if(kiemtraMT==0) printf("co huong");
	return 0;
}
int DocMT(char tenFile[100], DOTHI &g)
{
	FILE* f;
	f=fopen(tebFile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
		return 0;
	}
	fscanf(f,"%d",&g.n);
	for(int i=0;j<g.n;i++)
	{
		for(int j=0;j<g.n;j++)
		{
			fscanf(f,"%d",&g.a[i][j]);
		}
	}
	fclose(f);
	return 1;
}
void XuatMT(DOTHI g)
{
	printf("so dinh cua do thi: %d\n",g.n);
	printf("ma tran ke cua do thi: \n");
	for(int i=0;i<g.n;i++)
	{
		for(int j=0;j<g.n;j++)
		{
			printf("%d",g.a[i][j]);
		}
		printf("\n");
		
	}
}
void kiemtraMT(DOTHI g)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i][j]!=a[j][i]) return 0;
		}
	}
	return 1;
}
