#include <stdio.h>
#include <math.h>
char a[100000];
void sang(int n)
{
	int i,j,k,u;
	int x =(int)sqrt(n);
	for(i=1;;i++)
	{
		k=i*2+1;
		if (k>x) break;
		u=(n+1)/k;
		if(a[i]==0)
		{
			for(j = k; j<u+1;j+=2)
			{
				if(a[(j*k-1)/2]==0) a[(j*k-1)/2]=1;
			}
		}
	}
}
int main()
{
	int i,k,A,B;
	scanf("%d%d",&A,&B);
	if(A<=2)
	{
		A =1;
		printf("2\n");
	} else A = A/2;
	sang(B);
	B = B/2+ B%2;
	for(i = A; i<B; ++i)
	{
		if(a[i]==0)
		printf("%d\n",i*2+1);
	}
	return 0;
}