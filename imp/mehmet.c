char k_havalimani[50],k_sehiri[50],biletname[50];
int k_sehir, khs, bilettipi;
int step_1(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-�anakkale \n| 2-�anl�urfa \n| 3-Malatya \n| 4-A�r� \n| 5-Trabzon \n");
    printf("--------------------------------------\n");
    printf("Kalk�� �ehrinizi Se�iniz: ");
    scanf("%d", &k_sehir);
    switch (k_sehir) {
           case 1:
                printf("1-�anakkale Havaliman� (CKZ)\n ");
                printf("\n�anakkale'de kalk�� yapmak istedi�iniz havaliman�n� giriniz: ");
                scanf("%d", &khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "CKZ");
                            strcpy(k_sehiri, "�anakkale");
                            return 1;
                       break;
                       default:
                               printf("Hatal� se�im yapt�n�z.");
                       break;
                }
           break;
           case 2:
                printf("1-�anl�urfa Gap Havaliman� (GNY)\n ");
                printf("\n�anl�urfa'da kalk�� yapmak istedi�iniz havaliman�n� se�iniz: ");
                scanf("%d", &khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "GNY");
                            strcpy(k_sehiri, "�anl�urfa");
                            return 1;
                       break;
                       default:
                               printf("Hatal� se�im yapt�n�z.");
                       break;
                }
           break;
           case 3:
                printf("1-Malatya Erha� Havaliman� (MLX)\n ");
                printf("\n Malatya'da kalk�� yapmak istedi�iniz havaliman�n� se�iniz");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "MLX");
                            strcpy(k_sehiri, "Malatya");                            
                            return 1;
                       break;
                       default:
                               printf("Hatal� se�im yapt�n�z.");
                       break;
                }
           break;           
           case 4:
                printf("1-A�r� Ahmed-i Hani Havaliman� (AJI)\n ");
                printf("\nA�r�'da kalk�� yapmak istedi�iniz havaliman�n� se�iniz: ");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "AJI");
                            strcpy(k_sehiri, "A�r�");                            
                            return 1;
                       break;
                       default:
                               printf("Hatal� se�im yapt�n�z.");
                       break;                      
                }
           break;                
           case 5:
                printf("1-Trabzon Uluslararas� Havaliman� (TZX)\n ");
                printf("\n Trabzon'da ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "TZX");
                            strcpy(k_sehiri, "Trabzon");                            
                            return 1;
                       break;
                       default:
                               printf("Hatal� se�im yapt�n�z.");
                       break;
                }
           break;
            default: 
            printf("Hatal� se�im yapt�n�z");
            Sleep(3000);
            exit(0);
            break;
           }
}

int step_5(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-Business \n| 2-Ekonomi\n");
    printf("--------------------------------------\n");
    printf("Bilet s�n�f�n�z� se�in: ");
    scanf("%d",&bilettipi);
    switch(bilettipi){
        case 1:
             strcpy(biletname, "BUS");
        break;
        case 2:
             strcpy(biletname, "ECO");
        break;
        default:
           EkranTemizle();
           printf("--------------- FLYIGU ---------------\n|\n| Ge�ersiz se�im. L�tfen size uygun bilet s�n�f�n�za ait rakam� girin.\n");
           printf("|\n--------------------------------------\n");
           Sleep(2000);
        break;
    }
}
