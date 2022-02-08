#include <stdio.h>
int input()
{
  int n;
  printf("enter the number:\n");
  scanf("%d",&n);
  return n;
}

int composite(int n)
{
  int i;
  for(i=2;i<n/2;i++)
  {
    if(n%i==0)
    return 0;
    else
    return 1;
  }
}

void output(int n,int composite)
{
  if(composite==0)
  printf("composite");
  else
  printf("not composite");
}

int main()
{
  int n,x;
  n=input();
  x=composite(n);
  output(n,x);
  return 0;
}

