#include <stdio.h>

int main()
{
    char sign;
    int num = 40;
    int num2 = 10;
    
    printf("Choose an operation: ");
    scanf("%c", &sign);
   
   
   switch (sign)
   {
       case '+':
       printf("%d + %d = %d", num, num2, num + num2);
       break;
       
       case '-':
       printf("%d - %d = %d", num, num2, num - num2);
       break;
       
       default:
       printf("Choose a valid operator");
   }
   

    

    return 0;
}