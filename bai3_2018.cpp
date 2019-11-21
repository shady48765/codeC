#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define MAX 10
#define inputfile "C:/Users/Admin/Desktop/text.txt"
typedef struct THANHGO {
	int d;
	int r;
}TG;
int docfile(char tenFile[100]);
int xet(int j, int pt[],int tempS,TG g[]);
int main()
{
	docfile(inputfile);
	return 0;
}
int docfile(char tenFile[100])
{
	FILE* f;
	int n;
	f=fopen(inputfile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
		return 0;
	}else
		{
			fscanf(f,"%d",&n);
			for(int i=0;i<n;i++)
			{
				TG g[8];
				int s=0;
				for(int j=0;j<4;j++)
				{
					int a,b;
					fscanf(f,"%d",&a);
					fscanf(f,"%d",&b);
					if(a>b)
					{
						g[j].d=a;
						g[j].r=b;
					} else
						{
							g[j].d=b;
							g[j].r=a;
						}
					s=s+a*b;
				}
				int tempS=s;
				int pt[1000];
				pt[0]=1;
				int j=1;
				int k=2;
				while(s!=1)
				{
					if(s%k==0)
					{
						pt[j]=k;
						
						s=s/k;
						j++;k--;
					}
					k++;
				}
				j--;
				if(xet(j,pt,tempS,g)==1) cout<<"yes"<<endl;
				else cout<<"no"<<endl;
			}
			fclose(f);
		}	
	return 1;
}
int xet(int j, int pt[],int tempS,TG g[])
{
	for(int i=0;i<j;i++)
	{
		int d1 = pt[i];
		int r1 = tempS/pt[i];
		if(d1<r1)
		{
			int temp =d1;
			d1=r1;
			r1=temp;
		}
		int v=0;
		for(int u=0;u<4;u++)
		{
			if(g[u].d<=d1 && g[u].r<=r1) v++;
			if(g[u].d>d1 || g[u].r>r1) break;
			if(v==4) return 1;
		}
	}
	return 0;
}
