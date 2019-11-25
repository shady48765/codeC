#include <stdio.h>
#include <stdlib.h>
#include <iostream>
using namespace std;
typedef struct STACK
{
	int a[1000];
	int count;
}stack;
typedef struct TOADO
{
	int hang;
	int cot;
}toado;
int duyet(char a[][],stack ketqua, toado chay,toado dich,bool traloi)
{
	if(chay.cot==0 || chay.hang==0 || chay.cot=m-1 || chay.hang==n-1)
	{
		if(dich.cot!=0 && dich.hang!=0 && dich.cot!=m-1 && dich.hang!=n-1)
		{
			traloi=false;
			return 0;
		}
		if(chay.cot==0 && dich.cot==0)
		{
			if(chay.hang>dich.hang)
			{
				int i=dich.hang;
				int iden=chay.hang;
			} else
			{
				int iden=dich.hang;
				int i=chay.hang;
			}
			int dem;
			for(i;i<iden;i++)
			{
				if(a[i][0]=='#')
				{
					dem++;
					break;
				}
			}
			if(dem==0)
			{
				traloi==true;
				return 1;
			}else
			{
				traloi=false;
				return 0;
			}
		}
		if(chay.cot==m-1 && dich.cot==m-1)
		{
			if(chay.hang>dich.hang)
			{
				int i=dich.hang;
				int iden=chay.hang;
			} else
			{
				int iden=dich.hang;
				int i=chay.hang;
			}
			int dem;
			for(i;i<iden;i++)
			{
				if(a[i][m-1]=='#')
				{
					dem++;
					break;
				}
			}
			if(dem==0)
			{
				traloi==true;
				return 1;
			}else
			{
				traloi=false;
				return 0;
			}
		}
		if(chay.hang==0 && dich.hang==0)
		{
			if(chay.cot>dich.cot)
			{
				int i=dich.cot;
				int iden=chay.cot;
			} else
			{
				int iden=dich.cot;
				int i=chay.cot;
			}
			int dem;
			for(i;i<iden;i++)
			{
				if(a[0][i]=='#')
				{
					dem++;
					break;
				}
			}
			if(dem==0)
			{
				traloi==true;
				return 1;
			}else
			{
				traloi=false;
				return 0;
			}
		}
		if(chay.hang==n-1 && dich.hang==n-1)
		{
			if(chay.cot>dich.cot)
			{
				int i=dich.cot;
				int iden=chay.cot;
			} else
			{
				int iden=dich.cot;
				int i=chay.cot;
			}
			int dem;
			for(i;i<iden;i++)
			{
				if(a[0][n-1]=='#')
				{
					dem++;
					break;
				}
			}
			if(dem==0)
			{
				traloi==true;
				return 1;
			}else
			{
				traloi=false;
				return 0;
			}
		}
	}
	if(dich.cot==chay.cot && dich.hang=chay.hang)
	{
		traloi==true;
		return 1;
	}
}
