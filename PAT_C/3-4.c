/*����Ҫ���д����һ���ٷ��Ƴɼ�ת��Ϊ����Ƴɼ���ת������

���ڵ���90��ΪA��
С��90�Ҵ��ڵ���80ΪB��
С��80�Ҵ��ڵ���70ΪC��
С��70�Ҵ��ڵ���60ΪD��
С��60ΪE��
�����ʽ��

������һ���и���1�������İٷ��Ƴɼ���

�����ʽ��

��һ���������Ӧ������Ƴɼ���

����������
90
���������
A
*/

#include <stdio.h>
int main()
{
	int n;
	scanf("%d", &n);
	
	switch(n / 10)
	{
		case 10:
		case 9: printf("A");break;
		case 8: printf("B");break;
		case 7: printf("C");break;
		case 6: printf("D");break;
		default: printf("E");break;
	}
	
	return 0;
}
