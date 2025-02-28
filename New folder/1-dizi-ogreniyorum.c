#include <stdio.h>
int main(){
	int notes[]={7,8,31,24,69,27};
	int i;
	for (i=0;i<=5;i++){
		printf("%d\n",notes[i]);
	}
	int toplam = notes[5] + notes[2];
	printf("%d\n",toplam);
	
	
	return 0;
}
