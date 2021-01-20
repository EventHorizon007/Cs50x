#include <stdio.h>
#include <cs50.h>
#include <math.h>

//Fonksiyonu ana programa declare eder.Yani check_card fonksiyonu ana fonksiyondan sonra tanimlanabilir.
void check_card(long n);

int main()
{
  long n =get_long("Kredi kartinizin uzerinde yazan 13-16 haneli numarayi bitisik olucak sekilde giriniz:");
  check_card(n);       //Fonksiyona kullanici tarafindan girilen kart numarasi n degiskenini aktarir.
}

//check_card fonksiyonunu tanimlanir.Fonksiyon deger dondurmeyeceginden basina bos anlamindaki void yazilir.
void check_card(long n)
{
    long temp_n =n;   //Kart numarasini gecici olarak tutacak.
    int count = 2;        //Count sayinin kac basamakli oldugu bilgisini tutacak.
    
    //100 e veya daha kucuk bir deger olana kadar 10 a bolerek basamak degeri bulur.
    while(temp_n > 100)
    {
        temp_n = temp_n / 10;
        count ++;
    }

    long temp_n2 = n;  //Kart numarasini gecici olarak tutacak.
    int sum = 0;	   //Luhn Algoritmasi icin gerekli toplamlari tutacak.
    
    //Luhn Algoritması
    for (int i = 1; i <= count; i++)
    {
        int digit = temp_n2 % 10;  //digit degiskeni kart numarasinin sagdan i . basamagini tutar./
        if (i%2 == 0)		 //Bakilan basamagin sag siradan kacinci olduguna bakar.
        {
            if (digit * 2 > 9)	 //Basamagin 2 ile carpimi iki basamakliysa cikan sayinin birler ve onlar basamagini toplama islemine katar.
            {
                sum += (digit * 2) - 9;
            }
            else
            {
                sum += digit * 2;	 //Basamagin 2 ile carpimi tek basamakliysa cikan sayiyi toplama islemine katar.
            }
        }
        else	  //bakilan basamagin  sag siradan sayildiginda tek sayili bir siralamada ise basamagi toplama katar.
        {
             sum += digit;
        }  
        temp_n2 /= 10;	 //temp degiskenini ona bolerek sonraki basamaklarin bakilmasini saglar.
    }
   
    //Toplamin 10 ile modu 0 ise flag degiskeni 1(True) degilse 0(False) olur.
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
