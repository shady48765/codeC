#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
#define inputfile "C:/Users/Admin/Desktop/text.txt"
typedef struct TOADO
{
	int d;
	int c;
}TD;
typedef struct STACK
{
	TD a[];
	int count;
}st;
void push(st &s,TD g)
{
	s.a[s.count].d=g.d;
	s.a[s.count].c=g.c;
	s.count++;
}
void pop(st &s)
{
	s.count--;
}
int docfile(char tenFile[100],char a[][1000],int &m,int &n,TD &e)
{
	FILE* f;
	f=fopen(inputfile,"rt");
	if(f==NULL)
	{
		printf("ko mo dc file\n");
		return 0;
	}else
	{
		fscanf(f,"%d",&m);
		fscanf(f,"%d",&n);
		char k;
		for(int i=0;i<m;i++)
		{
			fscanf(f,"%c",&k);
			for(int j=0;j<n;j++)
			{
				fscanf(f,"%c",&a[i][j]);
				if(a[i][j]=='E')
				{
					e.d=i;
					e.c=j;
				}
			}	
		}
	}
	fclose(f);
}
int duyet(char a[][1000],st &s,TD &g,int m,int n)
{
	if(g.d==0 || g.d==m-1 || g.c==0 || g.c==n-1)
	{
		cout<<"k";
		return 1;
	}
	if(a[g.d][g.c-1]=='.')
	{
		a[g.d][g.c-1]='o';
		g.c=g.c-1;
		push(s,g);
		cout<<g.d<<" "<<g.c<<endl;
		duyet(a,s,g,m,n);
	}
	if(a[g.d][g.c+1]=='.')
	{
		a[g.d][g.c+1]='o';
		g.c=g.c+1;
		push(s,g);
		cout<<g.d<<" "<<g.c<<endl;
		duyet(a,s,g,m,n);
	}
	if(a[g.d-1][g.c]=='.')
	{
		a[g.d-1][g.c]='o';
		g.d=g.d-1;
		push(s,g);
		cout<<g.d<<" "<<g.c<<endl;
		duyet(a,s,g,m,n);
	}
	if(a[g.d+1][g.c]=='.')
	{
		a[g.d+1][g.c]='o';
		g.d=g.d+1;
		push(s,g);
		cout<<g.d<<" "<<g.c<<endl;
		duyet(a,s,g,m,n);
	}
	if(a[g.d+1][g.c]=='x' && a[g.d-1][g.c]=='x' && a[g.d][g.c+1]=='x' && a[g.d][g.c-1]=='x')
	{
		pop(s);
		g.d=s.a[s.count].d;
		g.c=s.a[s.count].c;
		duyet(a,s,g,m,n);
	}
	if(s.count==0) return 0;
}
int main()
{
	int m,n;
	TD e;
	char a[1000][1000];
	docfile(inputfile,a,m,n,e);
	st s;
	s.count=0; 
	if(duyet(a,s,e,m,n)==1) 
	{
		cout<<"yes"<<endl;
		for(int i=0;i<s.count;i++)
		{
			cout<<s.a[i].d<<" "<<s.a[i].c<<endl;
		}
	}
	else cout<<"no"<<endl;
	for(int i=0;i<s.count;i++)
		{
			cout<<s.a[i].d<<" "<<s.a[i].c<<endl;
		}
	return 0;
}
