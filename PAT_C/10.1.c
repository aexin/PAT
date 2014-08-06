/*输入一个字符串S，再输入一个字符c，要求在字符串S中查找字符c。如果找不到则输出“Not found”；若找到则输出字符串S中从c开始的所有字符。

输入格式：

输入在第1行中给出一个不超过80个字符长度的、以回车结束的非空字符串；在第2行中给出一个字符。

输出格式：

在一行中按照题目要求输出结果。

输入样例1：
It is a black box
b
输出样例1：
black box
输入样例2：
It is a black box
B
输出样例2：
Not found
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[81];                               //输入的字符串 
	char ch;                                    //要查找的字符  
	int i;
	for(i = 0; i < 81; i++) {                   //输入字符串，遇 '\n' 时改成  '\0' 并结束 
		scanf("%c", &str[i]);
		if(str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	
	scanf("%c", &ch);                            //输入要查找的字符 
	int t, flag = 0;
	for(i = 0; i < strlen(str); i++) {           //从字符串第一个字符到最后一个字符（不是'\0'）循环查找 
		if(str[i] == ch) {                       //如果找到测用 t 记录下标，并使 flag = 1切结束循环 
			t = i;
			flag = 1;
			break;
		}
	}
	if(flag == 1) {
		for(i = t; i < strlen(str); i++) {       //从下标 为 t 的字符到最后一个字符依次输出 
			printf("%c", str[i]);
		}
	}
	else {
		printf("Not found");                     //没有找到 
	}
	return 0;
}
