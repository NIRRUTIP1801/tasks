#include <stdio.h>

int cube(int n); //declaring function to calculate cube

int main(){      
  int n;         //variable to store value
  
  printf("enter value of number:");      //asking user to input a number
  scanf("%d",&n);                        //taking input n
  printf("cube of a no. is:%d",cube(n));  //printing cube by calling a function
  
 return 0;                    //returnig 0
}

int cube(int n){                 //definig function cube
  int cube=n*n*n;                 //calculating cube
  return cube;               //returning 
}



