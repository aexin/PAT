/*读入一个自然数n，计算其各位数字之和，用汉语拼音写出和的每一位数字。

输入格式：每个测试输入包含1个测试用例，即给出自然数n的值。这里保证n小于1000。

输出格式：在一行内输出n的各位数字之和的每一位，拼音数字间有1 空格，但一行中最后一个拼音数字后没有空格。

输入样例：
1234567890987654321123456789
输出样例：
yi san wu
*/ 

#include <stdio.h>
#include <string.h>
#define N 1000

void read(int sum);                //读出函数声明 

int main()
{
	char str[N];                   //要输入一个小于1000位的数字，显然不能用int，在这里定义一个str字符数组接收输入的数字 
	gets(str);                     //使用gets输入这个全是数字的字符串 
	int len;                       //len表示str字符串的长度（也就是数字的个数） 
	len = strlen(str);             //使用strlen函数可以直接测出len的大小 
	int i, sum = 0;                //sum为各位数字的和 
	for(i = 0;i < len;i++) {       //从第一个数字开始遍历到最后一个数字 
		sum += str[i] - '0';       //因为str为字符数组，所以str【i】-‘0’就等于str【i】数字的大小 
	}
//	printf("%d\n", sum);
	
	read(sum);
	
	return 0;
} 

/*int sum( int n)
{
	int inp, sum = 0;
	do {
		inp = n % 10;
		sum += inp;
		n /= 10;
	} while(n > 0);
	
	return sum;
}*/

void read(int sum)                   //读出函数 
{
	int i;
	 //因为下面要算sum的每位数的大小，mask为10的（sum的位数（几位数）次方减一 ）
	 //如：sum为三位数，mask为10，sum/mask就等于sum的首位 ，现初始为一 
	int mask = 1;                   
	int t = sum;
	while(t > 9) {           //t循环了sum的位数减一遍 
		t /= 10;
		mask *= 10;
	} 
	
	//定义一个指针数组，数组中的每一个元素都是指针 
	char *c[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	//循环sum的位数次，并输出每位 
	do {
		i = sum / mask;
		printf("%s",c[i]);
		if(mask > 9) {
			printf(" ");
		}
		sum %= mask;
		mask /= 10;
	} while(mask > 0);
}
