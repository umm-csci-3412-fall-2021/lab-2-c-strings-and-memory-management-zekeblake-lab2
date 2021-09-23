#include <stdlib.h>

#include "disemvowel.h"

char *disemvowel(char *str) {
  char *result; // the array of char that has the vowels removed from str
  int len, i; // len: the length of the given array
  len = strlen(str);
  // add one to len so there's room for the null terminator '\0'
  result = (char*) calloc(len+1, sizeof(char));
  // for loop copies all elements of str into result
  // and adds the null terminator at result[len]
  i = 0;
  for (i=0; i<len; i++){
    result[i] = str[i];
  }
  result[len] = '\0'

  return delete_vowels(result);
}

// Helper function delete_vowels

char *delete_vowels(*char str){
  int i;
  int *len;
  for(i=0; i<len; i++){
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'){
      for(j=i; j<len; j++){
	str[j]=str[j+1];}
      len--;
      i--;
    }
  }
char *disemvowel(char *str) {
  return (char*) "";
}
