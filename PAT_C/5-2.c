/*输入一个整数，输出每个数字对应的拼音。当整数为负数时，先输出“fu”字。十个数字对应的拼音如下：

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
输入格式：

输入在一行中给出一个整数，如： 1234 。

提示：整数包括负数、零和正数。

输出格式：

在一行中输出这个整数对应的拼音，每个数字的拼音之间用空格分开，行末没有最后的空格。如 yi er san si。

输入样例：
-600
输出样例：
fu liu ling ling
*/ 

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if(n < 0) {
		printf("fu ");
		n = -n;
	}
	int t = n,mask = 1;
	while(t > 9) {
		t /= 10;
		mask *= 10;
	}
	//printf("mask=%d\n",mask);
	char *s[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int d;
	
	//printf("%d\n",n);
	while(mask > 0) {
		d = n / mask;
		printf("%s", s[d]);
		if(mask > 9) {
			printf(" ");
		}
		n %= mask;
		mask /= 10;
	}

	return 0;
}
