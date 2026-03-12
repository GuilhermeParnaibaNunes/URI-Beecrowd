#include <stdio.h>
#include <string.h>

int main(){
  char attribute[3][15];

  scanf("%s", &attribute[0]);
  scanf("%s", &attribute[1]);
  scanf("%s", &attribute[2]);

  if(strcmp(attribute[0], "vertebrado") == 0){
    if(strcmp(attribute[1], "ave") == 0){
      if(strcmp(attribute[2], "carnivoro") == 0){
        printf("aguia\n");
      }else
        printf("pomba\n");
    }else{
      if(strcmp(attribute[2], "onivoro") == 0){
        printf("homem\n");
      }else
        printf("vaca\n");
    }
  }else{
    if(strcmp(attribute[1], "inseto") == 0){
      if(strcmp(attribute[2], "hematofago") == 0){
        printf("pulga\n");
      }else
        printf("lagarta\n");
    }else{
      if(strcmp(attribute[2], "hematofago") == 0){
        printf("sanguessuga\n");
      }else
        printf("minhoca\n");
    }
  }

  return 0;
}




