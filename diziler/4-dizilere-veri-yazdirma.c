#include <stdio.h>

int main(){
    double deger, dizi[10] = {0};  
    int secim, index;

    do{
        printf("secim yap (-1 cikis)\n \t.1: diziye deger atamak icin\n \t 2: diziden deger okumak icin \n ");
        scanf("%d", &secim);

        if (secim == -1){
            break;
        }

        if (secim != 1 && secim != 2){
            printf("are you kidding me?\n");
            continue;
        }

        printf("dizi degerlerini gir: ");
        scanf("%d", &index);

        if (index < 0 || index > 9){
            printf("index 0 ile 9 arasinda olmali\n");
            continue;
        }

        switch(secim){
            case 1:
                printf("\n degeri gir: ");
                scanf("%lf", &deger); 
                dizi[index] = deger;
                printf("yazdirma islemibasarili!\n");
                break;
            case 2:
                printf("diziniz[%d]: %.2f\n\n", index, dizi[index]);
                break;
        }

    } while(secim != -1);
    
    return 0;
}

