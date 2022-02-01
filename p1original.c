#include<stdio.h>

int input(int *a,int *b)
{
  printf("Enter the value of a =\n");
  scanf("%d",a);
  printf("Enter the value of b =\n");
  scanf("%d",b);
}

int add(int a,int b,int *sum)
{
  *sum = a + b;
}

int output(int a,int b,int sum)
{
  printf("Sum = %d\n",sum);
}

int main()
{
  int x,y,sum;
  input(&x,&y);
  add(x,y,&sum);
  output(x,y,sum);
  return 0;
}