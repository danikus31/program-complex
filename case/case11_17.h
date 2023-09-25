case 11:
printf("Program pentru a introduce numarul saptamânii și a imprima ziua "
       "saptamânii.\n");
S_int_1;
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
scanf("%d", &int_1);
printf("\nintroduceti notele\n");
numb_2 = int_1;
while (numb_2) {
  scanf("%d", &numb_1);
  float_1 += numb_1;
  printf("mai este de introdus %d\n", --numb_2);
}
float_1 = float_1 / int_1;
printf("nota medie e=%f", float_1);
break;
case 14:
printf("Program pentru a introduce unghiurile unui triunghi și verificați daca "
       "triunghiul este valid sau nu\n");
printf("introduceti ungiurile\n");
S_numb_1;
numb_2 += numb_1;
S_numb_1;
numb_2 += numb_1;
S_numb_1;
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
S_numb_1;
S_numb_2;
S_numb_3;
if (numb_1 == numb_2 && numb_2 == numb_3) {
  printf("triunghi echilateral ");
} else if (numb_1 == numb_2 || numb_2 == numb_3 || numb_1 == numb_3) {
  printf("tringhi isoscel");
} else {
  printf("triunchi scalen");
}
break;
case 17:
printf("Program pentru a gasi toate radacinile unei ecuații patratice \n");
printf("introduceti valorile a ecuatiei patratice (a),(b) si (c)\n");
S_numb_1;
S_numb_2;
S_numb_3;
printf("\n%dx^2 + %dx + %d = 0\n\n",numb_1, numb_2, numb_3);

float_1 = (numb_2 * numb_2) - (4 * numb_1 * numb_3);
if (float_1 < 0) {
  red("delta<0 => nu exista solutie");
} else if (float_1 == 0) {
  float_1 = -numb_2 / (2 * numb_1);
  printf(" delta = 0\n");
  printf("x = %f", float_1);
} else {
  printf("delta = %f \n", float_1 );
  float_1= sqrt(float_1); 
  printf("√delta= %f\n\n", float_1 );
  printf("x1= (-b-√delta)/2*a \nx2= (-b+√delta)/2*a\n\n");
  float_2 = (-numb_2-float_1)/(2*numb_1);
  printf("x1 = %f\n", float_2);
  float_2 = (-numb_2+float_1)/(2*numb_1);
  printf("x2 = %f", float_2);
  
  
}
break;
