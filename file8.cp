#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 1000
void taofile(int n);
void docfile(int a[],int n);
bool kiemtra(int k);
void taofilekq(int a[],int n);
int main()
{
	srand(time(NULL));
	int n=1000;
	int a[MAX];
	taofile(n);
	docfile(a,n);
	taofilekq(a,n);
	return 0;
}
void taofile(int n)
{
	FILE *f;
	f=fopen("input.txt", "wt");
	if (f==NULL) 
		printf("khong tao duoc file");
	else
	{
		fprintf(f,"%5d\n",n);
		for(int i=0;i<n;i++)
		{
			int so=-1000+rand()%1001;
			fprintf(f,"%5d",so);
		}
		fclose(f);
	}
}
void docfile(int a[],int n)
{
	FILE *f;
	f=fopen("input.txt", "rt");
	if (f==NULL) 
		printf("khong mo duoc file");
	else
	{
		for(int i=0;i<n;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}
bool kiemtra(int k)
{
	if (k<0) k=k*(-1);
	if (k==0) 
	{
		return false;
	}
	while (k>0)
	{
		int n=k%10;
		if (n!=6 && n!=8)
			return false;
		k=k/10;	
	}
	return true;
}
void taofilekq(int a[],int n)
{
	FILE *f;
	f=fopen("luckynumber.txt", "wt");
	int b[MAX];
	int j=0;
	for(int i=0;i<n;i++)
	{
		if (kiemtra(a[i]))
		{
			b[j]=a[i];
			j++;	
		}
				
	}
	fprintf(f,"%d\n",j);
	if (f==NULL) 
		printf("khong tao duoc file");
	else
	{
		for(int i=0;i<j;i++)
		{
			
			fprintf(f,"%5d",b[i]);			
		}
		fclose(f);
		printf("thanh cong %s","luckynumber.txt");
	}
}
