#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void bubbleSort(const int *  array, unsigned int size);	//ptototype

int main(void) 
{
	//initialize array a
	int a[SIZE]={0,9,3,8,4,6,5,7,2,1};
	
	unsigned int i;	//counter
	
	puts("Data items in original order");
	
	//loop through array a
	for(i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}	//end for
	
	bubbleSort(a,SIZE);	//sort the array
	
	puts("\nData items in ascending order ");
	
	//loop through array a
	for (i=0;i<SIZE;++i){
		printf("%4d",a[i]);
	}	//end for
	
	puts("");
}	//end main
