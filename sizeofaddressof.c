#include<stdio.h>

int main()
{
 char ch = 'a';
 int i = 11;
 float f = 3.14;
 double d = 9.567;
 
 printf("%c\n",ch);
 printf("%d\n",i);
 printf("%f\n",f);
 printf("%ld\n",d);

 printf("Size of each variable\n");
 printf("Size of character : %d\n",sizeof(ch));
 printf("Size of integer : %d\n",sizeof(i));
 printf("Size of float : %d\n",sizeof(f));
 printf("Size of double : %d\n",sizeof(d));

 printf("Address of each variable\n");
 printf("Address of ch : %d\n",&ch);
 printf("Address of i : %d\n",&i);
 printf("Address of f : %d\n",&f);
 printf("Address of d : %d\n",&d);
 return 0;
}