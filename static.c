#include<stdio.h>
 void Demo()
{
  auto int A = 10;
  A++;
  printf("Value from Demo is : %d\n",A);

}
int main()
{
  Demo();
  Demo();

 return 0;
}