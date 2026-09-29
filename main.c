#include "stdio.h"
#include "stdlib.h"
#include "NOfWordsWithKdistinctsSymbols.h"

int main(){
  u64 ret = 0;
  for(u64 i=1;i<7;i+=1){
    ret = NOfwords(7,7,i);
    printf("%d\n",ret);
  }
  return 0;
}
