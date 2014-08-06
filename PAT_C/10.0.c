/*给定一句英语，要求你编写程序，将句中所有单词的顺序颠倒输出。

输入格式：测试输入包含一个测试用例，在一行内给出总长度不超过80的字符串。字符串由若干单词和若干空格组成，其中单词是由英文字母（大小写有区分）组成的字符串，单词之间用1个空格分开，输入保证句子末尾没有多余的空格。

输出格式：每个测试用例的输出占一行，输出倒序后的句子。

输入样例：
Hello World Here I Come
输出样例：
Come I Here World Hello
*/ 

#include <stdio.h>

int main()
{
	char str[80][80];             //二维数组每一行存放一个单词 
	char dsr[80];                 //存放输入的字符串 
	int i, j = 0, k = 0;
	for(i = 0; i < 80; i++) {
		scanf("%c", &dsr[i]);
		if(dsr[i] == '\n') {      //当输入回车时结束 
			break;
		} 
	}
	dsr[i] = '\0';                //让字符串中最后一个字符（回车符）等于'\0' 
	for(i = 0; i < 80; i++) {
		if(dsr[i] == '\0') {
			str[j][k] = '\0';
			break;
		}
		str[j][k]  = dsr[i];      //将单词存到第 j 行  
		k++;
		if(dsr[i] == ' ') {
			str[j][k-1] = '\0';   //将空格换成'\0' 
			j++;
			k = 0;
		}
	}
	int t = j;                    //共有 t 个单词 

	for(j = t ; j >= 0; j--) {
		printf("%s", str[j]);
		if(j != 0) {
			printf(" ");
		}
	}
	
	return 0;
} 
