#include <stdio.h>
#inlcude <stdlib.h>
#include "tokenizer.h"

void main(){
  

}

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

  char *word_start(char *str){
    
