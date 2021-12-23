#include <stdio.h>
#include <windows.h>
#define max_karbohidrat 100;

/*Menghitung kalori*/
int total_kalori = 0;

typedef struct makanan {
	char nama_makanan[50];
	int gram;
	int kalori;
} makanan;

	int i;
	
makanan Makanan[] = {
	//nama            //gram //kalori
	{"Nasi Putih      ", 100, 175},
	{"Nasi Tim        ", 100, 88}, 
	{"Nasi Uduk       ", 200, 506}, 
	{"Nasi Goreng     ", 150, 296}, 
	{"Jagung Rebus    ", 250, 90},
	{"Singkong Rebus  ", 100, 125},
	{"Talas Rebus     ", 100, 98},
	{"Kentang Rebus   ", 200, 166},
	{"Kentang Goreng  ", 150, 211},
	{"Ketan Putih     ", 120, 217},
	{"Ketupat         ", 160, 32},
	{"Roti Tawar      ", 60, 149},
	{"Lontong         ", 200, 38},
	{"Bubur           ", 200, 44},
	{"Bubur Ayam      ", 200, 165},
	{"Bubur Sum-sum   ", 100, 178},
	{"Bihun Goreng    ", 150, 296},
	{"Crackers        ", 50, 229},
	{"Makaroni        ", 25, 91},
	{"Mie Instant     ", 50, 168},
	{"Mie Goreng      ",100, 263},
	{"Mie Instant     ", 50, 168},
	{"Spaghetti       ", 300,642},
	
	{"Ayam Panggang   ", 80, 385},
	{"Telur Mata Sapi ", 60, 40}
	{"Telur Ayam Rebus", 60, 97},
	{"Telur Asin Rebus", 75, 138},
	{"Ati Ayam Goreng ", 50, 98},
	{"Bakso Sapi      ", 100, 260},
	{"Bandeng Goreng  ", 160, 180},
	{"Lele Goreng     ", 60, 57},
	{"Tempe Goreng    ", 50, 118},
	{"Abon Sapi       ", 50, 118},
	{"Ayam Goreng Kecap", 75, 358},
	{"Dendeng Balado  ", 50, 147},
	{"Gulai Ayam      ", 190, 165},
	{"Gulai Cumi      ", 100, 183},
	{"Keripik Tempe   ", 25, 68},
	{"Ayam Kentucky   ", 150, 130},
	{"Tahu Goreng     ", 150, 130},
	{"Perkedel Jagung ", 50, 108},
	{"Perkedel Kentang", 50, 123},
	{"Fuyung Hai      ", 50, 114},
	{"Rendang Daging  ", 75, 285},
	
	{"Acar Kuning            ", 75, 53},
	{"Bening Bayam           ", 50, 18},
	{"Cah Labu Siam          ", 100, 42,
	{"Sayur Asam             ", 100, 88,
	{"Sop Ayam               ", 100, 95},
	{"Sop Bayam              ", 50, 78},
	{"Sayur Lodeh            ", 100, 59},
	{"Cah Kacang Panjang     ", 75, 53},
	{"Tumis Buncis           ", 100, 52},
	{"Tumis Daun Singkong    ", 75, 53},
	{"Tumis Kacang + Jagung  ", 75, 53},
	{"Gudeg                  ", 150, 132},

	{"Apel               ", 160, 92),
	{"Apel Merah         ", 140, 82},
	{"Apel Merah         ", 140, 82},
	{"Belimbing          ", 160, 80},
	{"Duku               ", 200, 81},
	{"Jambu Air          ", 60, 35},
	{"Jambu Biji         ", 320, 157},
	{"Jeruk Medan        ", 140, 46},
	{"Jeruk Pontianak    ", 150, 67},
	{"Jeruk Sunkist      ", 200, 40},
	{"Mangga Manalagi    ", 100, 72},
	{"Nanas              ", 200, 81},
	{"Pepaya             ", 100, 81},
	{"Pir                ", 200, 80},
	{"Pir Hijau          ", 200, 105},
	{"Pisang Rebus      ", 250, 136},
	{"Salak              ", 150, 64},
	{"Semangka           ", 150, 48},
	{"Alpukat            ", 100, 85},
	{"Anggur 		     ", 125, 60},
	{"Klengkeng          ", 200, 79},
	{"Melon              ", 200, 46},
	{"Mangga Harum Manis ", 300, 90},
	{"Pisang Ambon       ", 100, 74},
	{"Pisang Mas         ", 125, 11},
	{"Pisang Raja        ", 150, 126},
	{"Sirsak             ", 125, 55},


};

menampikan_karbohidrat() {
	printf ("\t\t\t\t %c%c=============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------         Karbohidrat          --------==\n");
	printf ("\t\t\t\t =================================================\n\n");
	
	for (i = 0; i < 9 ; i++ ) {
		printf ("\t\t\t\t %d  | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
	for	(i = 9; i < 24 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}

menampikan_lauk() {
	printf ("\t\t\t\t %c%c=============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------          Lauk Pauk           --------==\n");
	printf ("\t\t\t\t =================================================\n\n");
	
	for (i = 24; i < 46 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
}

menampikan_sayur() {
	printf ("\t\t\t\t %c%c=============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------            Sayur             --------==\n");
	printf ("\t\t\t\t =================================================\n\n");

	for (i = 46; i < 60 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}

menampikan_buah() {
	printf ("\t\t\t\t %c%c=============================================%c%c\n",219,223,223,219);
	printf ("\t\t\t\t ==-------             Buah             --------==\n");
	printf ("\t\t\t\t =================================================\n\n");
	 
	for (i = 60; i < 88 ; i++ ) {
		printf ("\t\t\t\t %d | ", i+1);
		printf ("%s | ", Makanan[i].nama_makanan);
		printf ("%d kalori per ", Makanan[i].kalori);
		printf ("%d gram\n", Makanan[i].gram);
	}
	
}
daftar_kalori_makanan(){
	int pilihan_makanan;

	printf ("\n\t\t\t\t ==------           Jenis makanan:                    ------==\n");
	printf ("\t\t\t\t                   1) Karbohidrat                               \n");
	printf ("\t\t\t\t                   2) Lauk Pauk                                 \n");
	printf ("\t\t\t\t                   3) Buah                                      \n");
	printf ("\t\t\t\t                   4) Sayur                                     \n\n");
	
	printf ("\t\t\t\t\t    Masukkan pilihan makanan (Pilih 1-4):");
	scanf ("%d", &pilihan_makanan);
	fflush(stdin);
	
	system ("cls");
	switch (pilihan_makanan) {
		case 1 :
		{	menampikan_karbohidrat();
		}
			break;
			
		case 2 :
		{	menampikan_lauk();
		}
			break;
			
		case 3 :
		{	menampikan_buah();
		}
			break;
		
		case 4 :
		{	menampikan_sayur();
		}
			break;
		
	}
};

void menghitung_kalori() {
	int makanan;
	int jumlah_gram;
	int kalori_makanan = 0;
	int menambah;
	
	system ("cls");
	
	printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,223,223,219);
	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
	printf ("\t\t\t\t|        M E N G H I T U N G   K A L O R I   M A K A N A N      | \n");  
  	printf ("\t\t\t\t|---------------------------------------------------------------| \n");
    	printf ("\t\t\t\t%c%c=============================================================%c%c \n",219,220,220,219);
	
	daftar_kalori_makanan();
	printf ("\t\t\t\t %c%c=============================================%c%c\n",219,220,220,219);
	printf("\t\t\t\t\t    Masukkan pilihan makanan : ");
	scanf("%d", &makanan);
	fflush(stdin);
	makanan = makanan - 1;
	
	printf("\t\t\t\t\t    Masukkan jumlah makanan (Gram) : ");
	scanf("%d", &jumlah_gram);
	fflush(stdin);
	
	kalori_makanan = Makanan[makanan].kalori * jumlah_gram / Makanan[makanan].gram;
	
	total_kalori += kalori_makanan;
	
	printf("\n\t\t\t\t\t    jumlah kalorinya yaitu : %d kalori\n",  kalori_makanan);
	printf("\t\t\t\t\t    total kalori : %d kalori\n", total_kalori);
	printf("\n\t\t\t\t\t    ingin menambah kalori pada makanan lain? (1/0)\n");
	scanf ("%d", &menambah);
	fflush(stdin);
	
	switch (menambah) {
		case 0 : {
		system ("cls");
		printf ("\n\t\t\t\t\t    terimakasih");
		}
		break;
		
		case 1 : {menghitung_kalori();
		}
			break;
	}
	
};

int main() {
	menghitung_kalori();
	return 0;
}
