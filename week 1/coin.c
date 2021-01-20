#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
while(1)
{
float a=get_float("Amount of change _ in dollars _:");
int cents = round(a * 100);//Calculates cents equivalent of dollars.

if(cents>=1)//Because of cent cannot be less than 1 ,the minimum cent that can be entered into the program is limited to 1.
{
int bolum1 = cents / 25;
int kalan1 = cents - (bolum1 * 25);
int bolum2 = kalan1 / 10;
int kalan2 = kalan1 - (bolum2 * 10);
int bolum3 = kalan2 / 5;
int kalan3 = kalan2 - (bolum3 * 5);
int bolum4 = kalan3 / 1;
int kalan4 = kalan3 - (bolum4 * 1);
//Algorithm starting from 25 cents and dividing 10 5 cents and 1 cents respectively.
int toplam=bolum1+bolum2+bolum3+bolum4;
//The minimum number of over money can be given by the sum of the sections.
printf("%d\n",toplam);
break;
//For get out of the endless loop.
}
}
}
