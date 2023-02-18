#include<stdio.h>
#include<stdbool.h>

bool CheckEven(int iNo)
{
  if((iNo % 2) == 0)
   {
     return true;
   }
   else
   {
    return false;

   } 

}

int main()
{
 int iValue1 = 0;
 bool bRet = false;
 printf("enter one no \n");
 scanf("%d",&iValue1);
 
 bRet = CheckEven(iValue1);
 if(bRet == true)
{
 printf("it is even number\n");
} 
 else
{
 printf("it is odd number\n");
}
 return 0;
}