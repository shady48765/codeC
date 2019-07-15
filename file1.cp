#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#define MAX 1000
#define InFile "D:\\SONGUYEN.INP"
#define OutFile "D:\\SOCHAN.OUT"
#define OutFile1 "D:\\SOLE.OUT"
void taofile();
void docfile(int a[]);
void taofilekq(int a[]);
int main()
{
	srand(time(NULL));
	int a[MAX];
	taofile();
	docfile(a);
	taofilekq(a);
	return 0;
}
void taofile()
{
	FILE *f;
	f=fopen("SONGUYEN.INP", "wt");
	if (f==NULL) 
		printf("khong tao duoc file");
	else
	{
		for(int i=0;i<MAX;i++)
		{
			int so=rand()%100;
			fprintf(f,"%5d",so);
		}
		fclose(f);
	}
}
void docfile(int a[])
{
	FILE *f;
	f=fopen("SONGUYEN.INP", "rt");
	if (f==NULL) 
		printf("khong tao duoc file");
	else
	{
		for(int i=0;i<MAX;i++)
			fscanf(f,"%d",&a[i]);
		fclose(f);
	}
}
void taofilekq(int a[])
{
	FILE *f1,*f2;
	f1=fopen("SOLE.INP", "wt");
	f2=fopen("SOCHAN.INP", "wt");
	if (f1==NULL || f2==NULL) 
		printf("khong tao duoc file");
	else
	{
		for(int i=0;i<MAX;i++)
		{
			if (a[i]%2==0)
				fprintf(f2,"%5d",a[i]);
			else fprintf(f1,"%5d",a[i]);
		}
		fclose(f1);
		fclose(f2);
		printf("thanh cong %s\n %s","SOLE.INP","SOCHAN.INP");
	}
}


