#include<stdio.h>
#include<cs50.h>
#include<math.h>
int main()
{
while(1)
{
float a=get_float("Para ustu miktari_dolar cinsinden_:");
int cents = round(a * 100);//Dolarýn cent türünden degeri.

if(cents>=1)//1 centten daha kucuk para birimi olmadigi icin programa girilebilecek minimum cent 1 ile sinirli.
{
int bolum1 = cents / 25;
int kalan1 = cents - (bolum1 * 25);
int bolum2 = kalan1 / 10;
int kalan2 = kalan1 - (bolum2 * 10);
int bolum3 = kalan2 / 5;
int kalan3 = kalan2 - (bolum3 * 5);
int bolum4 = kalan3 / 1;
int kalan4 = kalan3 - (bolum4 * 1);
//25 centten baslayarak kalani sirasiyle 10 5 ve 1 centlere bolucek algoritma.
int toplam=bolum1+bolum2+bolum3+bolum4;
//Minimum kac centle para ustu verilebilecegi bolumlerin toplami ile bulunur.
printf("%d\n",toplam);
break;
//Sonsuz donguden cikmak icin.
}
}
}
