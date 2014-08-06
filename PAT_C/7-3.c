/*令Pi表示第i个素数。现任给两个正整数M <= N <= 10^4，请输出PM到PN的所有素数。

输入格式：

输入在一行中给出M和N，其间以空格分隔。

输出格式：

输出从PM到PN的所有素数，每10个数字占1行，其间以空格分隔，但行末不得有多余空格。

输入样例：
5 27
输出样例：
11 13 17 19 23 29 31 37 41 43
47 53 59 61 67 71 73 79 83 89
97 101 103
*/ 

#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	scanf("%d %d", &m, &n);
	int k, a, b=0 ,i, c[10000];
	for(a = 2; ; a++) {                      //先求前10000个素数并存放在c数组中 
		k=sqrt(a);                           //k等于a的开根号 
		for(i = 2; i <= k; i++) {
			if(a % i == 0)                    
				break;
		}
		if(i>k) {                            //判断是否为素数 
			c[b]=a;
			b++;
			if(b >= 10000)                   //结束条件 
				break;
		}
	}
	int d = 0; 
	for(i = m; i <= n; i++) {
		d++;
		printf("%d", c[i-1]);                //输出第i个素数 
		if(d % 10 != 0 && i != n) {
			printf(" ");
		}
		else if(d % 10 == 0) {
			printf("\n");
		}
	}
	
/*	for(i=m;i<=n;i++)
	{
		d++;
			if(d%10 != 0)
			{
				printf("%d ",c[i-1]);
			}
			if(d%10==0)
			{
				printf("%d\n",c[i-1]);
			}
		
	}*/
}
