/*��������Ϸ����ϵͳ�������һ��100���ڵ����������û�����һ����������в²⣬��Ҫ���д�����Զ���������������ı��������бȽϣ�����ʾ���ˣ���Too big����������С�ˣ���Too small��������ȱ�ʾ�µ��ˡ�����µ�����������򡣳���Ҫ��ͳ�ƲµĴ��������1�β³���������ʾ��Bingo!�������3�����ڲµ�����������ʾ��Lucky You!�����������3�ε�����N��>3�������ڣ�������N�Σ��µ�����������ʾ��Good Guess!�����������N�ζ�û�вµ�������ʾ��Game Over������������������ڵ���N��֮ǰ���û�������һ��������Ҳ�����Game Over��������������

�����ʽ��

�����һ���и���2��������100�����������ֱ���ϵͳ��������������Լ��²��������N�����ÿ�и���һ���û������룬ֱ�����ָ���Ϊֹ��

�����ʽ��

��һ�������ÿ�β²���Ӧ�Ľ����ֱ������¶ԵĽ����Game Over���������

����������
58 4
70
50
56
58
60
-2
���������
Too big
Too small
Too small
Good Guess!
*/ 

#include <stdio.h>
 
int main()
{
	int number, n;
	scanf("%d %d", &number, &n);
	int i;
	int cnt = 0;
	int inp;
	for(i = 1; i < 100; i++)
	{
		scanf("%d", &inp);
		cnt++;
		if(inp < 0) {
			printf("Game Over");
			break;
		}
		if(inp == number) {
			if(cnt == 1) {
				printf("Bingo!");break;
			}
			else if(cnt == 2 || cnt == 3) {
				printf("Lucky You!");break;
			}
			else if(cnt > 3 && cnt <= n) {
				printf("Good Guess!");break;
			}
			else if(cnt > n) {
				printf("Game Over");break;
			}
		}
		else if(inp > number) {
				printf("Too big\n");
		}
		else if(inp < number) {
				printf("Too small\n");	
		}
	}
	
	return 0;
}
