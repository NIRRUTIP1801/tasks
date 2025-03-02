#include <stdio.h>

int cube(int n);

int main(){
  int n;
  
  printf("enter value of number:");
  scanf("%d",&n);
  printf("cube of a no. is:%d",cube(n));
  
 return 0;
}

int cube(int n){
  int cube=n*n*n;
  return cube;
}



