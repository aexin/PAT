/*ģ����������Ĺ��������������ֻ�ܽ��мӼ��˳����㣬�������ͽ������������4������������ȼ���ͬ���������ҵ�˳����㡣

�����ʽ��

������һ���и���һ������������ʽ��û�пո���������һ�������������Ⱥš�=��˵�����������

�����ʽ��

��һ���������ʽ�����������������������ĸΪ0���зǷ�������������������Ϣ��ERROR����

����������
1+2*10-10/2=
���������
10
*/

#include <stdio.h>

int main()
{
	int x, flag = 0;
	int result;
	char ch = '1';
	scanf("%d", &result);
	
	while(ch != '=') {
		scanf("%c", &ch);
		if(ch == '=') 
			break;
		scanf("%d", &x);
		if(ch == '+') {
			result += x;
		}
		else if(ch == '-') {
			result -= x;
		}
		else if(ch == '*') {
			result *= x;
		}
		else if(ch == '/') {
			if(x != 0) {
				result /= x;
			}
			else 
				flag = 1;
		}
		else 
			flag = 1;
		//	printf("ERROR");
	}
	if(flag) {
		printf("ERROR");
	}
	else 
		printf("%d\n", result);
		
	return 0;
}
