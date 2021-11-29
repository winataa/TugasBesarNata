#include <stdio.h>

typedef struct kalori_makanan {
	char nama[50];
	int kalori; //dalam satuan kkal/gram
		
	}
	kalori_makanan;
	
kalori_makanan makanan[] = {
	{"Telur", 80},
	{"Kentang", 90},
	{"Cokelat", 200}
	
	};
		
void daftar_makanan() {
	int i;
	
		for (i = 0; i < 3; i++){
		printf ("%d) ", i );
		printf ("%s\t", makanan[i].nama);
		printf ("%d kalori/gram \n", makanan[i].kalori);
		
		}
	}	
	
void menu(){
	printf ("pilihan menu : \n");
	printf ("\t 1) Menghitung IMB \n");
	printf ("\t 2) Daftar kalori makanan \n");
	printf ("\n");
	printf ("masukkan pilihan anda ");
}	


	int main() {
	int masukan;
	
	menu();
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : 
			printf ("coming soon");
			break;
		
		case 2 :
			daftar_makanan();
			break;
			
		default:
			printf ("Saya kurus");
	}

	
	
	return 0;
}
