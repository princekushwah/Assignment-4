//9. Write a program to print cubes of the first 10 natural numbers
#include<stdio.h>
int main()
{
  int i,j;
  for(i=1;i<=10;i++)
  {
    j = i*i*i;
    printf("%d cube is %d\n",i,j);
  }
  return 0;
}
