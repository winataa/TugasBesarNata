#include <stdio.h>

typedef struct asupan {
	char hari[50]; 
	char jam[5];
	int kalori;
	
}asupan;

asupan Asupan[];

void menulis_kalori() {
	

	int i = 0; //menyimpan indeks
	FILE *fp; //membuat pointer file
	int ulang = 1; //menyimpan integer pengulangan
	
	fp = fopen("catatan_kalori.txt","a");
	
	while(ulang == 1) {
		
	printf("Masukkan hari : ", i+1); 
		gets(Asupan[i].hari);
        fprintf(fp, "%s\n", Asupan[i].hari);
        fflush(stdin); 
        
        printf("Masukkan jam : ", i+1);  
        gets(Asupan[i].jam);
        fprintf(fp, "\tjam : %s\n", Asupan[i].jam);
       	fflush(stdin);
       	
		printf ("Masukkan jumlah kalori yang dikonsumsi (kkal): ", i+1);
		scanf("%d",&Asupan[i].kalori);
		fprintf(fp,"\tjumlah kalori : %d kkal\n", Asupan[i].kalori); //ingat pakai fprintf (file printf)
		fflush (stdin);
		
	
		
		printf ("Apakah ingin mengulang? (1/0) : ");
		scanf ("%d", &ulang);
		fflush(stdin);
		
		fprintf("%d\n", i);
	}
	
	fclose(fp);
	
	printf ("Data berhasil ditulis \n");

}

int main() {
	
	menulis_kalori();
	
	return 0;
}
