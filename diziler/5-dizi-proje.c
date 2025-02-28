#include <stdio.h>

#define RESPONSES_SIZE 100 
#define FREQUENCY_SIZE 10   

int main() {
    int A, B;

    
    printf("Ankete katilacak ogrenci sayisini giriniz = ");
    scanf("%d", &A);
    printf("Ogrencinin puan siniri (min = 1, max = siz belirleyin) = ");
    scanf("%d", &B);
    printf("\n");

   
    int frequency[B + 1]; 
    int responses[A];   

   
    int i;
    for (i = 0; i <= B; i++) {
        frequency[i] = 0;
    }

   
    printf("Ogrencilerin verdigi puanlari tek tek girin:\n");
    
    for (i = 0; i < A; i++) {
        printf("%d. puan: ", i + 1);
        scanf("%d", &responses[i]);
    }

    
    for (i = 0; i < A; i++) {
        if (responses[i] >= 1 && responses[i] <= B) {
            frequency[responses[i]]++;
        }
    }

    
    printf("\npuan                puan tekrar sayisi\n");
    for ( i = 1; i <= B; i++) {
        printf("%-20d %-20d\n", i, frequency[i]);
    }

    return 0;
}

