#include<stdio.h>
void input(int *num1,int *den1,int *num2,int *den2)
{
  printf("Enter the first fraction:\n");
  scanf("%d%d", num1,den1);
  printf("Enter the second fraction:\n");
  scanf("%d%d", num2,den2);
}

void add(int num1,int den1,int num2,int den2,int *num3,int *den3)
{
  if(den1==den2)

 {
   *num3=num1+num2;
   *den3=den1;
 } 
  *den3=den1+den2;
  *num3=(num1*den2)+(num2*den1);
 for(int i=2;i<8;i++)
  {
    if(*num3%i==0 && *den3%i==0)
   {
     *num3=(*num3)/i;
     *den3=(*den3)/i;
   }
  }
 if(*num3==*den3)
   *num3=*den3=1;
}
void output(int num1,int den1,int num2,int den2,int )
    
  

