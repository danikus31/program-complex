#include <ctype.h>
#include <math.h>
#include <stdio.h>

int man() {
#include "message.h"
  int Numb_swither = 0, int_1 = 0, numb_1 = 0, numb_2 = 0, numb_3 = 0;
  float float_1 = 0;
  char a = 0;
  scanf("%d", &Numb_swither);
  printf("\e[1;1H\e[2J");

  switch (Numb_swither) {
#include "case/case11_20.h"
#include "case/case1_10.h"
#include "case/case_end.h"
  }

  int main(void) { man(); }