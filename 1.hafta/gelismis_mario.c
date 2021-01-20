#include<stdio.h>
//#include<cs50.h>
int main()
{
while(1)
{
int a=get_int("1'le 8 arasinda bir deger girerek piramidin yuksekligini belirleyin:");

if(a>=1 && a<=8)//1 ile 8 arasinda bir deger girilene kadar dongu tekrarlanir.
 {
  for (int i = 0; i <a; i++)//Yuksekligi belirler.
 {
     for (int j = i+1; j < a; j++)//Bloklardan once piramit sekli icin gereken kadar bosluk basar.
     {
        printf(" ");
     }
       for (int k =a-i; k <=a; k++)//Piramitin sol tarafindaki bloklari basar.
     {
        printf("#");
     } 
       for (int l=1; l <=2; l++)//Piramitin ortasina 2 adet bosluk basar.
     {
        printf(" ");
     }
      for (int k =a-i; k <=a; k++)//Piramitin sag tarafindaki bloklari basar.
     {
        printf("#");
     }  
        printf("\n");//Alt satira gecer.
     }
break;
//While dongusunden cikar.
}
}
}
