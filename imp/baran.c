int secim;
char gidisTarihi[20],donusTarihi[20];
int step_4(){
    EkranTemizle();
    printf("L�tfen istedi�iniz u�u� tipini se�in:\n");
    printf("1 - Gidi�-D�n��\n");
    printf("2 - Tek Y�n\n");
    scanf("%d", &secim);
    EkranTemizle();
    if (secim == 1) {
        printf("Gidi� tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", gidisTarihi);
        printf("D�n�� tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", donusTarihi);
    } else if (secim == 2) {
        printf("Gidi� tarihini giriniz (GG-AA-YYYY): ");
        scanf("%s", gidisTarihi);
    } else {
           EkranTemizle();
           printf("--------------- FLYIGU ---------------\n|\n| Ge�ersiz se�im. L�tfen size uygun u�u� tipine ait rakam� girin.\n");
           printf("|\n--------------------------------------\n");
           Sleep(2000);
           return 0;
    }    
}

int step_7(isim, soyisim, kullaniciadi){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\nKi�isel bilgiler \n\n");
    printf("�sminiz: %s\nSoyad�n�z: %s\nKullan�c� Ad�n�z: %s\n", isim, soyisim, kullaniciadi);

    printf("\n1. ��k�� yap\n\nL�tfen se�iminizi yap�n: ");
    scanf("%d", &secim);

    switch (secim) {
        case 1:
            printf("\n��k�� yap�l�yor...\n");
            return 0;
            break;
        default:
                printf("\nGe�ersiz se�im yapt�n�z.\n");
            break;
    }

    
}
