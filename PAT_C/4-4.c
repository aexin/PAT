/*猜数字游戏是令系统随机产生一个100以内的正整数，用户输入一个数对其进行猜测，需要你编写程序自动对其与随机产生的被猜数进行比较，并提示大了（“Too big”），还是小了（“Too small”），相等表示猜到了。如果猜到，则结束程序。程序还要求统计猜的次数，如果1次猜出该数，提示“Bingo!”；如果3次以内猜到该数，则提示“Lucky You!”；如果超过3次但是在N（>3）次以内（包括第N次）猜到该数，则提示“Good Guess!”；如果超过N次都没有猜到，则提示“Game Over”，并结束程序。如果在到达N次之前，用户输入了一个负数，也输出“Game Over”，并结束程序。

输入格式：

输入第一行中给出2个不超过100的正整数，分别是系统产生的随机数、以及猜测的最大次数N。随后每行给出一个用户的输入，直到出现负数为止。

输出格式：

在一行中输出每次猜测相应的结果，直到输出猜对的结果或“Game Over”则结束。

输入样例：
58 4
70
50
56
58
60
-2
输出样例：
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
