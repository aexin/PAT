/*输入一个以#结束的字符串，本题要求将小写字母全部转换成大写字母，把大写字母全部转换成小写字母，其它字符不变。

输入格式：

输入在一行中给出一个长度不超过40的、以#结束的非空字符串。

输出格式：

在一行中按照要求输出转换后的字符串。

输入样例：
Hello World! 123#
输出样例：
hELLO wORLD! 123
*/

#include <stdio.h>

int main()
{
	char s[40];
	int i = 0;
	do {
		scanf("%c", &s[i]);
		i++;
	} while(s[i-1] != '#');
	int j;
	for(j = 0; j < i-1; j++) {
		if(s[j] >= 'a' && s[j] <= 'z') {
			s[j] -= 32;
		}
		else if (s[j] >= 'A' && s[j] <= 'Z') {
			s[j] += 32;
		}
	}
	for(i = 0; i < j; i++) {
		printf("%c", s[i]);
	}
	
	return 0;
}
