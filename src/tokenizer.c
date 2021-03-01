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

  char *word_start(char *str){
    
  }

  char *word_end(char *str){
    
  }

  int count_words(char *str){
    
  }

  char *copy_str(char *inStr, short len){
    
  }

  char **tokenize(char* str){
    
  }

  void print_tokens(char **tokens){

    while (*str != " ") {

	printf("%s \n", *str);

	str++;
    }

  }
  
  void free_tokens(char **tokens){

    char** temp = str;

    while (*temp != " "){

      free(*temp);
      temp++;

    }

    free(temp);

  }
