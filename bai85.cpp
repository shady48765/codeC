#include <iostream>
#include <stdio.h>
#include <iostream>
using namespace std; 
int hecoso(int n,int h);
int main()
{
	int n;
	int h;
	cout<<"nhap so he thap phan: ";
	cin>>n;
	cout<<"nhap he co so muon doi: ";
	cin>>h;
	hecoso(n,h);		
	return 0;
}
int hecoso(int n,int h)
{
	int k=0;
	char Arr[30];
	if (h<10)
		{
			while (n>0)
			{
				Arr[k]=n%h;
				k++;
				n=n/2;
			}
 		} else 
 			{
 				int m;
				while (n>0)
				{
    				m = n % 16;
    				if (m >= 10)
					{
        				Arr[k] = 'A' + (m-10);
        				k++;
    				} else 
						{
            				Arr[k] = m;
            				k++;
        				}
    				n=n/16;
				}
			}
	for(int i=k-1;i>=0;i--)
	{
		cout<<Arr[i];
	}
	cout<<endl;
	return 0;
}

