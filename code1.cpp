#include <bits/stdc++.h>
void doi1(std::string &s);
void doi2(std::string &s);
int main()
{
	int t;
	std::cin>>t;
	std::string s[50];
	for(int i=0;i<t;i++)
	std::cin>>s[i];
	for(int i=0;i<t;i++)
	{
		doi1(s[i]);
		doi2(s[i]);
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

