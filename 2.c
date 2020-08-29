#include<stdio.h>
#include<stdlib.h>

void genSerial(int len) {
    static const char alphanum[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";
	int i,j;
	
    for (i = 0; i < len; ++i) {
		for (j = 0; j < len; ++j) {
	    	printf("%c", alphanum[rand() % (sizeof(alphanum) - 1)]);
	    }
	    if(i<len-1){
	    	printf("-");
		}
	}
}

int main(){
	int jumlah;
	do{
		system("cls");
		printf("Jumlah huruf: ");
		scanf("%d", &jumlah);
		printf("Serial number: ");
		genSerial(jumlah);
		getch();
	}while(jumlah > 0);
	return 0;
}
