#include <stdio.h>
#include <string.h>

typedef struct user {
	char nama[50];
	char username[20];
	char password[20];
}
user;


user Pengguna;

char inputusername [20];
char inputpassword [20];

void registrasi() {
	printf("\t\t==REGISTRASI==\n");
	printf("masukkan nama lengkap anda :");
	scanf("%s", &Pengguna.nama);
	fflush(stdin);
	system("cls");
	
	printf("\t\t==REGISTRASI==\n");
	printf("masukkan username :");
	scanf("%s", &Pengguna.username);
	fflush(stdin);
	system("cls");
	
	printf("\t\t==REGISTRASI==\n");
	printf("masukkan password anda :");
	scanf("%s", &Pengguna.password);
	fflush(stdin);
	system("cls");
	
	printf("Registrasi berhasil\n");
	system("pause");
	system("cls");
}

int login() {


	system("cls");

	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
	scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);

	/*basis*/
	if (strcmp(Pengguna.username, inputusername) == 0 && strcmp(Pengguna.password, inputpassword) == 0 )	{
		system ("cls");
		
		printf (" \nusername dan password yang anda masukkan benar\n");
		
		printf ("selamat datang %s\n", Pengguna.nama);
		
		system ("pause");
		
		system ("cls");
		
		
		}
		
	/*rekurens*/
	else {
		
		system("cls");
		
		printf ("\nusername atau password yang anda masukkan salah\n\n");
		
		
		system("pause");
		
		system("cls");
		
		login();
	}

	
	}
	
int main() {
	
	registrasi();
	
	login();
	
	return 0;
}
