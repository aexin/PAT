/*��������[-2^31, 2^31]�ڵ�3������A��B��C�����ж�A+B�Ƿ����C��

�����ʽ��

�����1�и���������T(<=10)���ǲ��������ĸ�����������T�����������ÿ��ռһ�У�˳�����A��B��C���������Կո�ָ���

�����ʽ��

��ÿ�������������һ���������Case #X: true�����A+B>C�����������Case #X: false��������X�ǲ��������ı�ţ���1��ʼ����

����������
4
1 2 3
2 3 4
2147483647 0 2147483646
0 -2147483648 -2147483647
���������
Case #1: false
Case #2: true
Case #3: true
Case #4: false
*/ 

#include <stdio.h>

void print(int n);                                   //������� 

int main()
{
	int n;
	scanf("%d", &n);                                 //��������n��nΪ�����飩 
	print(n);
	
	return 0;
}

void print(int n)                                    //������� 
{
	int i, a[n];
	int b, c, d;
	for(i = 0;i < n;i++) {
		scanf("%d %d %d", &b, &c, &d);               //����a��b��c 
		//�жϱ��ʽ�Ƿ���ȷ����ȷa��i��=1�����a��i��=0.����������ǿ������ת������Ϊa,b,c�ķ�ΧΪ[-2^31]~[2^31]. 
		if(((double)b + (double)c) > d) {             
			a[i] = 1;
		}
		else {
			a[i] = 0; 
		}
//		if(a[i] > d) {
//			a[i] = 1;
//		}
//		else if(a[i] <= d) {
//			a[i] = 0;
//		}
	}
//	for(i = 0;i < n;i++) {
//		printf("a[%d] = %d ", i, a[i]);
//	} 
	for(i = 0;i < n;i++) {                          //����a��i����ֵ�����Ӧ��� 
		if(a[i] == 0) {
			printf("Case #%d: false\n", i+1);
		}
		else if(a[i] == 1) {
			printf("Case #%d: true\n", i+1);
		}
	}
}
