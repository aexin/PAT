/*����һ����Ȼ��n���������λ����֮�ͣ��ú���ƴ��д���͵�ÿһλ���֡�

�����ʽ��ÿ�������������1��������������������Ȼ��n��ֵ�����ﱣ֤nС��1000��

�����ʽ����һ�������n�ĸ�λ����֮�͵�ÿһλ��ƴ�����ּ���1 �ո񣬵�һ�������һ��ƴ�����ֺ�û�пո�

����������
1234567890987654321123456789
���������
yi san wu
*/ 

#include <stdio.h>
#include <string.h>
#define N 1000

void read(int sum);                //������������ 

int main()
{
	char str[N];                   //Ҫ����һ��С��1000λ�����֣���Ȼ������int�������ﶨ��һ��str�ַ����������������� 
	gets(str);                     //ʹ��gets�������ȫ�����ֵ��ַ��� 
	int len;                       //len��ʾstr�ַ����ĳ��ȣ�Ҳ�������ֵĸ����� 
	len = strlen(str);             //ʹ��strlen��������ֱ�Ӳ��len�Ĵ�С 
	int i, sum = 0;                //sumΪ��λ���ֵĺ� 
	for(i = 0;i < len;i++) {       //�ӵ�һ�����ֿ�ʼ���������һ������ 
		sum += str[i] - '0';       //��ΪstrΪ�ַ����飬����str��i��-��0���͵���str��i�����ֵĴ�С 
	}
//	printf("%d\n", sum);
	
	read(sum);
	
	return 0;
} 

/*int sum( int n)
{
	int inp, sum = 0;
	do {
		inp = n % 10;
		sum += inp;
		n /= 10;
	} while(n > 0);
	
	return sum;
}*/

void read(int sum)                   //�������� 
{
	int i;
	 //��Ϊ����Ҫ��sum��ÿλ���Ĵ�С��maskΪ10�ģ�sum��λ������λ�����η���һ ��
	 //�磺sumΪ��λ����maskΪ10��sum/mask�͵���sum����λ ���ֳ�ʼΪһ 
	int mask = 1;                   
	int t = sum;
	while(t > 9) {           //tѭ����sum��λ����һ�� 
		t /= 10;
		mask *= 10;
	} 
	
	//����һ��ָ�����飬�����е�ÿһ��Ԫ�ض���ָ�� 
	char *c[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	//ѭ��sum��λ���Σ������ÿλ 
	do {
		i = sum / mask;
		printf("%s",c[i]);
		if(mask > 9) {
			printf(" ");
		}
		sum %= mask;
		mask /= 10;
	} while(mask > 0);
}
