#include<stdio.h>
#include<cs50.h>
int main()
{
// Surekli dongu bu donguden cikmak icin break kullanilacak.
while(1)
{
int a=get_int("Determine the height of the pyramid by entering a value between 1 and 8:");

if(a>=1 && a<=8)//The loop is repeated until a value between 1 and 8 is entered.
 {
  for (int i = 0; i <a; i++)//Determines the height.

 {
     for (int j = i+1; j < a; j++)//It prints as many spaces as needed for the pyramid shape before the blocks.
     {
        printf(" ");
     }
       for (int k =a-i; k <=a; k++)//Prints the blocks.
     {
        printf("#");
     } 
        printf("\n");
     }
break;
}
}
}
