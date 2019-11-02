#include <bits/stdc++.h>
void doi1(std::string &s);
void doi2(std::string &s);
void doi3(std::string &s);
bool check(std::string s, int i, int j);
int main()
{
	int t;
	std::cin>>t;
	std::string s[100000];
	for(int i=0;i<t;i++)
	std::cin>>s[i];
	for(int i=0;i<t;i++)
	{
		//doi1(s[i]);
		//doi2(s[i]);
		doi3(s[i]);
		std::cout<<s[i]<<std::endl;
	}
}
void doi1(std::string &s)
{
	for(int i=0; i<s.length()-1;i++)
	{
		if( (int)(s[i]-48)%2 != (int)(s[i+1]-48)%2 && (int)(s[i]-48)>(int)(s[i+1]-48))
		{
			char temp=s[i];
			s[i]=s[i+1];
			s[i+1]=temp;
		}
	}
 
}
void doi2(std::string &s)
{
	for(int i=s.length()-1; i>0;i--)
	if( (int)(s[i]-48)%2 != (int)(s[i-1]-48)%2 && (int)(s[i]-48)<(int)(s[i-1]-48))
	{
		char temp=s[i];
		s[i]=s[i-1];
		s[i-1]=temp;
	}
}
void doi3(std::string &s)
{
    int i=0;
    while( i<s.length()-1)
    {
        if((int)(s[i]-48)%2 != (int)(s[i-1]-48)%2)
        {
            int j=i-1;
            while(check(s,i,j)) j--;
            if((int)(s[j]-48)>(int)(s[i]-48))
            {
                //std::cout<<i<<std::endl;
                for(int k=i;k>j;k--)
                {
                    char temp = s[k];
                    s[k]=s[k-1];
                    s[k-1]=temp;
                }
                //i=j+1;
                //std::cout<<i<<std::endl;
                //std::cout<<s<<std::endl;
            }
        }
        i++;
    }
}
bool check(std::string s, int i, int j)
{
    if(j==0) return false;
    if((int)(s[i]-48)%2 != (int)(s[j]-48)%2 && (int)(s[j]-48)<(int)(s[i]-48))
    return true;
    else return false;
}
