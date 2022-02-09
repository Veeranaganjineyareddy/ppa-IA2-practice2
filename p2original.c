#include<stdio.h>
int input_side()
{
  int n;
  printf("enter any value:");
  scanf("%d",&n);
  return n;
}
int check_scalene(int a,int b,int c)
{
  if(a!=b && b!=c)
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
  int a,b,c,d;
  a=input_side();
  b=input_side();
  c=input_side();
  d=check_scalene(a,b,c);
  output (a,b,c,d);
  return 0;

}