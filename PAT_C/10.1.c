/*����һ���ַ���S��������һ���ַ�c��Ҫ�����ַ���S�в����ַ�c������Ҳ����������Not found�������ҵ�������ַ���S�д�c��ʼ�������ַ���

�����ʽ��

�����ڵ�1���и���һ��������80���ַ����ȵġ��Իس������ķǿ��ַ������ڵ�2���и���һ���ַ���

�����ʽ��

��һ���а�����ĿҪ����������

��������1��
It is a black box
b
�������1��
black box
��������2��
It is a black box
B
�������2��
Not found
*/

#include <stdio.h>
#include <string.h>

int main()
{
	char str[81];                               //������ַ��� 
	char ch;                                    //Ҫ���ҵ��ַ�  
	int i;
	for(i = 0; i < 81; i++) {                   //�����ַ������� '\n' ʱ�ĳ�  '\0' ������ 
		scanf("%c", &str[i]);
		if(str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	
	scanf("%c", &ch);                            //����Ҫ���ҵ��ַ� 
	int t, flag = 0;
	for(i = 0; i < strlen(str); i++) {           //���ַ�����һ���ַ������һ���ַ�������'\0'��ѭ������ 
		if(str[i] == ch) {                       //����ҵ����� t ��¼�±꣬��ʹ flag = 1�н���ѭ�� 
			t = i;
			flag = 1;
			break;
		}
	}
	if(flag == 1) {
		for(i = t; i < strlen(str); i++) {       //���±� Ϊ t ���ַ������һ���ַ�������� 
			printf("%c", str[i]);
		}
	}
	else {
		printf("Not found");                     //û���ҵ� 
	}
	return 0;
}
