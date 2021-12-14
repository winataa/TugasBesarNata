#include <stdio.h>
#include <string.h>

int login() {
	char inputusername [20];
	char inputpassword [20];
	
	char username[20] = "nata";
	char password[20] = "tugaslancar45";

	system("cls");

	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
	scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
		scanf ("%s", &inputpassword);

	/*basis*/
	if (strcmp(username, inputusername) == 0 && strcmp(username, inputusername) == 0 )	{
		system ("cls");
		
		printf (" \n\tusername dan password yang anda masukkan benar\n");
		
		printf ("selamat datang\n");
		
		system ("pause");
		
		system ("cls");
		
		menu();
		
	/*rekurens*/
		system ("cls");
		
		printf (" \n\tusername atau password yang anda masukkan salah\n");
		
		system ("pause");
	}
	}

	
		break;		
	




}