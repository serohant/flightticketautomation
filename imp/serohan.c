char kullaniciadi[256],sifre[256],isim[256],soyisim[256];
int choice,flightselect;

void trim(char *str) {
    while (isspace((unsigned char)*str)) {
        str++;
    }
    char *end = str + strlen(str) - 1;
    while (end > str && isspace((unsigned char)*end)) {
        end--;
    }

    *(end + 1) = '\0';
}

int EkranTemizle(){
    system("cls");
    printf("\e[1;1H\e[2J");
}


int hakkimizda(){
    EkranTemizle();
    printf(".: HAKKIMIZDA :.\n");
    printf("FLYIGU uygulamasýný kullandýðýnýz için teþekkürler.\n\n");
    printf("Uygulamada emeði geçenler; \n\n Serohan Tarhan (230111133) \nBeyza Tunç (230111009) \nAhmet Yasin Alkýþ (230111981) \nAdnan Kileci (230111969) \nMehmet Söðüt (230111081)");
}


int Karsilama(){
    EkranTemizle();    
    int karsilamasecim;
    printf("--------------- FLYIGU ---------------\n");
    printf("| 	     Hoþgeldiniz\n|\n");
    printf("| Uçuþ otomasyonuna hoþgeldiniz iþleminize devam etmek için önce giriþ yapmanýz gerekmektedir.\n");
    printf("| Hesabýnýz yoksa hýzlýca hesap oluþturabilirsiniz.\n|\n");
    printf("| 1- Giriþ Yap \n| 2- Kayýt Ol \n|\n| 0- Hakkýmýzda\n| 9- Çýkýþ Yap\n");
    printf("--------------------------------------\n");
    printf("Yapmak istediðiniz seçimi girin: ");
    scanf("%d",&karsilamasecim);
    switch(karsilamasecim){
        case 0:
             EkranTemizle();
             hakkimizda();
             Sleep(5000);
             return 0;
             break;
        case 1:
             login();
             break;
        case 2:
             regisser();
             break;
        case 9:
             return 0;
             break;             
        default:
             printf("Hatalý seçim yaptýnýz.");
             break;
                           
    }
}
int regisser(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n|\n| Kayýt Ol\n|\n");
    printf("| Ýsim: ");
    scanf("%s", isim);
    printf("| Soyisim: ");
    scanf("%s", soyisim);
    printf("| Kullanýcý adý: ");
    scanf("%s", kullaniciadi);
    printf("| Þifre: ");
    scanf("%s", sifre); 
    printf("|\n--------------------------------------\n");
    FILE *dosya;
    dosya = fopen("data/kullanicilar.txt", "a");
    fprintf(dosya, "%s,%s,%s,%s\n", kullaniciadi, sifre, isim, soyisim);
    fclose(dosya);
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n|\n| Kayýt Olma iþlemi Baþarýlý! Yönlendiriliyorsunuz...\n");
    printf("|\n--------------------------------------\n");
    Sleep(2000);
    EkranTemizle();
    Karsilama();    
}


int login() {
  EkranTemizle();
  printf("--------------- FLYIGU ---------------\n|\n| Giriþ Yap\n|\n");
  printf("| Kullanýcý adý: ");
  scanf("%s", kullaniciadi);
  printf("| Þifre: ");
  scanf("%s", sifre);
  printf("|\n--------------------------------------\n");
   
  FILE *dosya;
  dosya = fopen("data/kullanicilar.txt", "r");
  if (dosya == NULL) {
    printf("Dosya bulunamadý.\n");
    return 0;
  }

  char satir[256];
  while (fgets(satir, sizeof(satir), dosya) != NULL) {
     char *token = strtok(satir, ",");
     char *kullanici_adi_dosya = token;
     token = strtok(NULL, ",");
     char *sifre_dosya = token;
     token = strtok(NULL, ",");
     char *isim_dosya = token;
     token = strtok(NULL, ",");
     char *soyisim_dosya = token;
    if (strcmp(kullaniciadi, kullanici_adi_dosya) == 0) {
      if (strcmp(sifre, sifre_dosya) == 0) {
        EkranTemizle();
        strcpy(isim, isim_dosya);
        strcpy(soyisim, soyisim_dosya);
        trim(isim);
        trim(soyisim);        
        return 1;
      }
    }
  }

  fclose(dosya);
  EkranTemizle();
  printf("--------------- FLYIGU ---------------\n|\n| Kullanýcý adý veya Þifre hatalý. Lütfen tekrar deneyin.\n");
  printf("|\n--------------------------------------\n");
  Sleep(3000);
  login();
}

