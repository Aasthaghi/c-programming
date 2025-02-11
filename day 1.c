#include<stdio.h>
#include<math.h>
int main()
{
  int num,r,digits,sum=0;
  printf("enter a number:");
  scanf("%d", &num);
  int temp=num;
  while(num>0){
    r=num%10;
    sum = sum+pow(r,digits);
    num=num/10;
  }
  if( temp== sum){
    printf("armstrong");}
     else
    {
        printf("not armstrong");
    }
    return 0;
  }
