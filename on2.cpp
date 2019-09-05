#include <stdio.h>
char check[30001];
int main()
{
    int i,a,b,k,d=0;
    scanf("%d%d",&a,&b);
    for(i=a; i<=b; ++i)
    {
        if(check[i]==0)
        {
            k = daonguoc(i);
            if(ucln(i,k)==1)
            {
                d++;
                check[i]=1;
                if(a<=k && k<=b && check[k]==0)
                {
                    check[k]=1;
                    d++;
                }
            }
        }
    }
    printf("%d",d);
    return 0;
}
