#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <windows.h>
#include <time.h>

#include "./imp/serohan.c"
#include "./imp/mehmet.c"
#include "./imp/beyza.c"
#include "./imp/adnan.c"
#include "./imp/baran.c"


int main()
{
    setlocale(LC_ALL, "Turkish");
    loader();
    int giris_basarili = Karsilama();
    if (giris_basarili) {
       int kchoice = girissonrasi(isim);
       switch(choice){
           case 1:
                if(step_1()){  
                    if(step_2()){
                        if(step_3()){
                            if(step_4()){
                                if(step_5()){
                                    if(get_flys(k_sehiri,k_havalimani,v_sehiri,v_havalimani,gidisTarihi,donusTarihi,biletname)){

                                             char step6 = step_6(k_sehiri, k_havalimani,v_sehiri, v_havalimani, gidisTarihi, biletler[flightselect-1].flytime, donusTarihi, biletname,biletler[flightselect-1].flightPrice);
                                             if(step6){
                                                       Sleep(10000);
                                                       }
                                    }
                                }
                            }
                        }
                    }
                }
           break;
           case 2:
                EkranTemizle();
                if(searchTicket()){
                     sleep(10000);
                }
           break;
           case 9:
                EkranTemizle();
                if(step_7(isim,soyisim,kullaniciadi)){
                }
       }
    }
  return 0;
}
