#include<stdio.h>
//#include<cs50.h>
int main()
{
while(1)
{
int a=get_int("Determine the height of the pyramid by entering a value between 1 and 8:");

if(a>=1 && a<=8)//The loop is repeated until a value between 1 and 8 is entered.
 {
  for (int i = 0; i <a; i++)//Determines the height.
 {
     for (int j = i+1; j < a; j++)//Prints as many spaces as needed for the pyramid shape before the blocks.
     {
        printf(" ");
     }
       for (int k =a-i; k <=a; k++)//Prints blocks on the left side of the pyramid.
     {
        printf("#");
     } 
       for (int l=1; l <=2; l++)//Prints 2 spaces in the middle of the pyramid.
     {
        printf(" ");
     }
      for (int k =a-i; k <=a; k++)//Prints blocks on the right side of the pyramid.
     {
        printf("#");
     }  
        printf("\n");//Past to bottom line
     }
break;
//Exits the while loop.
}
}
}
