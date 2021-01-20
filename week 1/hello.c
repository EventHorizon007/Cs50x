#include <stdio.h>
#include<cs50.h>
int main(void)
 {
     string isim=get_string("What is your name?");
//Gets a word with get string.
     printf("Hello,%s\n",isim);
//With printf, 'Hello,' is printed in the quotes and the answer that is received with% s is printed.
 }
