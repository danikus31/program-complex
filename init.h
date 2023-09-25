// init vareables
int Numb_swither = 0, int_1 = 0, numb_1 = 0, numb_2 = 0, numb_3 = 0;
float float_1 = 0, float_2 = 0;
char a = 0;

//Scan vareables  
#define S_int_1 scanf("%d", &int_1)
#define S_numb_1 scanf("%d", &numb_1)
#define S_numb_2 scanf("%d", &numb_2)
#define S_numb_3 scanf("%d", &numb_3)
#define S_float_1 scanf("%f", &float_1)
#define S_float_2 scanf("%f", &float_2)
#define S_a scanf("%c", &a)

//Print vareables
#define P_int_1 printf("\n%d", int_1)
#define P_numb_1 printf("\n%d", numb_1)
#define P_numb_2 printf("\n%d", numb_2)
#define P_numb_3 printf("\n%d", numb_3)
#define P_float_1 printf("\n%f", float_1)
#define P_float_2 printf("\n%f", float_2)
#define P_a printf("\n%c", a)

//Printr vareables
#define Pr_int_1 printf("\nint_1 = %d\n", int_1)
#define Pr_numb_1 printf("\nnumb_1 = %d\n", numb_1)
#define Pr_numb_2 printf("\nnumb_2 = %d\n", numb_2)
#define Pr_numb_3 printf("\nnumb_3 = %d\n", numb_3)
#define Pr_float_1 printf("\nfloat_1 = %f\n", float_1)
#define Pr_float_2 printf("\nfloat_2 = %f\n", float_2)
#define Pr_a printf("\na = %c\n", a)

//color display
int red(char *a) {
  printf("\033[1;31m");
  printf("%s", a);
  printf("\033[1;37m");
}
int green(char *a) {
  printf("\033[1;32m");
  printf("%s", a);
  printf("\033[1;37m");
}
int yellow(char *a) {
  printf("\033[1;35m");
  printf("%s", a);
  printf("\033[1;37m");
}