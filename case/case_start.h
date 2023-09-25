
int swither(int init_swither) {

  //cheker if program is allready opened
  if (init_swither == 0) {
    scanf("%d", &Numb_swither);
  } else {
    Numb_swither = init_swither;
  }
  
  printf("\e[1;1H\e[2J");//clear screen

  switch (Numb_swither) {