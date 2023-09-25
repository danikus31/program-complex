#include <ctype.h>
#include <math.h>
#include <stdio.h>

#include "init.h"      //init vareables in basic function
#include "case_main.h" //all programs

int man() {          // start main program
#include "message.h" //display main menu
  swither(0);        // withat for user input
}

int main(void) { man(); } 