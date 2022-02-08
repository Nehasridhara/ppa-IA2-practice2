#include <stdio.h>
void input(float *base,float *height)
{
  printf("enter the values:\n");
  scanf("%f%f",base,height);
}

void area(float base,float height,float*A)
{
  *A=((base*height)/2);
}

void output(float base,float height,float A)
{
  printf("Area of triangle is ((%f*%f)/2))=%f:\n",base,height,A);
}

int main()
{
  float base,height,A;
  input(&base,&height);
  area(base,height,&A);
  output(base,height,A);
  return 0;
}








