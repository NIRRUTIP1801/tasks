#include <stdio.h>
#include <math.h>

int prct(int a,int b);

int main(){
  int a,b;
  
  printf("enter value of l an b:");
  scanf("%d%d",&a,&b);
  printf("perimeter of rectangle is:%d",prct(a,b));
  
 return 0;
}

int prct(int a,int b){
  int prim=2*(a+b);
  return prim;
}