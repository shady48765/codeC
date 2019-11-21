#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>// input output manipulation
using namespace std;
#define MAX 10
#define inputfile "C:/Users/Admin/Desktop/text.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;
void duyetDFS(int s,int f,DOTHI g);
void DFS(int v,DOTHI g,int LuuVet[],int ChuaXet[]);
void DocMT(char tenFile[100], DOTHI &g);
int main()
{
	DOTHI g;
	for(int i=0;i<MAX;i++)
	{
		for(int j=0;j<MAX;j++)
			g.a[i][j]=0;
	}
	//g.a[MAX][MAX]={0};
	DocMT(inputfile,g);
	return 0;
}
void DocMT(char tenFile[100], DOTHI &g)
{
	int k,m;
	FILE* f;
	f=fopen(inputfile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
	}
	else
	{
		fscanf(f,"%d",&g.n);
		fscanf(f,"%d",&k);
		for(int i=0;i<k;i++)
		{
			int a,b;
			fscanf(f,"%d",&a);
			//cout<<"a="<<a<<endl;
			fscanf(f,"%d",&b);
			//cout<<"b="<<b<<endl;
			g.a[a][b]=1;
			g.a[b][a]=1;
		}
		for(int i=0;i<g.n;i++)
		{
			for(int j=0;j<g.n;j++)
				cout<<setw(5)<<g.a[i][j];
			cout<<endl;
		}
		//exit(1);
		fscanf(f,"%d",&m);
		for(int i=0;i<m;i++)
		{
			int a,b;
			fscanf(f,"%d",&a);
			fscanf(f,"%d",&b);
			duyetDFS(a,b,g);
		}
		fclose(f);
	}
}
void DFS(int v,DOTHI g,int LuuVet[],int ChuaXet[])
{
	ChuaXet[v]=1;
	for(int u=0;u<g.n;u++)
	{
		if(g.a[v][u]!=0 && ChuaXet[u]==0)
		{
			LuuVet[u]=v;
			DFS(u,g,LuuVet,ChuaXet);
		}
	}
}
void duyetDFS(int s,int f,DOTHI g)
{
	int i,j;
	int LuuVet[MAX]={-1};
	int ChuaXet[MAX]={0};
	DFS(s,g,LuuVet,ChuaXet);
	if(ChuaXet[f]==1)
	{	
		i=f;
		while(i!=s)
		{
			j=i;
			i=LuuVet[i];
		}
		cout<<j<<endl;
	} 
	else cout<<"-1";
}
