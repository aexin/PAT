/*ģ�⽻ͨ������״�����ǡ����������ٶȣ�����ٶȳ���60 mph������ʾ��Speeding����������ʾ��OK����

�����ʽ��

������һ���и���1��������500�ķǸ����������״�⵽�ĳ��١�

�����ʽ��

��һ���������������ʾ�������ʽΪ����Speed: V - S��������V�ǳ��٣�S������Speeding��������OK��

��������1��
40
�������1��
Speed: 40 - OK
��������2��
75
�������2��
Speed: 75 - Speeding
*/ 

#include <stdio.h>

int main()
{
	int v;
	scanf("%d", &v);
	if(v <= 60) {
		printf("Speed: %d - OK", v);
	}
	else {
		printf("Speed: %d - Speeding", v);
	}
	
	return 0;
} 
