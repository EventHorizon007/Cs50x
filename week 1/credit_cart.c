#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Declares the function to the main program. So check_card function can be defined after the main function.
void check_card(long n);

int main()
{
  long n =get_long("Enter the 13-16 digit number written on your credit card, consecutively:");
  check_card(n);       //Transfers  the card number entered by the user to n variable.
}

//The check card function is defined. Since the function will not return the value, void is written at the beginning of the function.
void check_card(long n)
{
    long temp_n =n;
    int count = 2;        //Will keep the information about how many digits the card number has.
    
    //It finds the place value by dividing to 10 until it reaches 100 or a smaller value.
    while(temp_n > 100)
    {
        temp_n = temp_n / 10;
        count ++;
    }

    long temp_n2 = n;  
    int sum = 0;	   //It will hold the sums required for the Luhn Algorithm.
    
    //Luhn Algorithm
    for (int i = 1; i <= count; i++)
    {
        int digit = temp_n2 % 10;  //Digit variable holds the card number's i digit for right to left sequence
        if (i%2 == 0)		 //Checks sequence number from right to left and if the number is even,run the code inside if statement
        {
            if (digit * 2 > 9)	 //If the product of the digit and 2 has two digits, it adds the ones and tens digits to addition
            {
                sum += (digit * 2) - 9;
            }
            else
            {
                sum += digit * 2;	 //If the product of the digit and 2 is a single digit, it adds the resulting number to the addition.
            }
        }
        else	  //Checks sequence number from right to left and if the number is odd,run the code inside if statement
        {
             sum += digit;
        }  
        temp_n2 /= 10;	 //Pass to next digit.
    }
   
    //If the mode of the sum with 10 is 0, then the flag will be 0 (False) if not 1 (True).
    bool flag = (sum % 10 == 0) ? true : false;

    if (count == 15 && (temp_n == 34 || temp_n == 37) && flag==1)
    {
        printf("AMEX\n");
    }
    else if(count == 16 && (temp_n > 50 && temp_n < 56) && flag==1)
    {
        printf("MASTERCARD\n");
    }
    else if((count == 13 || count == 16) && (temp_n / 10 ==4) && flag==1)
    {
        printf("VISA\n");
    }
    else
    {
        printf("INVALID\n");
    }   
    
}
