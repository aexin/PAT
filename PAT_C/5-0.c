/*����Ҫ���д����,�������� 2/1+3/2+5/3+8/5+... ��ǰN��֮�͡�ע������дӵ�2����ÿһ��ķ�����ǰһ��������ĸ�ĺͣ���ĸ��ǰһ��ķ��ӡ�

�����ʽ��

������һ���и���һ��������N��

�����ʽ��

��һ����������ֺ͵�ֵ����ȷ��С�����2λ����Ŀ��֤������������˫���ȷ�Χ��

����������
20
���������
32.66
*/ 

#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	
	double divident, divisor;                 //dividentΪ��ĸ��divisorΪ���� 
	double t, sum = 0;
	int i;
	divident = 2;
	divisor = 1;
	for(i = 1; i <= n; i++) {
		sum += divident / divisor;
		t = divident;
		divident = divident + divisor;
		divisor = t;
	}
	printf("%.2lf", sum);
	
	return 0;
} 
