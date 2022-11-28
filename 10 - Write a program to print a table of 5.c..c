//10. Write a program to print a table of 5.
#include<stdio.h>
int main()
{
    int i,j,n=5;
    for(i=1;i<=10;i++)
    {
      j=i*n;
      printf(" %d x %d = %d\n",n,i,j);
    }
 return 0;
}
