//8. Write a program to print squares of the first 10 natural numbers
#include<stdio.h>
int main()
{
  int i, r, s=0;
  for(i=1;i<=10;i++)
  {
    r=i*i;
    printf("%d square of %d\n",i,r);
  }
 return 0;

}
