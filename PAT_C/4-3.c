/*����Ҫ��ͳ�Ƹ�������M��N�����������ĸ�������������͡�

�����ʽ��

������һ���и���2��������M��N��1<=M<=N<=500����

�����ʽ��

��һ����˳�����M��N�����������ĸ����Լ����ǵĺͣ����ּ��Կո�ָ���

����������
10 31
���������
7 143
*/ 

#include <stdio.h>
#include <math.h>

int main()
{
	int m,n;
	scanf("%d %d", &m, &n);
	
	if(m == 1)
		m = 2;
	int i;
	int cnt = 0;
	int sum = 0;
	for(i = m; i <= n; i++) {
		int k, j;
		k = sqrt(i);
		for(j = 2; j <= k; j++) {
			if(i % j == 0)
				break;
		}
		if(j > k) {
			cnt ++;
			sum += i;
		}
	}
	printf("%d %d", cnt, sum);
	
	return 0;
}
