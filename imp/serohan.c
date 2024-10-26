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
    printf("FLYIGU uygulamas�n� kulland���n�z i�in te�ekk�rler.\n\n");
    printf("Uygulamada eme�i ge�enler; \n\n Serohan Tarhan (230111133) \nBeyza Tun� (230111009) \nAhmet Yasin Alk�� (230111981) \nAdnan Kileci (230111969) \nMehmet S���t (230111081)");
}


int Karsilama(){
    EkranTemizle();    
    int karsilamasecim;
    printf("--------------- FLYIGU ---------------\n");
    printf("| 	     Ho�geldiniz\n|\n");
    printf("| U�u� otomasyonuna ho�geldiniz i�leminize devam etmek i�in �nce giri� yapman�z gerekmektedir.\n");
    printf("| Hesab�n�z yoksa h�zl�ca hesap olu�turabilirsiniz.\n|\n");
    printf("| 1- Giri� Yap \n| 2- Kay�t Ol \n|\n| 0- Hakk�m�zda\n| 9- ��k�� Yap\n");
    printf("--------------------------------------\n");
    printf("Yapmak istedi�iniz se�imi girin: ");
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
             printf("Hatal� se�im yapt�n�z.");
             break;
                           
    }
}
int regisser(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n|\n| Kay�t Ol\n|\n");
    printf("| �sim: ");
    scanf("%s", isim);
    printf("| Soyisim: ");
    scanf("%s", soyisim);
    printf("| Kullan�c� ad�: ");
    scanf("%s", kullaniciadi);
    printf("| �ifre: ");
    scanf("%s", sifre); 
    printf("|\n--------------------------------------\n");
    FILE *dosya;
    dosya = fopen("data/kullanicilar.txt", "a");
    fprintf(dosya, "%s,%s,%s,%s\n", kullaniciadi, sifre, isim, soyisim);
    fclose(dosya);
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n|\n| Kay�t Olma i�lemi Ba�ar�l�! Y�nlendiriliyorsunuz...\n");
    printf("|\n--------------------------------------\n");
    Sleep(2000);
    EkranTemizle();
    Karsilama();    
}


int login() {
  EkranTemizle();
  printf("--------------- FLYIGU ---------------\n|\n| Giri� Yap\n|\n");
  printf("| Kullan�c� ad�: ");
  scanf("%s", kullaniciadi);
  printf("| �ifre: ");
  scanf("%s", sifre);
  printf("|\n--------------------------------------\n");
   
  FILE *dosya;
  dosya = fopen("data/kullanicilar.txt", "r");
  if (dosya == NULL) {
    printf("Dosya bulunamad�.\n");
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
  printf("--------------- FLYIGU ---------------\n|\n| Kullan�c� ad� veya �ifre hatal�. L�tfen tekrar deneyin.\n");
  printf("|\n--------------------------------------\n");
  Sleep(3000);
  login();
}

int girissonrasi(isim){
    EkranTemizle();
    int schoice;
    printf("--------------- FLYIGU ---------------\n");
    printf("| Ho�geldin, %s \n|\n", isim);
    printf("| Yapmak istedi�iniz i�lemi se�in.\n|\n");
    printf("| 1- Bilet Al \n| 2- Bilet Sorgula \n|\n| 9- Hesab�m \n| 0- ��k�� Yap\n");
    printf("--------------------------------------\n");
    printf("Yapmak istedi�iniz se�imi girin: ");
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
       printf("| %s �ehrinden %s �ehrine %s tarihinde kalkacak olan %d adet u�u� bulundu\n", k_sehiri, v_sehiri, gidisTarihi, flycount);
       printf("|------------------------------------------------------------------------------------------------\n");
       printf("| # | %-20s | %-20s | %-5s | %-10s | %-5s | %-5s\n", "Kalk��", "Var��", "Kalk�� Tarihi", "Aktarma", "T�r", "Fiyat");
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
           
           printf("| %d | %s (%s)%-5s | %s(%s)%-5s | %s %s | Aktarmas�z | %-5s | %d TL\n", i+1 ,k_sehiri, k_havalimani, " ",v_sehiri, v_havalimani," ", gidisTarihi, flytime, biletname, flightPrice);
           printf("|------------------------------------------------------------------------------------------------\n");
       }
    } else {
               printf("|------------------------------------------------------------------------------------------------------------\n");
           printf("| %s �ehrinden %s �ehrine %s tarihinde kalkacak olan %d adet u�u� bulundu\n", k_sehiri, v_sehiri, gidisTarihi, flycount);
               printf("|------------------------------------------------------------------------------------------------------------\n");
           printf("| # | %-20s | %-20s | %-5s | %-5s | %-10s | %-5s | %-5s\n", "Kalk��", "Var��", "Kalk�� Tarihi", "Var�� Tarihi","Aktarma", "T�r", "Fiyat");
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
               printf("| %d | %s (%s)%-5s | %s(%s)%-5s | %s %s | %s | Aktarmas�z | %-5s | %d TL\n", i+1 ,k_sehiri, k_havalimani, " ",v_sehiri, v_havalimani," ", gidisTarihi, flytime, donusTarihi, biletname, flightPrice);
               printf("|------------------------------------------------------------------------------------------------------------\n");           
           }
    }
           printf("L�tfen se�iminizi yap�n�z (1-%d): ", flycount);
           scanf("%d", &flightselect);
           
           if(flightselect >= 1 && flightselect <= flycount){
               return 1;
           }else{
                 EkranTemizle();
                     printf("--------------- FLYIGU ---------------\n|\n| Hatal� se�im yapt�n�z!\n");
                     printf("|\n--------------------------------------\n");      
           }
}


