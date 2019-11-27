#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <iomanip>
using namespace std;
#define MAX 20
#define VOCUC 1000
#define inputfile "C:/Users/Admin/Desktop/text.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;
typedef struct NHA
{
	int nha;
	int truong;
}NA;
int LuuVet[MAX];
int ChuaXet[MAX];
int DoDaiDuongDiToi[MAX];
int TimDuongDiNhoNhat(DOTHI g)
{
	int li=-1;
	float p=VOCUC;
	for(int i=0;i<g.n;i++)
	{
		if(ChuaXet[i]==0 && DoDaiDuongDiToi[i]<p)
		{
			p=DoDaiDuongDiToi[i];
			li=i;
		}
	}
	return li;
}
void CapNhatDuongDi(int u,DOTHI g)
{
	ChuaXet[u]=1;
	for(int v=0;v<g.n;v++)
	{
		if(ChuaXet[v]==0 && g.a[u][v]>0 && g.a[u][v]<VOCUC)
			if(DoDaiDuongDiToi[v]>DoDaiDuongDiToi[u]+g.a[u][v])
			{
				DoDaiDuongDiToi[v]=DoDaiDuongDiToi[u]+g.a[u][v];
				LuuVet[v]=u;
			}
	}
}
void Dijkstra(int S,int F,DOTHI g)
{
	for(int i=0;i<g.n;i++)
	{
		ChuaXet[i]=0;
		LuuVet[i]=-1;
		DoDaiDuongDiToi[i]=VOCUC;
	}
	DoDaiDuongDiToi[S]=0;
	while(ChuaXet[F]==0)
	{
		int u= TimDuongDiNhoNhat(g);
		cout<<u<<endl;
		if(u==-1) break;
		CapNhatDuongDi(u,g);	
	}
	if(ChuaXet[F]==1)
	{
		int i=F;
		cout<<F<<" ";
		while (LuuVet[i]!=S)
		{
			cout<<LuuVet[i]<<" ";
			i=LuuVet[i];
		}
		cout<<LuuVet[i]<<endl;
	}
}
int DocMaTran(char tenFile[100], DOTHI &g, int nha[])
{
	FILE* f;
	int m;
	f=fopen(inputfile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
		return 0;
	}else
	{
	fscanf(f,"%d",&g.n);
	fscanf(f,"%d",&m);
	for(int i=0;i<4;i++)
	{
		fscanf(f,"%d",&nha[i]);
	}
	for(int i=0;i<m;i++)
	{
		int a,b,h;
		fscanf(f,"%d",&a);
		fscanf(f,"%d",&b);
		fscanf(f,"%d",&h);
		g.a[a][b]=h;
		g.a[b][a]=h;
	}		
	fclose(f);
	}		
	Dijkstra(2,5,g);
	return 1;
}
int main()
{
	DOTHI g;
	for(int i=0;i<MAX;i++)
		for(int j=0;j<MAX;j++)
			g.a[i][j]=0;
	int nha[4];
	DocMaTran(inputfile,g,nha);
	return 0;
}

