#include <stdio.h>

int main(){

  int i, factorial=1, n=9;
  for(i=1;i<=n;i++)
  factorial = factorial * i;
  printf("Factorial from 1 to %d is %d \n",n,factorial);
  return 0;
  
}
