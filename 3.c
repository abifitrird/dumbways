#include<stdio.h>
#include<stdlib.h>
		
int main(){
	char laci[2][4] = {{'a','b','e','c'}, {'f','d','h'}};
	int i,j;
	char temp;	
	    
    // perintah untuk mengurutkan data
    for(i=0; i<(2-1); i++){
	    for(j=0; j<(4-1); j++){
	    	if(laci[i][j] > laci[i][j+1]){
				temp = laci[i][j];
				laci[i][j] = laci[i][j+1];
				laci[i][j+1] = temp;
			}
		}
	}
	
	// perintah untuk menampilkan data
	printf("Urutan data: \n");
	printf("{");
	
	for(i=0; i<2; i++){
		printf("\n   {");
		for(j=0; j<4; j++){
			
			if(laci[i][j]){
			printf("%c", laci[i][j]);
			
				if(laci[i][j+1]){
					printf(", ");
				}
			}
		}
		printf("},");
	}
		printf("\n}");

	return 0;
}
