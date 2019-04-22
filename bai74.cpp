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
	int h=2*n;
	while (h>=n)
	{
		if (tinh(h))
		{
			cout<<"so nguyen to lon nhat la: "<<h;
			break;
		}
		h--;
	}

	return 0;
}
int tinh(int n)
{
	for (int i =2;i<n;i++)
	{
		if (n % i ==0) return false;
	}
	return true;
}

