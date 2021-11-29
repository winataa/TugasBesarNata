#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main () 
{
  char opsi; 
  double a, b;

  printf ("\n\n");
  printf ("\t-CAPEK NGITUNG? SINI KU BANTUIN!-\n\n");
  printf ("Pilih operasi hitungnya ya! \n(tambah(1), kurang(2), kali(3), bagi(4)): ");
  scanf  ("%c", &opsi);
    if   (opsi > '4')
    printf ("\n\n!!!Masukkin angka di rentang pilihan!!!");
    exit (0);

  printf ("\nSekarang masukkin 2 angka yang mau dihitung, \nangka pertama : ");
  scanf  ("%lf", &a);
  printf ("angka kedua   : ");
  scanf  ("%lf", &b);

  switch (opsi) {
    case '1':
      printf ("\nJadi, hasil penjumlahannya adalah: %.1lf + %.1lf = %.1lf", a, b, a + b);
      printf ("\n\nMau ngitung lagi? (y/t):  ");
      scanf  ("%s", &opsi);
        if   (opsi == 'y'|| opsi =='Y')
        main ();
        else
        exit (0);
      break;

    case '2':
      printf ("\nJadi, hasil pengurangannya adalah: %.1lf - %.1lf = %.1lf", a, b, a - b);
      printf ("\n\nMau ngitung lagi? (y/t):  ");
      scanf  ("%s", &opsi);
        if   (opsi == 'y'|| opsi =='Y')
        main ();
        else
        exit (1);
      break;

    case '3':
      printf ("\nJadi, hasil kalinya adalah: %.1lf x %.1lf = %.1lf", a, b, a * b);
      printf ("\n\nMau ngitung lagi? (y/t):  ");
      scanf  ("%s", &opsi);
        if   (opsi == 'y'|| opsi =='Y')
        main ();
        else
        exit (1);
      break;

    case '4':
      printf ("\nJadi, hasil baginya adalah: %.1lf / %.1lf = %.1lf", a, b, a / b);
      if     (b == 0){
      printf ("\n[Error! jangan dibagi sama 0 ya!]");
      printf ("\n\nMau ngitung lagi? (y/t):  ");
      scanf  ("%s", &opsi);
        if   (opsi == 'y'|| opsi =='Y')
        main ();
        else
        exit (1);
      break;
  }
    
    default:
      printf ("\n\nMau ngitung lagi? (y/t) : ");
      printf ("\n");
      scanf  ("%s", &opsi);


}
return 0;
}