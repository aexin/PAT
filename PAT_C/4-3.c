/*本题要求统计给定整数M和N区间内素数的个数并对它们求和。

输入格式：

输入在一行中给出2个正整数M和N（1<=M<=N<=500）。

输出格式：

在一行中顺序输出M和N区间内素数的个数以及它们的和，数字间以空格分隔。

输入样例：
10 31
输出样例：
7 143
*/ 

#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	scanf("%d %d", &m, &n);
	
	if(m == 1)
		m = 2;
	int i;
	int cnt = 0;
	int sum = 0;
	for(i = m; i <= n; i++) {
		int k, j;
		k = sqrt(i);
		for(j = 2; j <= k; j++) {
			if(i % j == 0)
				break;
		}
		if(j > k) {
			cnt ++;
			sum += i;
		}
	}
	printf("%d %d", cnt, sum);
	
	return 0;
}
