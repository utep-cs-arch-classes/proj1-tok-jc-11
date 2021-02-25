#include <stdio.h>
#include <stlib.h>
#include "tokenzizer.h"

int space_char(char c){



  if(c == ' ' || c =='\t' || c == '\n' && c != '\0'){

    return 0;

  }

  return 1;

}



int non_space_char(char c){

  if(c != ' ' && c != '\t' && c! == '\n' && c !== '\0'){

    return 0;

  }
