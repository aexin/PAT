/*让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、3个“十”、以及个位的4。

输入格式：每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234
输入样例2：
23
输出样例2：
SS123
*/ 

#include <stdio.h>

void print(int n);             //输出函数声明 

int main()
{
	int n;                     
	scanf("%d", &n);           //输入数字n 
	print(n);
			
	return 0;
}

void print(int n)              //输出函数 
{
	int a, b ,c;               //a为百位数字，b为十位数字，c为个位数字 
	a = n / 100;
	b = n % 100 /10;
	c = n % 10;
	int i;
	for(i = 0;i < a;i++) {       
		printf("B");
	}
	for(i = 0;i < b;i++) {
		printf("S");
	}
	for(i = 1;i <= c;i++) {
		printf("%d", i);
	}
}
