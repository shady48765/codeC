#include <math.h>
#include <conio.h>
#include <stdio.h>

/*int main ()
{
	int n;
	printf ("nhap canh cua tam giac vuong can");
	scanf ("%d",&n);
	printf ("hinh 1: \n");
	VeHinh1 (n);
	return 0;
}*/
void VeHinh1 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if (i+j<=n+1)
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
void vehinh2 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if (i+j>=n+1)
			
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
void vehinh5 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if (i>=j)
			
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
void vehinh6 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if (i<=j)
			
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
void vehinh3 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if ((i==1) || (j==1) || (i+j==n+1))
			
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
void vehinh4 (int n)
{
	for (int i = 1; i <= n;i ++)
	{
		for (int j = 1; j <= n; j ++)
		{
			if ((i==5) || (j==5) || (i+j==n+1))
			
				printf ("X ");
			else
				printf ("  ");
		}
		printf ("\n");
	}
}
int main ()
{
	int n;
	printf ("nhap canh cua tam giac vuong can");
	scanf ("%d",&n);
	printf ("hinh 1: \n");
	VeHinh1 (n);
	printf ("hinh 2: \n");
	vehinh2 (n);
	printf ("hinh 5: \n");
	vehinh5 (n);
	printf  ("hinh 6: \n");
	vehinh6 (n);
	printf ("hinh 3: \n");
	vehinh3 (n);
	printf ("hinh 4: \n");
	vehinh4 (n);
	return 0;
}
