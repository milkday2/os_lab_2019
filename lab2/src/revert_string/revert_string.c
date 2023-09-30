#include "revert_string.h"
#include <string.h>

void RevertString(char *str)
{
	int len = strlen(str);
	char temp;
	if(len<1) return;
	int k = len-1;
	for(int i=0;i<(len-1)/2;i++){
		if(i>=k) return;
		temp = str[i];
		str[i]=str[k];
		str[k]=temp;
		k--;
	}
}

