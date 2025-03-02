#include <stdio.h>
#include <math.h>

int prct(int a,int b);   //declaring function to calculate perimeter

int main(){
  int a,b;                        //variable to store value of a and b
  
  printf("enter value of l an b:");                           //asking for values of a &b
  scanf("%d%d",&a,&b);                                       //taking input a &b
  printf("perimeter of rectangle is:%d",prct(a,b));              //printing perimeter by calling a function
  
 return 0;
}

int prct(int a,int b){               //definig function cube
  int prim=2*(a+b);                     //calculating perimeter of rectangle 
  return prim;                           //returning perimetr
}//end