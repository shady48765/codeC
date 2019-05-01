#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std; 
int xet(int n);
int main()  
{  
	int n;
	for (int i=2;i<=1000;i++)
	{
		xet(i);
	}
	return 0;
} 
int xet(int n)
{
	int r,sum=0,n1;     
	n1=n;  
	while(n>0)  
		{  
			r=n%10; 
			sum=sum+(r*r*r);  
			n=n/10;  
		}		  
	if(n1==sum) cout<<n1<<"\t";  
}
 
