/*水仙花数是指一个N位正整数（N>=3），它的每个位上的数字的N次幂之和等于它本身。例 如：153 = 13 + 53+ 33。 本题要求编写程序,计算所有N位水仙花数。

输入格式：

输入在一行中给出一个正整数N（3<=N<=7）。

输出格式：

按递增顺序输出所有N位水仙花数，每个数字占一行。

输入样例：
3
输出样例：
153
370
371
407
*/ 

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	int i, low = 1, high;           //low表示n位数的最小数，high表示n位数的最大数 
	for(i = 1; i < n; i++) {
		low *= 10;
	} 
	high = low * 10; 
	for(i = low; i < high; i++ ) {        //从最小数到最大数逐一遍历  
		int t = i;
		int sum = 0;
		do {
			int r = t % 10;          //r为数的末尾数字  
			t /= 10;
			int j, b = r;
			for(j = 1; j < n; j++) {    //让r自乘最后得到r的n次方 
				r *= b;
			}
			sum += r; 
		} while(t > 0);
		if(sum == i) {               //让r的n次方和i比较 
			printf("%d\n", i);
		}
	}
	
	return 0;
}
