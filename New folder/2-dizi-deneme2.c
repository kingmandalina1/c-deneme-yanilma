#include <stdio.h>
int main(){
	int i;
	int square[20];
	for(i=0;i<=19;i++){
		square[i]=i*i;
		printf("square[%d]=%d\n",i,square[i]);
	}
	return 0;
}
