int secim;
char gidisTarihi[20],donusTarihi[20];
int step_4(){
    EkranTemizle();
    printf("Lütfen istediðiniz uçuþ tipini seçin:\n");
    printf("1 - Gidiþ-Dönüþ\n");
    printf("2 - Tek Yön\n");
    scanf("%d", &secim);
    EkranTemizle();
    if (secim == 1) {
        printf("Gidiþ tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", gidisTarihi);
        printf("Dönüþ tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", donusTarihi);
    } else if (secim == 2) {
        printf("Gidiþ tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", gidisTarihi);
    } else {
           EkranTemizle();
           printf("--------------- FLYIGU ---------------\n|\n| Geçersiz seçim. Lütfen size uygun uçuþ tipine ait rakamý girin.\n");
           printf("|\n--------------------------------------\n");
           Sleep(2000);
           return 0;
    }    
}

int step_7(isim, soyisim, kullaniciadi){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\nKiþisel bilgiler \n\n");
    printf("Ýsminiz: %s\nSoyadýnýz: %s\nKullanýcý Adýnýz: %s\n", isim, soyisim, kullaniciadi);

    printf("\n1. Çýkýþ yap\n\nLütfen seçiminizi yapýn: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("\nÇýkýþ yapýlýyor...\n");
            return 0;
            break;
        default:
                printf("\nGeçersiz seçim yaptýnýz.\n");
            break;
    }

    
}
