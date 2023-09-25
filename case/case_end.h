case 100: // test app
S_int_1;
Pr_int_1;
break;

default:
red("nu exista asa program, mai incearca");
scanf("%c", &a);
}

// end screen and reset program
printf("\n\n\n\n (");
green("r");
printf(") =  restart program /  (");
red("m");
printf(") = main menu\n");
scanf(" %c", &a);
(a == 'r') ? swither(Numb_swither) : man();
}