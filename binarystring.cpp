#include <stdio.h>
#include <conio.h>  
#include <math.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
#define MAX 1000
void Comp(char a[MAX], char b[MAX], char c[MAX]);
void SubString(char a[MAX]) ;
void StrC(char c[MAX]);
int main()
{
	char a[MAX];
	char b[MAX];
	char c[MAX];
	scanf("%s",&a);
	scanf("%s",&b);
	cout<<endl;
	printf("%s",a);
	printf("%s",b);
	SubString(a);
	SubString(b);	
}
void SubString(char a[MAX])  
{
	int n=strlen(a);
    for (int len = 0; len <  n; len++)  
    {     
        for (int i = 0; i <= n - len; i++)  
        {    
            int j = i + len - 1;             
            for (int k = i; k <= j; k++)  
                cout << a[k]; 
              
            cout << endl; 
        } 
    }
}
void StrC(char c[MAX])
{
	int n=strlen(a);
	for (int len = 1; len <  n; len++)  
    {
    	c[MAX]
	}
}
void comp(char a[MAX], char b[MAX], char c[MAX])
{	
}
