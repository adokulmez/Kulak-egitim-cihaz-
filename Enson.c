#include <16f877.h>   // 16f877 denetleyicisini kullanaca��z
#use delay(clock=4000000)  // kristalimiz 4 mhz (delay fonksiyonu i�in)
#fuses XT, NOPROTECT, NOBROWNOUT, NOLVP, NOCPD, NOWRT, NODEBUG // fuse ayarlar�
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#IGNORE_WARNINGS 202, 203


void main(void)
{
   srand(get_rtcc());
   int kontrol = 0;
   int notalar;
   int beklemeSaniyesi = 1;   //Dikkat!! Saniye cinsinden yaz�n. Bekleme s�relerinin tamam�n� tek seferde bu de�eri de�i�tirerek yapabiliriz
   
while(1)    // sonsuz d�ng�
   {
      if(kontrol == 0)
      {
         //�� notay� rastgele olu�turuyoruz.+
         notalar = rand() % 13;// rand �n pic c deki kar��l���n� yaz
         
         delay_ms(beklemeSaniyesi*1000);   //Sistem a��l�nca biraz bekleyip �al���yor. Daha efektif olsun diye.
         
        
            switch (notalar){   //Belirlenen notalar�n bacaklar�na 1sn s�reli�ine 1 de�erini veriyoruz
            case 0:
               output_high(PIN_B6);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B6);
               break;
            case 1:
               output_high(PIN_B5);
                delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B5);
               break;
            case 2:
               output_high(PIN_B4);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B4);
               break;
            case 3:
               output_high(PIN_B3);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B3);
               break;
            case 4:
               output_high(PIN_B2);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B2);
               break;
            case 5:
               output_high(PIN_B1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B1);
               break;
            case 6:
               output_high(PIN_B0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_B0);
               break;
            case 7:
               output_high(PIN_A5);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A5);
               break;
            case 8:
               output_high(PIN_A4);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A4);
               break;
            case 9:
               output_high(PIN_A3);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A3);
               break;
            case 10:
               output_high(PIN_A2);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A2);
               break;
            case 11:
               output_high(PIN_A1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A1);
               break;
            case 12:
               output_high(PIN_A0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_A0);
               break;
            }
         
         kontrol =1;
      }
      else if(kontrol == 1){
         if(input_state(PIN_C4) || input_state(PIN_C3) || input_state(PIN_C2) || input_state(PIN_C1) || input_state(PIN_C0) ||  input_state(PIN_D7) ||  input_state(PIN_D6) ||  input_state(PIN_D5) ||  input_state(PIN_D4) ||  input_state(PIN_D3) ||  input_state(PIN_D2) ||  input_state(PIN_D1) ||  input_state(PIN_D0) ){
         switch (notalar){   //Gelen bacak �nceki belirledi�imiz bacak m� diye kontrol ediyoruz
         case 0:                     //E�er do�ruysa ye�il led 1sn, yanl��sa k�rm�z� led 1sn yan�yor
            if(input_state(PIN_C4)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 1:
            if(input_state(PIN_C3)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 2:
            if(input_state(PIN_C2)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 3:
            if(input_state(PIN_C1)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 4:
            if(input_state(PIN_C0)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 5:
            if(input_state(PIN_D7)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 6:
            if(input_state(PIN_D6)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 7:
            if(input_state(PIN_D5)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 8:
            if(input_state(PIN_D4)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 9:
            if(input_state(PIN_D3)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 10:
            if(input_state(PIN_D2)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 11:
            if(input_state(PIN_D1)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         case 12:
            if(input_state(PIN_D0)){
               output_high(PIN_E1);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E1);
               kontrol=0;
            }
            else{
               output_high(PIN_E0);
               delay_ms(beklemeSaniyesi*1000);
               output_low(PIN_E0);
            }
            break;
         }
         }
      }
   }
}
