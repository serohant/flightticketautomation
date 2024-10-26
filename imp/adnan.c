int yetsayi,cocuksayi,bebeksayi,biletno;

int step_3(){
    EkranTemizle();
    int secim;
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-Tek Ki�ilik \n| 2-Birden Fazla \n");
    printf("--------------------------------------\n");
    scanf("%d",&secim);
    if(secim==1){
        yetsayi=1;
        
    }else if(secim==2){
        EkranTemizle();          
        printf("Yeti�kin say�s� (0-9):");
        scanf("%d",&yetsayi);
        if(yetsayi<=9&&yetsayi>0){
                                  
        }else{
            EkranTemizle();              
            printf("--------------- FLYIGU ---------------\n|\n| L�tfen yeti�kin say�s�n� minimum 1 maksimum 9 olacak �ekilde girin.\n");
            printf("|\n--------------------------------------\n");
            Sleep(1000);
            printf("Yeti�kin say�s� (0-9):");
            scanf("%d",&yetsayi);
            if(yetsayi<=9&&yetsayi>0){
            }else{
                EkranTemizle();
                printf("--------------- FLYIGU ---------------\n|\n| L�tfen yeti�kin say�s�n� minimum 1 maksimum 9 olacak �ekilde girin.\n");
                printf("|\n--------------------------------------\n");
                Sleep(2000);
                return 0;                                      
            }
        }
        printf("�ocuk say�s� (0-9):");
        scanf("%d",&cocuksayi);
        if(cocuksayi<=9&&cocuksayi>=0){
        }else{
            EkranTemizle();
            printf("--------------- FLYIGU ---------------\n|\n| L�tfen �ocuk say�s�n� minimum 0 maksimum 9 olacak �ekilde girin.\n");
            printf("|\n--------------------------------------\n");
            Sleep(1000);
            printf("�ocuk say�s� (0-9):");
            scanf("%d",&cocuksayi);
            if(cocuksayi<=9&&cocuksayi>=0){
            }else{
                EkranTemizle();
                printf("--------------- FLYIGU ---------------\n|\n| L�tfen �ocuk say�s�n� minimum 0 maksimum 9 olacak �ekilde girin.\n");
                printf("|\n--------------------------------------\n");
                Sleep(2000);
                return 0;                                      
            }
        }
        
        printf("Bebek say�s� (0-9):");
        scanf("%d",&bebeksayi);
        if(bebeksayi<=9&&bebeksayi>=0){
        }else{
            EkranTemizle();
            printf("--------------- FLYIGU ---------------\n|\n| L�tfen bebek say�s�n� minimum 0 maksimum 9 olacak �ekilde girin.\n");
            printf("|\n--------------------------------------\n");
            Sleep(1000);
            printf("Bebek say�s� (0-9):");
            scanf("%d",&bebeksayi);
            if(bebeksayi<=9&&bebeksayi>=0){
            }else{
                EkranTemizle();
                printf("--------------- FLYIGU ---------------\n|\n| L�tfen bebek say�s�n� minimum 0 maksimum 9 olacak �ekilde girin.\n");
                printf("|\n--------------------------------------\n");
                Sleep(2000);
                return 0;                                      
        }}
        
    }

}

int step_6(char* k_sehiri, char* k_havalimani, char* v_sehiri, char* v_havalimani,
           char* gidisTarihi, char* flytime, char* donusTarihi,
           char* biletname, int flightPrice) {
    EkranTemizle();
    int secim;
    srand(time(NULL));
    biletno = rand() % (999999 - 100000 + 1) + 100000;

    if (donusTarihi == NULL || donusTarihi[0] == '\0') {
       printf("| %-17s | %-15s | %-5s | %-10s | %-5s | %-5s\n", "Kalk��", "Var��", "Kalk�� Tarihi","Aktarma", "T�r", "Fiyat");
       printf("=============================================================================================================\n");
       printf("| %s (%s) | %s (%s) | %s %s | Aktarmas�z | %s | %d TL |\n",k_sehiri, k_havalimani,v_sehiri, v_havalimani, gidisTarihi,flytime,biletname,flightPrice);
       printf("|------------------------------------------------------------------------------------------------------------\n");     
    }else{
       printf("| %-17s | %-15s | %-5s | %-5s | %-10s | %-5s | %-5s\n", "Kalk��", "Var��", "Kalk�� Tarihi", "Var�� Tarihi","Aktarma", "T�r", "Fiyat");
       printf("=============================================================================================================\n");
       printf("| %s (%s) | %s (%s) | %s %s | %s | Aktarmas�z | %s | %d TL |\n",k_sehiri, k_havalimani,v_sehiri, v_havalimani, gidisTarihi,flytime, donusTarihi,biletname,flightPrice);
       printf("|------------------------------------------------------------------------------------------------------------\n");     
    }
    printf("\n1-Onay \n2-Reddet\nSe�iminiz: ");
    scanf("%d",&secim);
    EkranTemizle();
    if(secim==1){       
        int ticket = BiletOnayla(k_havalimani,v_havalimani,gidisTarihi,donusTarihi,biletno,flytime,flightPrice, biletname);
        if(ticket){
                   printf("��leminiz onayland�,l�tfen bekleyiniz\n\n");
                   printf("Bilet numaran�z: %d \n \n",biletno);
        }
        }else if(secim==2){
             printf("��leminiz onaylamad�,l�tfen tekrar deneyiniz");
             return 0;
       }
}

//Giving some delay
void delay( unsigned int value)
{
    unsigned int count1 =0;
    unsigned int count2 = 0;

    for(count1 = 0; count1 < value ; count1++ )
    {
        for(count2 = 0; count2 < count1 ; count2++ )
        {

        }
    }
}

int loader(){
// string to display Rocket
const char rocket[] =
"                                                          ^ \n\
                                                         /^\\\n\
                                                         |-|\n\
                                                         | |\n\
                                                   /-----|�|-----\\\n\
                                                  /------|G|------\\\n\
                                                 /-------|�|-------\\\n\
                                                         | |\n\
                                                        /| |\\\n\
                                                       / | | \\\n\
                                                      |  | |  |\n\
                                                       `-\"\"\"-`\n\
";


    int jumpControlAtBottom = 0;
    const int someDelay = 13000;
    int shifControl = 0;

    //jump to bottom of console

    for (jumpControlAtBottom = 0; jumpControlAtBottom < 30; ++jumpControlAtBottom)
    {
        printf("\n");
    }

    //Print rocket
    fputs(rocket,stdout);

    for (shifControl = 0; shifControl < 30; ++shifControl)
    {
        // Rocket move on the basis of delay
        delay(someDelay);
        
        // move rocket a line upward
        printf("\n");
    }
    return 0;
}
