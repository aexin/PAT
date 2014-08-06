/*给定区间[-2^31, 2^31]内的3个整数A、B和C，请判断A+B是否大于C。

输入格式：

输入第1行给出正整数T(<=10)，是测试用例的个数。随后给出T组测试用例，每组占一行，顺序给出A、B和C。整数间以空格分隔。

输出格式：

对每组测试用例，在一行中输出“Case #X: true”如果A+B>C，否则输出“Case #X: false”，其中X是测试用例的编号（从1开始）。

输入样例：
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
输出样例：
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/ 

#include <stdio.h>

void print(int n);                                   //输出函数 

int main()
{
	int n;
	scanf("%d", &n);                                 //读入数字n（n为多少组） 
	print(n);
	
	return 0;
}

void print(int n)                                    //输出函数 
{
	int i, a[n];
	int b, c, d;
	for(i = 0;i < n;i++) {
		scanf("%d %d %d", &b, &c, &d);               //读入a，b，c 
		//判断表达式是否正确，正确a【i】=1，否侧a【i】=0.这里运用了强制类型转换，因为a,b,c的范围为[-2^31]~[2^31]. 
		if(((double)b + (double)c) > d) {             
			a[i] = 1;
		}
		else {
			a[i] = 0; 
		}
//		if(a[i] > d) {
//			a[i] = 1;
//		}
//		else if(a[i] <= d) {
//			a[i] = 0;
//		}
	}
//	for(i = 0;i < n;i++) {
//		printf("a[%d] = %d ", i, a[i]);
//	} 
	for(i = 0;i < n;i++) {                          //根据a【i】的值输出对应结果 
		if(a[i] == 0) {
			printf("Case #%d: false\n", i+1);
		}
		else if(a[i] == 1) {
			printf("Case #%d: true\n", i+1);
		}
	}
}
