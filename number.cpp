#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
void xet(char s[],int i, int &n);
int main()
{
	char str[25]="48885";
	int n=strlen(str);
	for (int i=0;i<n;i++)
	{
		xet(str,i,n);	
	}
	for (int i=0;i<n;i++)
	{
		cout<<str[i];
	}
	return 0;
}
void xet(char s[],int i, int &n)
{
	if(s[0]<(char)(54))
	{
		n--;
		for (int i=0;i<n;i++)
		{
			s[i]=(char)(56);
		}
	}
	if(s[i]==(char)(57))
	{
		s[i]=(char)(56);
	}
	if(s[i]==(char)(55))
	{
		s[i]=(char)(54);
	}
	if(s[i]<(char)(54))
	{
		s[i]=(char)(56);
		s[i-1]=s[i-1]-1;
		xet(s,i-1,n);
	}
}
