#include<stdio.h>
#include<stdlib.h>

int main(){
	int jumlah, jabatTangan, i;
	jabatTangan = 0;
	
	printf("Jumlah orang yang hadir: "); scanf("%d",&jumlah);
	
	if(jumlah>=1){		
		for(i=jumlah; i>0; i--){
			jabatTangan = jabatTangan + (i-1);
		}
		printf("Jumlah jabat tangan: %d",jabatTangan);
	}else{
		printf("Tidak ada yang berjabat tangan (T_T)\n");
	}
	return 0;
}
