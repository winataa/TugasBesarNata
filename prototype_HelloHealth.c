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
		
void daftar_makanan() {
	int i;
	
		for (i = 0; i < 3; i++){
		printf ("%d) ", i );
		printf ("%s\t", makanan[i].nama);
		printf ("%d kalori/gram \n", makanan[i].kalori);
		
		}
	}	
	
void menu(){
	int masukan;
	
	printf ("pilihan menu : \n");
	printf ("\t 1) Menghitung IMB \n");
	printf ("\t 2) Daftar kalori makanan \n");
	printf ("\n");
	printf ("masukkan pilihan anda ");
	
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
