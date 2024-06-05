#include <stdio.h>
#include <string.h>

struct orang {
  char Assalamualaikum[50];
  char Nama[50];
  char Hobi[50];
  char Bahasa[50];
  char Gender[50];
  char Umur[50];
  char Profesi[50];
};

int main() {
  struct orang T1;
  
  strcpy(T1.Assalamualaikum, "waalaikumsalam!");
  strcpy(T1.Nama, "Meroket");
  strcpy(T1.Hobi, "Balapan");
  strcpy(T1.Bahasa, "Mars");
  strcpy(T1.Gender, "Laki-Laki");
  strcpy(T1.Umur, "120 Th");
  strcpy(T1.Profesi, "GP");

  printf("Assalamualaikum : %s\n", T1.Assalamualaikum);
  printf("Nama: %s\n", T1.Nama);
  printf("Hobi : %s\n", T1.Hobi);
  printf("Bahasa : %s\n", T1.Bahasa);
  printf("Gender : %s\n", T1.Gender);
  printf("Umur : %s\n", T1.Umur);
  printf("Profesi : %s\n", T1.Profesi);

  return 0;
}