#include <stdio.h>
#include <string.h>

int main()
{
	char str[101];
	int t;
	gets(str);
	scanf("%d", &t);
	int i, str_len;
	str_len = strlen(str);
	printf("str_len = %d\n", str_len);
	if(t > str_len) {
		t %= str_len;
	} 
	printf("t = %d\n", t);
	for(i = t; i < str_len; i++) {
		printf("%c", str[i]);
	}
	for(i = 0; i < t; i++) {
		printf("%c", str[i]);
	}
	
	return 0;
}
