case 11:
printf("Program pentru a introduce numarul saptamânii și a imprima ziua "
       "saptamânii.\n");
scanf("%d", &int_1);
if (int_1 == 1) {
  printf("luni");
}
if (int_1 == 2) {
  printf("marti");
}
if (int_1 == 3) {
  printf("miercuri");
}
if (int_1 == 4) {
  printf("joi");
}
if (int_1 == 5) {
  printf("vineri");
}
if (int_1 == 6) {
  printf("sâmbătă");
}
if (int_1 == 7) {
  printf("duminică");
}
break;
case 12:
printf("Program pentru a introduce numarul lunii și a imprima numarul de "
       "zile din luna respectiva\n");
scanf(" %c", &a);
if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12) {
  printf("luna are 31 zile");
} else if (a == 4 || a == 6 || a == 9 || a == 11) {
  printf("luna are 30 zile");
} else
  printf("luna are 28 zile");
break;
case 13:
printf("Program pentru a numara numarul total de note într-o anumita "
       "cantitate.\n");
printf("introduceti nr. de note ce se vor introduce\n");
scanf("%d", &Numb_swither);
printf("\nintroduceti notele\n");
numb_2 = Numb_swither;
while (numb_2) {
  scanf("%d", &numb_1);
  float_1 += numb_1;
  printf("mai este de introdus %d\n", --numb_2);
}
float_1 = float_1 / Numb_swither;
printf("nota medie e=%f", float_1);
break;
case 14:
printf("Program pentru a introduce unghiurile unui triunghi și verificați daca "
       "triunghiul este valid sau nu\n");
printf("introduceti ungiurile\n");
scanf("%d", &numb_1);
numb_2 += numb_1;
scanf("%d", &numb_1);
numb_2 += numb_1;
scanf("%d", &numb_1);
numb_2 += numb_1;
(numb_2 == 180) ? printf("e triunghi") : printf("nu e triunghi");
break;
case 15:
printf("Program pentru a introduce toate laturile unui triunghi și verificați "
       "daca triunghiul este valid sau nu\n");
printf("introduceti ungiurile\n");
scanf("%d", &numb_1);
scanf("%d", &numb_2);
scanf("%d", &numb_3);
if (numb_1 + numb_2 > numb_3) {
  if (numb_2 + numb_3 > numb_1) {
    if (numb_1 + numb_3 > numb_2) {
      printf("triunghiul este valid");
    } else
      printf("triunghiul nu este valid");
  } else
    printf("triunghiul nu este valid");
} else
  printf("triunghiul nu este valid");
break;
case 16:
printf("Program pentru a verifica daca triunghiul este echilateral, isoscel "
       "sau triunghi scalen.\n");
printf("introduceti lungimea laturilor\n");
scanf("%d", &numb_1);
scanf("%d", &numb_2);
scanf("%d", &numb_3);
if (numb_1 == numb_2 && numb_2 == numb_3) {
  printf("triunghi echilateral ");
} else if (numb_1 == numb_2 || numb_2 == numb_3 || numb_1 == numb_3) {
  printf("tringhi isoscel");
} else {
  printf("triunchi scalen");
}
break;
