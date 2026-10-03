// 
// 543%10=3
//     543/10=54
//     target*10+reminder=0+3=3

//     54%10=4
//     54/10=5
//     target*10+reminder=34

//     5%10=5
//     5/10=0
//     target*10+reminder=345*
#include <stdio.h>

int main()

{
   int target=0,remainder=0,intial,def;
   printf("enter your number");
   scanf("%d",&intial);
   def=intial;
   while(intial!=0)
   {
    remainder=intial%10;
    intial=intial/10;
    target=target*10+remainder;
   }
   intial=def;
   if(target==intial)
   {
    printf("it is a palindrome");
   }
   else{
    printf("it is not a palindrome");
   }
}
