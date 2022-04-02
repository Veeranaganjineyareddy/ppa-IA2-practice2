#include<stdio.h>
#include<string.h>
void input_string(char *a)
{
    printf("enter the value of string of a\n");
    scanf("%s",a);
}
int str_reverse(char a[20])
{
    int i;
    int c=0;
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    char one;
    for(i=0;i<c/2;i++)
    {
        one=a[i];
        a[i]=a[c-i-1];
        a[c-i-1]=one;
    }
}

 void output(char a[20])
 {
     printf("the reverse sting is %s",a);
 }
 int main()
 {
     char a[20];
     input_string(a);
     str_reverse( a);
      output(a);
     return 0;
     
 }
    
