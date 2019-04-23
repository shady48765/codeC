#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std;
int tinh(int n);
int main()
{
	int n;
	cout<<"nhap so n: ";
	cin>>n;
	int h=n;
	while (n>=2)
	{
		if (tinh(h) && tinh(n-h))
		{
			cout<<n-h<<" and "<<h;
			break;
		}
		h--;
	}

	return 0;
}
int tinh(int n)
{	
	if (n<2) return false;
	for (int i =2;i<n;i++)
	{
		if (n % i ==0) return false;
	}
	return true;
}
