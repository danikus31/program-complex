#include <ctype.h>
#include <math.h>
#include <stdio.h>

int main(void) {
  printf(
      "selectati programul\n\n1.	Program pentru a gasi "
      "maxim intre doua numere.\n2.	Program pentru a gasi maxim între trei "
      "numere.\n3.	Program pentru a verifica daca un numar este negativ, "
      "pozitiv sau zero.\n4.	Program pentru a verifica daca un numar este "
      "divizibil cu 5 și 11 sau nu.\n5.	Program pentru a verifica daca un "
      "numar este par sau impar.\n6.	Program pentru a verifica daca un an "
      "este bisect sau nu.\n7.	Program pentru a verifica daca un caracter "
      "este sau nu alfabet.\n8.	Program pentru a introduce orice alfabet și "
      "verificați daca este vocala sau consoana.\n9.	Program pentru a "
      "introduce orice caracter și verificați daca este alfabet, cifra sau "
      "caracter special.\n10.	Program pentru a verifica daca un caracter "
      "este cu majuscule sau minuscule.\n11.	Program pentru a introduce "
      "numarul saptamânii și a imprima ziua saptamânii.\n12.	Program pentru "
      "a introduce numarul lunii și a imprima numarul de zile din luna "
      "respectiva.\n13.	Program pentru a numara numarul total de note într-o "
      "anumita cantitate.\n14.	Program pentru a introduce unghiurile unui "
      "triunghi și verificați daca triunghiul este valid sau nu.\n15.	"
      "Program pentru a introduce toate laturile unui triunghi și verificați "
      "daca triunghiul este valid sau nu.\n16.	Program pentru a verifica daca "
      "triunghiul este echilateral, isoscel sau triunghi scalen.\n17.	"
      "Program pentru a gasi toate radacinile unei ecuații patratice.\n\n");
  int Numb_swither, numb_1, numb_2, numb_3;
  char a;
  scanf("%d", &Numb_swither);
  printf("\e[1;1H\e[2J");

  switch (Numb_swither) {
  case 1:
    printf("Program pentru a gasi maxim intre doua numere\n");
    printf("introduce primul numar\n");
    scanf("%d", &numb_1);
    printf("introduce al doilea numar\n");
    scanf("%d", &numb_2);
    if (numb_1 > numb_2) {
      printf("valoarea maxima este %d", numb_1);
    } else {
      printf("valoarea maxima este %d", numb_2);
    }
    break;
  case 2:
    printf("Program pentru a gasi maxim între trei numere\n");

    printf("introduce primul numar\n");
    scanf("%d", &numb_1);
    printf("introduce al doilea numar\n");
    scanf("%d", &numb_2);
    printf("introduce al treilea numar\n");
    scanf("%d", &numb_3);
    if (numb_1 > numb_2 && numb_1 > numb_3)
      printf("Biggest number is %d", numb_1);
    if (numb_2 > numb_1 && numb_2 > numb_3)
      printf("Biggest number is %d", numb_2);
    if (numb_3 > numb_1 && numb_3 > numb_2)
      printf("Biggest number is %d", numb_3);
    break;
  case 3:
    printf("Program pentru a verifica daca un numar este negativ pozitiv sau "
           "zero\n");
    scanf("%d", &numb_1);
    if (numb_1 > 0)
      printf("nr este pozitiv");
    if (numb_1 == 0)
      printf("nr este egal cu 0");
    if (numb_1 < 0)
      printf("nr este negativ");
    break;
  case 4:
    printf("Program pentru a verifica daca un numar este divizibil cu 5 și 11 "
           "sau nu\n");
    scanf("%d", &numb_1);
    if (numb_1 % 5 == 0 && numb_1 % 11 == 0)
      printf("este divizibil");
    else
      printf("nu este divizibil");
    break;
  case 5:
    printf("Program pentru a verifica daca un numar este par sau impar\n");
    scanf("%d", &numb_1);
    if (numb_1 % 2 == 0)
      printf("nr. este par");
    else
      printf("nr. este impar");
    break;
  case 6:
    printf("Program pentru a verifica daca un an este bisect sau nu\n");
    scanf("%d", &numb_1);
    if (numb_1 % 4 == 0)
      printf("anul e bisect");
    else
      printf("anul nu e bisect");
    break;
  case 7:
    printf("Program pentru a verifica daca un caracter este sau nu alfabet\n");
    scanf(" %c", &a);
    if (isalpha(a))
      printf("este caracter alfabet");
    else
      printf("nu este caracter alfabet");
    break;
  case 8:
    printf("Program pentru a introduce orice alfabet și verificați daca este "
           "vocala sau consoana\n");
    scanf(" %c", &a);
    printf("%c\n", a);
    if (a == 'a' || a == 'e' || a == 'o' || a == 'i' || a == 'u' || a == 'A' ||
        a == 'E' || a == 'O' || a == 'I' || a == 'U') {
      printf("este o vocala");
    } else {
      printf("este o consoană");
    }
    break;
  case 100:
    printf("program de test\n");
    scanf(" %c", &a);
    printf("%c", a);

    break;
  default:
    printf("exit");
  }
}