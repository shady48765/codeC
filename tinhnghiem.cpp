#include <stdio.h>
#include <math.h>

float x=0;

void solve(float b, float c, float d,float e)
{
  float fX, faX;
  int i=0;
  x=-3000;
  int maxLoop = 100;
  while (i < maxLoop)
  {
    fX = b*pow(x,3)+c*pow(x,2)+d*x+e;
    faX = 3*b*pow(x,2)+2*c*pow(x,1)+d;
    x = x-fX/faX;
    i++;
  }
  printf("\nNghiem gan dung cua PT la: %f\n",x);
}

int main()
{
   float b,c,d,e;
   printf("Nhap he so PT theo dang Bx^3+Cx^2+Dx+E=0:");
   scanf("%f %f %f %f",&b,&c,&d,&e);
   
   solve(b,c,d,e);
   return 0;
}