int girissonrasi(isim){
    EkranTemizle();
    int schoice;
    printf("--------------- FLYIGU ---------------\n");
    printf("| Hoþgeldin, %s \n|\n", isim);
    printf("| Yapmak istediðiniz iþlemi seçin.\n|\n");
    printf("| 1- Bilet Al \n| 2- Bilet Sorgula \n|\n| 9- Hesabým \n| 0- Çýkýþ Yap\n");
    printf("--------------------------------------\n");
    printf("Yapmak istediðiniz seçimi girin: ");
    scanf("%d", &schoice);
    switch(schoice){
       case 0:
            return 0;
       break;
       default:
           choice = schoice;
       break;
    }
    
}

struct Bilet {
    char k_sehiri[50];
    char k_havalimani[50];
    char v_sehiri[50];
    char v_havalimani[50];
    char flytime[50];
    char gidisTarihi[50];
    char donusTarihi[50];    
    int flightPrice;
    char biletname[50];
};
struct Bilet biletler[5];

int get_flys(char k_sehiri[], char k_havalimani[], char v_sehiri[], char v_havalimani[], char gidisTarihi[], char donusTarihi[], char biletname[]){
    EkranTemizle();    
    int flyhour, i, flightPrice, flycount;
    char flytime[50];
    
    srand(time(NULL));
    flycount = rand() % 3 + 3;
    if (strcmp(donusTarihi, " ") == 0 || strcmp(donusTarihi, "\0") == 0) {
       printf("|------------------------------------------------------------------------------------------------\n");
       printf("| %s þehrinden %s þehrine %s tarihinde kalkacak olan %d adet uçuþ bulundu\n", k_sehiri, v_sehiri, gidisTarihi, flycount);
       printf("|------------------------------------------------------------------------------------------------\n");
       printf("| # | %-20s | %-20s | %-5s | %-10s | %-5s | %-5s\n", "Kalkýþ", "Varýþ", "Kalkýþ Tarihi", "Aktarma", "Tür", "Fiyat");
       printf("=================================================================================================\n");  
       for (i = 0; i < flycount; i++) {
           flyhour = rand() % 5 + 12;
           sprintf(flytime, "%d:00", flyhour);
           
           flightPrice = rand() % (3000 - 1500 + 1) + 1500;
           if(strcmp(biletname, "BUS") == 0){                                        
               flightPrice = flightPrice * 1.2;
           }
           
           strcpy(biletler[i].k_sehiri, k_sehiri);
           strcpy(biletler[i].k_havalimani, k_havalimani);
           strcpy(biletler[i].v_sehiri, v_sehiri);
           strcpy(biletler[i].gidisTarihi, gidisTarihi);
           strcpy(biletler[i].v_havalimani, v_havalimani);
           strcpy(biletler[i].flytime, flytime);
           biletler[i].flightPrice = flightPrice;
           
           printf("| %d | %s (%s)%-5s | %s(%s)%-5s | %s %s | Aktarmasýz | %-5s | %d TL\n", i+1 ,k_sehiri, k_havalimani, " ",v_sehiri, v_havalimani," ", gidisTarihi, flytime, biletname, flightPrice);
           printf("|------------------------------------------------------------------------------------------------\n");
       }
    } else {
               printf("|------------------------------------------------------------------------------------------------------------\n");
           printf("| %s þehrinden %s þehrine %s tarihinde kalkacak olan %d adet uçuþ bulundu\n", k_sehiri, v_sehiri, gidisTarihi, flycount);
               printf("|------------------------------------------------------------------------------------------------------------\n");
           printf("| # | %-20s | %-20s | %-5s | %-5s | %-10s | %-5s | %-5s\n", "Kalkýþ", "Varýþ", "Kalkýþ Tarihi", "Varýþ Tarihi","Aktarma", "Tür", "Fiyat");
           printf("=============================================================================================================\n");
           for (i = 0; i < flycount; i++) {
               flyhour = rand() % 5 + 12;
               sprintf(flytime, "%d:00", flyhour);
               flightPrice = rand() % (666666 - 111111 + 1) + 1500;
               if(strcmp(biletname, "BUS") == 0){                                        
                   flightPrice = flightPrice * 1.2;
               }
               strcpy(biletler[i].k_sehiri, k_sehiri);
               strcpy(biletler[i].k_havalimani, k_havalimani);
               strcpy(biletler[i].v_sehiri, v_sehiri);
               strcpy(biletler[i].gidisTarihi, gidisTarihi);
               strcpy(biletler[i].donusTarihi, donusTarihi);               
               strcpy(biletler[i].v_havalimani, v_havalimani);
               strcpy(biletler[i].flytime, flytime);
               biletler[i].flightPrice = flightPrice;
               printf("| %d | %s (%s)%-5s | %s(%s)%-5s | %s %s | %s | Aktarmasýz | %-5s | %d TL\n", i+1 ,k_sehiri, k_havalimani, " ",v_sehiri, v_havalimani," ", gidisTarihi, flytime, donusTarihi, biletname, flightPrice);
               printf("|------------------------------------------------------------------------------------------------------------\n");           
           }
    }
           printf("Lütfen seçiminizi yapýnýz (1-%d): ", flycount);
           scanf("%d", &flightselect);
           
           if(flightselect >= 1 && flightselect <= flycount){
               return 1;
           }else{
                 EkranTemizle();
                     printf("--------------- FLYIGU ---------------\n|\n| Hatalý seçim yaptýnýz!\n");
                     printf("|\n--------------------------------------\n");      
           }
}


