#include<iostream>
#include<set>
#include<cstring>
usingnamespacestd;
int main()
{
    string n,s;
    set<string> st;
    cin>>n;
    intlen = n.length();
    st.insert(n);
    for(inti=1; i<len; ++i)
        {
            for(intj=0; j<= len-i; ++j)
            {
                s=n.substr(0,j)+n.substr(j+i);
                while(s[0]=='0') s=s.substr(1);
                st.insert(s);
                
            }
        }
    set<string>::iterator it;
    inttong;intdem=0;
    for(it=st.begin();it!=st.end(); ++it)
    {
        tong=0;
        for (inti=0; i<(*it).length(); ++i)
            tong+=(*it)[i]-'0';
        if (tong %3==0)  dem++;
    }
    cout<<dem;
    return 0;
    
}
