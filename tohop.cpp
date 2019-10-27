
#include <iostream>
#include <string>
int ch(int n,int k);
int giai(int n);
int main()
{
  int c[20];
  int n;
  std::cout<<"nhap n: ";
  std::cin>>n;
  c[1]=2;
  c[2]=3;
  for(int i=3;i<=n;i++)
  {
      c[i]=c[i-1]+c[i-2];
  }
 
  std::cout<<c[n]<<std::endl;
  std::cout<<ch(10,5);
  return 0;
}
int ch(int n,int k)
{
    return giai(n)/(giai(k)*giai(n-k));
}
int giai(int n)
{
    int kq=1;
    for(int i=1;i<=n;i++)
    {
        kq=kq*i;
    }
    return kq;
}
