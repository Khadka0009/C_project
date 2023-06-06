/*this is multiplication table 
program of input number*/
#include<stdio.h>
int main() {
  int num;
  printf("Enter the number you want multiplicatoon table of:\n");
  scanf("%d",&num);
   printf("multiplicatoon table of %d is as follows:\n");
   for(int i=1; i<=10; i++)
   {
     
   printf("%d x %d = %d\n",num,i,num*i);
   
 }
   return 0;
}