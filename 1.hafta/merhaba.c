#include <stdio.h>
#include<cs50.h>
int main(void)
 {
     string isim=get_string("Senin ismin nedir?");
//get string ile string yani kelime alir.
     printf("Merhaba,%s\n",isim);
//printf ile tirnak icindeki 'Merhaba,' basilir %s ile alinan cevap yani isim basilir.
 }
