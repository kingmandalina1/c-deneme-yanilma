#include <stdio.h>
int main(){
	double toplam =0;
	double average=0;
	double numbers[5];
	printf("5 sayi giriniz\n");
	int i;
	for(i=0;i<=4;i++){
		scanf("%lf",&numbers[i]);
		toplam+=numbers[i];
	}
	printf("toplam =%.2lf\n",toplam);
	average=toplam/5;
	printf("ortalama =%.2lf\n",average);
	
	
	
	return 0;
}
