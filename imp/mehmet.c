char k_havalimani[50],k_sehiri[50],biletname[50];
int k_sehir, khs, bilettipi;
int step_1(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-Çanakkale \n| 2-Þanlýurfa \n| 3-Malatya \n| 4-Aðrý \n| 5-Trabzon \n");
    printf("--------------------------------------\n");
    printf("Kalkýþ Þehrinizi Seçiniz: ");
    scanf("%d", &k_sehir);
    switch (k_sehir) {
           case 1:
                printf("1-Çanakkale Havalimaný (CKZ)\n ");
                printf("\nÇanakkale'de kalkýþ yapmak istediðiniz havalimanýný giriniz: ");
                scanf("%d", &khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "CKZ");
                            strcpy(k_sehiri, "Çanakkale");
                            return 1;
                       break;
                       default:
                               printf("Hatalý seçim yaptýnýz.");
                       break;
                }
           break;
           case 2:
                printf("1-Þanlýurfa Gap Havalimaný (GNY)\n ");
                printf("\nÞanlýurfa'da kalkýþ yapmak istediðiniz havalimanýný seçiniz: ");
                scanf("%d", &khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "GNY");
                            strcpy(k_sehiri, "Þanlýurfa");
                            return 1;
                       break;
                       default:
                               printf("Hatalý seçim yaptýnýz.");
                       break;
                }
           break;
           case 3:
                printf("1-Malatya Erhaç Havalimaný (MLX)\n ");
                printf("\n Malatya'da kalkýþ yapmak istediðiniz havalimanýný seçiniz");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "MLX");
                            strcpy(k_sehiri, "Malatya");                            
                            return 1;
                       break;
                       default:
                               printf("Hatalý seçim yaptýnýz.");
                       break;
                }
           break;           
           case 4:
                printf("1-Aðrý Ahmed-i Hani Havalimaný (AJI)\n ");
                printf("\nAðrý'da kalkýþ yapmak istediðiniz havalimanýný seçiniz: ");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "AJI");
                            strcpy(k_sehiri, "Aðrý");                            
                            return 1;
                       break;
                       default:
                               printf("Hatalý seçim yaptýnýz.");
                       break;                      
                }
           break;                
           case 5:
                printf("1-Trabzon Uluslararasý Havalimaný (TZX)\n ");
                printf("\n Trabzon'da iniþ yapmak istediðiniz havalimanýný seçiniz: ");
                scanf("%d", & khs);
                switch (khs) {
                       case 1:
                            strcpy(k_havalimani, "TZX");
                            strcpy(k_sehiri, "Trabzon");                            
                            return 1;
                       break;
                       default:
                               printf("Hatalý seçim yaptýnýz.");
                       break;
                }
           break;
            default: 
            printf("Hatalý seçim yaptýnýz");
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
    printf("Bilet sýnýfýnýzý seçin: ");
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
           printf("--------------- FLYIGU ---------------\n|\n| Geçersiz seçim. Lütfen size uygun bilet sýnýfýnýza ait rakamý girin.\n");
           printf("|\n--------------------------------------\n");
           Sleep(2000);
        break;
    }
}
