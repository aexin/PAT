//未完成，zbcacatt----zb不能实现 

#include <stdio.h>
#include <string.h>

int main()
{
	char s1[81];
	char s2[81];
	int i;
	for(i = 0; i < 81; i++) {
		scanf("%c", &s1[i]);
		if(s1[i] == '\n') {
			s1[i] = '\0';
			break;	
		}
	}
	for(i = 0; i < 81; i++) {
		scanf("%c", &s2[i]);
		if(s2[i] == '\n') {
			s2[i] ='\0';
			break;
		}
	}
	int t[81], j = 0, l = 0, cnt = 0;
	for(i = 0; i < strlen(s1); i++) {
		if(s1[i] == s2[l]) {
			l++;
			cnt++;
			if(cnt == strlen(s2)) {
				t[j] = i - cnt + 1;
				j++;
				l = 0;
				cnt = 0;
			}
		}
		else if(l != 0) {
			i--; 
			l = 0;
			cnt = 0;
		}
	}
	int w = j;
	j = j - 1;
	int k;
	for(i = 0; i < w; i++) {
		for(k = t[j]; k < strlen(s1) - strlen(s2) + 2; k++) {
			s1[k] = s1[k +strlen(s2)];
		}
		j--;
	} 
	for(i = 0; i < strlen(s1); i++) {
		printf("%c", s1[i]);
	}
	
	return 0;
}
