#include<stdio.h>
int Multiplication(int no1, int no2)
{
  int ans = 0;
   ans = no1*no2;
  
  return ans;

}
int main()
{
 int A = 10, B = 11;
 auto int Ret = 0;
 printf("Inside the main function\n");
 Ret = Multiplication(A,B);
 printf("Multi is : %d\n",Ret);
 return 0;
}