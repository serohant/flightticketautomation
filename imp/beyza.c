char v_havalimani[50],v_sehiri[50];
int v_sehir,vhs;
int step_2(){
    EkranTemizle();
    printf("--------------- FLYIGU ---------------\n");
    printf("| 1-�stanbul \n| 2-�zmir \n| 3-Mu�la \n| 4-Antalya \n| 5-Sinop \n" );
    printf("--------------------------------------\n");
   printf("\nVar�� �ehri se�iniz: ");
   scanf("%d", &v_sehir);
   switch(v_sehir){
    case 1 :
       printf("1-Sabiha G�k�en Havaliman� (SAW)\n2-�stanbul Havaliman� (IST)\n");
       printf("\nistanbul'da ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
       scanf("%d", &vhs);
       strcpy(v_sehiri, "�stanbul");
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
                printf("Hatal� se�im yapt�n�z.");
           break;
       }
    break;
    case 2 :
        printf("1-Adnan Menderes Havaliman� (ADB)\n " );
        printf("\n�zmir'de ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
        scanf("%d", &vhs);
       strcpy(v_sehiri, "�zmir");        
        switch(vhs){
            case 1:
                strcpy(v_havalimani, "ADB");
                   return 1;
            break;
            default: 
                printf("Hatal� se�im yapt�n�z.");
            break;
       }
      printf("%s",v_havalimani);
    break;
    case 3 :
        printf("1-Milas/Bodrum Havaliman� (BJV)\n2-Dalaman Havaliman� (DLM) \n " );
        printf("\n Mu�la'da ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
        scanf("%d", &vhs);
       strcpy(v_sehiri, "Mu�la");
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
                printf("Hatal� se�im yapt�n�z.");
            break;
        }
        printf("%s",v_havalimani);
    break;
    case 4 :
        printf("1-Gazipa�a Havaliman� (GZP)\n2-Antalya Havaliman� (AYT)\n" );
        printf("\n Antalya'da ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
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
               printf("Hatal� se�im yapt�n�z");
          break;
        }
        printf("%s",v_havalimani);
    break;
    case 5 :
       printf("1-Sinop Havaliman� (NOP)\n ");
       printf("\n Sinop'da ini� yapmak istedi�iniz havaliman�n� se�iniz: ");
       scanf("%d", &vhs);
       strcpy(v_sehiri, "Sinop");       
       switch(vhs){
           case 1:
           strcpy(v_havalimani, "NOP");
              return 1;
           break;
           default:
              printf("Hatal� se�im yapt�n�z");
            break;
       }
       printf("%s",v_havalimani);
    break;
   default:
           printf("Hatal� se�im yapt�n�z");
           Sleep(3000);
           exit(0);
   break;
      }
}
