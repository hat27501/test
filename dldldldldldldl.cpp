#include "stdio.h"
int main () {
  for(int i=1;i<=9;i++){
    for(int x=1;x<=9;x++){
        printf("%d X %d = %d \n",i,x,i*x);
      }
    printf("\n");
  }
  return 0;
}
