#include <stdio.h>
#include <string.h>

//스트링 톡. 톡. 톡. 트로피카나!
void strtok_tok_tok_Tropicana(char* str, const char* search){
  int len = strlen(str);
  int toInt, toFind;

  for(int i=0; i<len; i++){
    toInt = str[i];
    toFind = *search;
  
    if(toInt == toFind) printf("\n");
    else printf("%c", str[i]);
  }
}

int main(){
  char str[100]={};
  char* search = " ";
  scanf("%[^\n]s", str);

  strtok_tok_tok_Tropicana(str, search);
  printf("\n");

  return 0;
}