int BiletOnayla(char* k_havalimani, char* v_havalimani,
                       char* gidisTarihi, char* donusTarihi,
                       int biletno, char* flytime, int flightPrice,char* biletname) {
    // Dosyay� a� ve bilgileri yaz
    FILE* file = fopen("data/ticket.txt", "a");
    if (file == NULL) {
        perror("Dosya acilirken hata olustu");
        exit(EXIT_FAILURE);
    }

fprintf(file, "%d,%s,%s,%s", biletno, k_havalimani, v_havalimani, gidisTarihi, biletname);

    // E�er donusTarihi varsa, dosyaya yaz
    if (donusTarihi[0] != '\0') {
        fprintf(file, ",%s", donusTarihi);
    }else{
          fprintf(file, ",-");
          }

    // Geri kalan bilgileri dosyaya yaz
    fprintf(file, ",%s,%d\n", flytime, flightPrice);

    // Dosyay� kapat
    fclose(file);
    return 1;
}


int searchTicket() {
     EkranTemizle();
     int sorgulamaBiletno;
     printf("--------------- FLYIGU ---------------\n|\n| Bilet Sorgulamak i�in 6 haneli bilet numaran�z� girmeniz gerekmektedir.\n");
     printf("| Sorgulanacak Bilet Numaran�z� Giriniz: ");
     scanf("%d", &sorgulamaBiletno);
     printf("|\n--------------------------------------\n");
    // Dosyay� a� ve bilgileri oku
    FILE* file = fopen("data/ticket.txt", "r");
    if (file == NULL) {
        perror("Dosya acilirken hata olustu");
        exit(EXIT_FAILURE);
    }

    int found = 0;
    char line[256];

  // Dosyadaki her sat�r� kontrol et
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
            printf("--------------- FLYIGU ---------------\n|\n| Bilet Bulundu!\n| Sonu�lar getiriliyor l�tfen bekleyiniz...\n");
            printf("|\n--------------------------------------\n");
            Sleep(2000);
            EkranTemizle();
            printf("---------------------- Bilet Bilgileri -----------------------\n");     
            printf("| %-5s | %-5s | %-5s | %-5s | %-5s | %-5s |\n", "No", "Kalk��", "Var��", "Kalk�� Tarihi", "Var�� Tarihi", "Fiyat");
            printf("==============================================================\n");
            printf("| %d | %s | %s | %s %s | %s | %s TL |", fileBiletno,kh,vh,gt,gs,vt,fp);
            printf("\n--------------------------------------------------------------\n");     
            return 1;
        }
    }

    if (!found) {
       EkranTemizle();
       printf("--------------- FLYIGU ---------------\n|\n| Bilet numaran�z� hatal� girdiniz.\n");
       printf("|\n--------------------------------------\n");
       Sleep(1000);
       return 0;
    }

    fclose(file);
}
