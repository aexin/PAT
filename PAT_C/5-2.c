/*����һ�����������ÿ�����ֶ�Ӧ��ƴ����������Ϊ����ʱ���������fu���֡�ʮ�����ֶ�Ӧ��ƴ�����£�

0: ling
1: yi
2: er
3: san
4: si
5: wu
6: liu
7: qi
8: ba
9: jiu
�����ʽ��

������һ���и���һ���������磺 1234 ��

��ʾ�������������������������

�����ʽ��

��һ����������������Ӧ��ƴ����ÿ�����ֵ�ƴ��֮���ÿո�ֿ�����ĩû�����Ŀո��� yi er san si��

����������
-600
���������
fu liu ling ling
*/ 

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	if(n < 0) {
		printf("fu ");
		n = -n;
	}
	int t = n,mask = 1;
	while(t > 9) {
		t /= 10;
		mask *= 10;
	}
	//printf("mask=%d\n",mask);
	char *s[] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	int d;
	
	//printf("%d\n",n);
	while(mask > 0) {
		d = n / mask;
		printf("%s", s[d]);
		if(mask > 9) {
			printf(" ");
		}
		n %= mask;
		mask /= 10;
	}

	return 0;
}
