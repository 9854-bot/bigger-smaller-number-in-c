// code by jay bhujbal
// includeing libraby
#include<stdio.h>
int main ()
{
    // asking to print 1 number
    printf("ENTER THE NUMBER A");
    // took the 1 intiger as "a"
    int a ;
    // asking to enter the number
    scanf("%d", &a);
    // took the 2 intiger as "b"
    int b ;
    //asking to enter the number
     printf("ENTER THE SECOND NUMBER B");
    // asking to enter the number
    //given the condition
    scanf("%d", &b);
    if (a ==b)
    {
        printf("BOTH ARE SAME ");
    }
   else if  (b<=a)
    {
        printf("A IS BIGGER THEN B ");
    }
   else if  (a<=b)
    {
        printf("B IS BIGGER THEN A ");
    }
    getchar();
    
}