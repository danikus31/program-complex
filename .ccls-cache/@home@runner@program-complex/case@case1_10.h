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
  case 9:
    printf("Program pentru a introduce orice caracter și verificați daca este "
           "alfabet, cifra sau caracter special.\n");
    scanf(" %c", &a);
    if (isalpha(a))
      printf("E caracter alfabetic");
    else if (isdigit(a))
      printf("E cifra");
    else
      printf("E caracter special");
    break;
  case 10:
    printf("Program pentru a verifica daca un caracter este cu majuscule sau "
           "minuscule\n");
    scanf(" %c", &a);
    if (a >= 'a' && a <= 'z')
      printf("Caracter cu minuscule");
    else
      printf("Caracter cu majuscule");

    break;