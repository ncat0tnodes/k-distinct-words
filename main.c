#include "stdio.h"
#include "stdlib.h"
#include "NOfWordsWithKdistinctsSymbols.h"

int main(){
  u64 ret = 0,n=5;
  for(u64 i=1;i<n+1;i+=1){
    ret = NOfwords(n,5,i);
    printf("%d %d\n",i,ret);
  }
  return 0;
}
