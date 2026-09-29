#include "utypes.h"
//Count number of m-words on alphabet n with exactly k distinct characters
u64 pwr(u64 x, u64 n){
	u64 xx=1;
	for (u64 i = 0; i < n; i+=1)
	{
		xx*=x;
	}
	return xx;
}

u64 NOfwords(u64 abLen, u64 wordLen, u64 subAbLen){
	u64 ret=0,combsOfi=1,combsOfSubi=1;
	u64 NOfWords[64]; 

	for (u32 i = 0; i < subAbLen; i++)
	{
		combsOfi=combsOfi*(abLen-i)/(i+1);
		
		NOfWords[i]=pwr(i+1,wordLen);

		combsOfSubi=1;
		for (u32 n = 0; n < i; n+=1)
		{
			combsOfSubi=combsOfSubi*(i+1-n)/(n+1);
			NOfWords[i]-=NOfWords[n]*combsOfSubi;
		}
		
		ret=NOfWords[i]*combsOfi;
	}
	return ret;
}
