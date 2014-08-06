#include <stdio.h>
#include <string.h>

int main()
{
	char str[81];
	gets(str);
	int str_len;
	str_len = strlen(str);
	int i;
	for(i = str_len-1; i >= 0; i--) {
		printf("%c", str[i]);
	}
	
	return 0;
} 
