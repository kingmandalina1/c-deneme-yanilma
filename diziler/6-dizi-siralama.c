#include <stdio.h>
int i;
int j;
void sort(int array[],int size);
void printarray(int array[],int size);


int main(){
	int array[] ={9,5,2,1,2,4,5,5,5,1,1,12,31,1,23,1,23,123,1,1,2,31,2,1,3,12,31,2,31,23,12};
	int size = sizeof(array)/sizeof(array[0]);
	sort(array,size);
	printarray(array,size);
	return 0;
	
}
void sort(int array[],int size){
	for(i=0;i<size-1;i++){
		for(j=0;j<size-1;j++){
			if(array[j]>array[j+1]){
				int temp = array[j];
				array[j]= array[j+1];
				array[j+1]=temp;
			}
		}
	}
}
void printarray(int array[],int size){
	for(i=0;i<size;i++){
		printf("%d",array[i]);
	}
}
