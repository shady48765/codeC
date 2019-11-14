#define MAX 10
#define #define inputfile "C:/Users/Admin/Desktop/ThucHanhLTDT_HUTECH_SV/Bo du lieu test/test3.txt"
typedef struct GRAPH {
	int n;
	int a[MAX][MAX];
}DOTHI;
int LuuVet[MAX]={-1};
int ChuaXet[MAX]={0};
void DFS(int v,DOTHI g)
{
	ChuaXet[v]=1;
	for(int u=0;u<g.n;u++)
	{
		if(g.a[v][u]!=0 && ChuaXet[u]==0)
		{
			LuuVet[u]=v;
			DFS(u,g);
		}
	}
}
void duyetDFS(int s,int f,DOTHI g)
{
	DFS(s,g);
	if(ChuaXet[f]==1)
	{
		i=f;cout<<f;
		while(i!=s)
		{
			cout<<LuuVet[i];
			i=LuuVet[i];
		}
	} else cout<<"ko co duong di";
}

