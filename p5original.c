#include <stdio.h>
int input()
{
  int a;
  printf("enter the numbers:\n");
  scanf("%d",&a);
  return a;
}

int gcd(int a,int b)
{
  int gcd=0;
  for(int i=1;i<=a&&i<=b;i++)
    {
      if(a%i==0&&b%i==0)
      gcd=i;
    }
  return gcd;
}

void output(int a,int b,int HCF)
{
  printf("the HCF of %d and %d is %d:\n",a,b,HCF);
}

int main()
{
  int a,b,HCF;
  a=input();
  b=input();
  HCF=gcd(a,b);
  output(a,b,HCF);
  return 0;
}