#include<stdio.h>
int main()
{
   int num,copy_of_num,sum=0,rem;
   printf("\nEnter a number:");
   scanf("%d",&num);
   copy_of_num = num;
   while (num != 0)
   {
      rem = num % 10;
      sum = sum + (rem*rem*rem);
      num = num / 10;
   }
   if(copy_of_num == sum)
      printf("\n%d is an Armstrong Number",copy_of_num);
   else
      printf("\n%d is not an Armstrong Number",copy_of_num);
   return(0);
}
