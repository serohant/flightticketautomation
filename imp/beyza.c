char v_havalimani[50],v_sehiri[50];
int v_sehir,vhs;
int step_2(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-Ýstanbul \n| 2-Ýzmir \n| 3-Muðla \n| 4-Antalya \n| 5-Sinop \n" );
    printf("--------------------------------------\n");
   printf("\nVarýþ þehri seçiniz: ");
   scanf("%d", &v_sehir);
   switch(v_sehir){
    case 1 :
       printf("1-Sabiha Gökçen Havalimaný (SAW)\n2-Ýstanbul Havalimaný (IST)\n");
       printf("\nistanbul'da iniþ yapmak istediðiniz havalimanýný seçiniz: ");
       scanf("%d", &vhs);
       strcpy(v_sehiri, "Ýstanbul");
       switch(vhs){
           case 1:
                strcpy(v_havalimani, "SAW");
                return 1;
           break;
           case 2:
                strcpy(v_havalimani, "IST");
                return 1;
           break;
           default: 
                printf("Hatalý seçim yaptýnýz.");
           break;
       }
    break;
    case 2 :
        printf("1-Adnan Menderes Havalimaný (ADB)\n " );
        printf("\nÝzmir'de iniþ yapmak istediðiniz havalimanýný seçiniz: ");
        scanf("%d", &vhs);
       strcpy(v_sehiri, "Ýzmir");        
        switch(vhs){
            case 1:
                strcpy(v_havalimani, "ADB");
                   return 1;
            break;
            default: 
                printf("Hatalý seçim yaptýnýz.");
            break;
       }
      printf("%s",v_havalimani);
    break;
    case 3 :
        printf("1-Milas/Bodrum Havalimaný (BJV)\n2-Dalaman Havalimaný (DLM) \n " );
        printf("\n Muðla'da iniþ yapmak istediðiniz havalimanýný seçiniz: ");
        scanf("%d", &vhs);
       strcpy(v_sehiri, "Muðla");
        switch(vhs){
            case 1:
                 strcpy(v_havalimani, "BJV"); 
                    return 1;
            break;
            case 2:
                 strcpy(v_havalimani, "DLM"); 
                    return 1;
            break;
            default: 
                printf("Hatalý seçim yaptýnýz.");
            break;
        }
        printf("%s",v_havalimani);
    break;
    case 4 :
        printf("1-Gazipaþa Havalimaný (GZP)\n2-Antalya Havalimaný (AYT)\n" );
        printf("\n Antalya'da iniþ yapmak istediðiniz havalimanýný seçiniz: ");
        scanf("%d", &vhs);
       strcpy(v_sehiri, "Antalya");        
        switch(vhs){
          case 1:
               strcpy(v_havalimani, "GZP");
                  return 1;
          break;
          case 2:
               strcpy(v_havalimani, "AYT");
                  return 1;
          break;
          default:
               printf("Hatalý seçim yaptýnýz");
          break;
        }
        printf("%s",v_havalimani);
    break;
    case 5 :
       printf("1-Sinop Havalimaný (NOP)\n ");
       printf("\n Sinop'da iniþ yapmak istediðiniz havalimanýný seçiniz: ");
       scanf("%d", &vhs);
       strcpy(v_sehiri, "Sinop");       
       switch(vhs){
           case 1:
           strcpy(v_havalimani, "NOP");
              return 1;
           break;
           default:
              printf("Hatalý seçim yaptýnýz");
            break;
       }
       printf("%s",v_havalimani);
    break;
   default:
           printf("Hatalý seçim yaptýnýz");
           Sleep(3000);
           exit(0);
   break;
      }
}
