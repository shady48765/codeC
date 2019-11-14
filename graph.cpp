#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MAX 10
#define inputfile "C:/Users/Admin/Desktop/ThucHanhLTDT_HUTECH_SV/Bo du lieu test/test3.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;
void XetLT(DOTHI g);
int DocMT(char tenFile[100], DOTHI &g);
void XuatMT(DOTHI g);
int kiemtraMT(DOTHI g);
void TimDinhLT(DOTHI g,int nhax[MAX],int i);
int main()
{
	DOTHI g;
	DocMT(inputfile,g);
	XuatMT(g);
	if(kiemtraMT==0) cout<<"co huong"<<endl;
	else cout<<"vo huong"<<endl;
	XetLT(g);
	return 0;
}
int DocMT(char tenFile[100], DOTHI &g)
{
	FILE* f;
	f=fopen(inputfile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
		return 0;
	}
	fscanf(f,"%d",&g.n);
	for(int i=0;i<g.n;i++)
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
int kiemtraMT(DOTHI g)
{
	for(int i=0;i<g.n;i++)
	{
		for(int j=0;j<g.n;j++)
		{
			if(g.a[i][j]!=g.a[j][i]) return 0;
		}
	}
	return 1;
}
void TimDinhLT(DOTHI g,int nhan[MAX],int i)
{
	for(int j=0;j<g.n;j++)
	{
		if(g.a[i][j]!=0 && nhan[j]!=nhan[i])
		{
			nhan[j]=nhan[i];
			TimDinhLT(g,nhan,j);
		}
	}
}
void XetLT(DOTHI g)
{
	int nhan[MAX]={0};
	int SoLT=0;
	for(int i=0;i<g.n;i++)
	{
		if(nhan[i]==0)
		{
			SoLT++;
			nhan[i]=SoLT;
			TimDinhLT(g,nhan,i);
		}
	}
	cout<<"so tp lien thong: "<<SoLT<<endl;
	for(int i=1;i<=SoLT;i++)
	{
		cout<<"thanh phan lien thong thu "<<i<<" gom ca dinh: ";
		for(int j=0;j<g.n;j++)
		{
			if(nhan[j]==i) cout<<j<<" ";
		}
		cout<<endl;
	}
}