int BiletOnayla(char* k_havalimani, char* v_havalimani,
                       char* gidisTarihi, char* donusTarihi,
                       int biletno, char* flytime, int flightPrice,char* biletname) {
    // Dosyayï¿½ aï¿½ ve bilgileri yaz
    FILE* file = fopen("data/ticket.txt", "a");
    if (file == NULL) {
        perror("Dosya acilirken hata olustu");
        exit(EXIT_FAILURE);
    }

fprintf(file, "%d,%s,%s,%s", biletno, k_havalimani, v_havalimani, gidisTarihi, biletname);

    // Eï¿½er donusTarihi varsa, dosyaya yaz
    if (donusTarihi[0] != '\0') {
        fprintf(file, ",%s", donusTarihi);
    }else{
          fprintf(file, ",-");
          }

    // Geri kalan bilgileri dosyaya yaz
    fprintf(file, ",%s,%d\n", flytime, flightPrice);

    // Dosyayï¿½ kapat
    fclose(file);
    return 1;
}


int searchTicket() {
     EkranTemizle();
     int sorgulamaBiletno;
     printf("--------------- FLYIGU ---------------\n|\n| Bilet Sorgulamak için 6 haneli bilet numaranýzý girmeniz gerekmektedir.\n");
     printf("| Sorgulanacak Bilet Numaranýzý Giriniz: ");
     scanf("%d", &sorgulamaBiletno);
     printf("|\n--------------------------------------\n");
    // Dosyayï¿½ aï¿½ ve bilgileri oku
    FILE* file = fopen("data/ticket.txt", "r");
    if (file == NULL) {
        perror("Dosya acilirken hata olustu");
        exit(EXIT_FAILURE);
    }

    int found = 0;
    char line[256];

  // Dosyadaki her satï¿½rï¿½ kontrol et
    while (fgets(line, sizeof(line), file) != NULL) {
        int fileBiletno;
        sscanf(line, "%d,", &fileBiletno);

        if (fileBiletno == sorgulamaBiletno) {
            found = 1;
            sleep(1000);
            EkranTemizle();
            char* kh = strtok(line + 6, ",");
            char* vh = strtok(NULL, ",");
            char* gt = strtok(NULL, ",");
            char* vt = strtok(NULL, ",");
            char* gs = strtok(NULL, ",");
            char* fp = strtok(NULL, ",");
            trim(fp);
            printf("--------------- FLYIGU ---------------\n|\n| Bilet Bulundu!\n| Sonuçlar getiriliyor lütfen bekleyiniz...\n");
            printf("|\n--------------------------------------\n");
            Sleep(2000);
            EkranTemizle();
            printf("---------------------- Bilet Bilgileri -----------------------\n");     
            printf("| %-5s | %-5s | %-5s | %-5s | %-5s | %-5s |\n", "No", "Kalkýþ", "Varýþ", "Kalkýþ Tarihi", "Varýþ Tarihi", "Fiyat");
            printf("==============================================================\n");
            printf("| %d | %s | %s | %s %s | %s | %s TL |", fileBiletno,kh,vh,gt,gs,vt,fp);
            printf("\n--------------------------------------------------------------\n");     
            return 1;
        }
    }

    if (!found) {
       EkranTemizle();
       printf("--------------- FLYIGU ---------------\n|\n| Bilet numaranýzý hatalý girdiniz.\n");
       printf("|\n--------------------------------------\n");
       Sleep(1000);
       return 0;
    }

    fclose(file);
}
