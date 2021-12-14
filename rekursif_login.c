#include <stdio.h>
#include <string.h>

char inputusername [20];
char inputpassword [20];
char username[20] = "userapa";
char password[20] = "passapa";	

int login() {
	
	system("cls");
			
	
	printf ("\t\t==LOGIN==\n");
	printf ("\n");
	printf ("\tmasukkan username :");
	scanf ("%s", &inputusername);
		
	printf ("\tmasukkan password :");
	scanf ("%s", &inputpassword);
	
	//basis
	if (strcmp(username, inputusername) == 0 && strcmp(username, inputusername) == 0 )	{
		system ("cls");
		
		printf (" \nusername atau password yang anda masukkan benar\n\n");
		
		printf ("selamat datang\n");
		
		system ("pause");
		
		system ("cls");
		
	
	}
	
	//rekurens
		else {
		system ("cls");
		
		printf (" \nusername atau password yang anda masukkan salah\n\n");
		
		system ("pause");
		
		login();
	}
	}


int main() {
		
	login();
		
	return 0;
}
