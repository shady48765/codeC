#include <conio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char str[25]="68686866666888888866666";
	char strkq[25];
	for (int i=0;i<strlen(str);i++)
	{
		if(str[i]==(char)(54)&&str[i]==(char)(56)) 
		{
			cout<<"la so may man";
			break;
		}
	}
	for (int i=0;i<strlen(str);i++)
	{
		if(str[i]==(char)(57)) 
		{
			strkq=char(56);
		}
	}
	return 0;
}
