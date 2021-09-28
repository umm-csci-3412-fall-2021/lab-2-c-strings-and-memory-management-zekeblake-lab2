#include <stdlib.h>
#include <string.h>
#include "disemvowel.h"

char *disemvowel(char *str) {
  int checkVowel(char);
  char *result; // the array of char that has the vowels removed from str
  int len, i, j; // len: the length of the given array
  len = strlen(str);
  // add one to len so there's room for the null terminator '\0'
  result = (char*) calloc(len+1, sizeof(char));
  // for loop copies all elements of str into result
  // and adds the null terminator at result[len]
  j=0;
  for (i=0; i<len; i++){
    if(checkVowel(str[i])==0)
    {result[j] = str[i];
     j++;}
  }

  result[len]='\0';

  return result;
}

// Helper function checkVowel
int checkVowel(char ch)
{
    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
       return 1;
    else
        return 0;

}
