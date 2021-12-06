#include <stdio.h>
#include <string.h>

#define BOLD "\e[1m"
#define RED "\e[31m"
#define GREEN "\e[34m\e[1m"
#define RESET "\e[0m"

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
	
typedef struct asupan {
	char hari[50]; 
	char jam[5];
	int kalori;
	
}asupan;

asupan Asupan[];

void menghitung_IMT () {
	int massa;
	float tinggi;
	float IMB;
	int berat_minimal;
	int berat_maksimal;
	
	system("cls");
	
	printf ("Masukkan tinggi badan anda (dalam centimeter) : ");
	scanf ("%f", &tinggi);
	fflush (stdin);
	printf ("Masukkan berat badan anda (dalam kilogram) : ");
	scanf ("%d", &massa);
	fflush (stdin);
	
	system("cls");
	
	tinggi = tinggi / 100;
	
	IMB = (massa / (tinggi*tinggi));
	//IMB Normal yaitu 18.5 - 25
	berat_minimal = (18.5 *(tinggi*tinggi));
	berat_maksimal = (25 * (tinggi*tinggi));
	
	
	printf ("Indeks Massa Tubuh anda sebesar ");
	
	if (IMB < 16) {
		printf ("%f \n",IMB);
		printf ("kondisi anda kurus parah (Severe Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (berat_minimal -  massa));
	}
	
	else if (IMB >= 16 && IMB <= 17) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi sedang (Moderate Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (berat_minimal -  massa));
	}
	
	else if (IMB > 17 && IMB <= 18.5) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi kurus ringan (Mild Thinnes)\n");
		printf ("Anda perlu menambah berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (berat_minimal -  massa));
	}
	
	else if (IMB > 18.5 && IMB <= 25) {
		printf ("%f \n",IMB);
		printf ("kondisi anda saat ini sudah normal\n");
		printf ("tetap jaga pola makan anda\n");
	}
	
	else if (IMB > 25 && IMB <= 30) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi kegemukan\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (massa - berat_maksimal));
	}
	
	else if (IMB > 30 && IMB <= 35) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas I\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (massa - berat_maksimal));
	}
	
	else if (IMB > 35 && IMB <= 40) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas II\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (massa - berat_maksimal));
	}
	
	else if (IMB > 40) {
		printf ("%f \n",IMB);
		printf ("Anda mengalami kondisi obesitas kelas III\n");
		printf ("Anda perlu mengurangi berat badan paling tidak %d kilogram agar mencapai keadaan normal\n", (berat_maksimal -  massa));
	}
	
	else {
		printf ("IMB tidak valid\n");
	}
	
		system ("pause");
		system ("cls");
			menu();
}
		
void daftar_makanan() {
	int i;
	
		for (i = 0; i < 3; i++){
		printf ("%d) ", i );
		printf ("%s\t", makanan[i].nama);
		printf ("%d kalori/gram \n", makanan[i].kalori);
		
		}
			system ("pause");
			menu();
	}	

void menulis_kalori() {
	

	int i = 0; //menyimpan indeks
	FILE *fp; //membuat pointer file
	int ulang = 1; //menyimpan integer pengulangan
	
	fp = fopen("catatan_kalori.txt","a");
	
	while(ulang == 1) {
		fflush(stdin); 

	
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
		
	
	system ("cls");
		
		printf ("Apakah ingin mengulang? (1/0) : ");
		scanf ("%d", &ulang);
		fflush(stdin);
		
		fprintf("%d\n", i);
	}
	
	fclose(fp);
	
	printf ("Data berhasil ditulis \n");
	system ("pause");
	system ("cls");
	menu();

}

void keluar(){
	int keluar = 1;
	while(keluar == 1) {
		system ("cls");
		
		printf ("apakah ingin keluar?\n");
		printf ("0) kembali\n");
		printf ("1) keluar\n");
		printf ("masukkan : ");
		
		scanf ("%d", &keluar);
		fflush (stdin);
		
		if (keluar == 1) { 
		printf ("terima kasih\n");
		break;	
		}
		
		if (keluar == 0) {
			system ("cls");
			menu();
		}
		
		else{
				system ("cls");
		printf ("masukkan angka 1 atau 0");
		break;	
		}
		}
	}
	

void menu(){
	int masukan;
	
	printf ("pilihan menu : \n");
	printf ("\t 1) Menghitung IMB \n");
	printf ("\t 2) Daftar kalori makanan \n");
	printf ("\t 3) Menulis catatan kalori \n");
	printf ("\t 4) keluar");
	
	printf ("\n");
	printf ("masukkan pilihan anda ");
	
	scanf ("%d", &masukan);
	
	switch (masukan) {
		case 1 : 
			menghitung_IMT();
			break;
		
		case 2 :
			daftar_makanan();
			break;
			
		case 3 :
			menulis_kalori();
			break;
		case 4 :
			keluar();
			break;
			
		default:
			printf ("Masukkan pilihan dengan benar");
	}
}	


	int main() {
		
	char inputusername [20];
	char inputpassword [20];
	
	char username[20] = "userapa";
	char password[20] = "passapa";
	
	while (1) {
			system("cls");
			system("color F0");
	
	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
		scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);
	
		
	if (strcmp(username, inputusername) == 0 && strcmp(username, inputusername) == 0 )	{
		system ("cls");
		
		printf (GREEN" \n\tusername atau password yang anda masukkan benar\n");
		

		
		printf ("selamat datang\n");
		
		system ("pause");
		
		system ("cls");
		
		menu();
		
		break;
	
	}
	else {
		system ("cls");
		
		printf (RED BOLD" \n\tusername atau password yang anda masukkan salah\n");
		
		system ("pause");
	}
	}
	//test catatan
	return 0;
}
