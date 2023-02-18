#include<stdio.h>
int A = 10;
void fun()
{
  auto int B = 20;       
  register int D = 20;
  static int E = 20;
  B++;
  D++;
  E++;
 printf("Value of Auto variable : %d\n",B);
 printf("Value of register variable : %d\n",D);
 printf("Value of static variable : %d\n",E);


}
int main()
{

 int C = 30;
 printf("first funct call\n");

 fun();
 printf("second func call");
 fun();
 printf("third func call");
 fun();
 return 0;
}