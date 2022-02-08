#include<stdio.h>
int input()
{
  int a;
  printf("enter value:\n");
  scanf("%d",&a);
  return a;
}

int scalene(int a,int b,int c)
{
  if(a!=b&&b!=c)
  return 0;
  else
  return 1;
}

void output(int a,int b,int c,int scalene)
{
  if(scalene==0)
  printf("scalene");
  else
  printf("not scalene");
}

int main()
{
  int x,y,z,S;
  x=input();
  y=input();
  z=input();
  S=scalene(x,y,z);
  output(x,y,z,S);
  return 0;
}