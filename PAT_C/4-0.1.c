#include <stdio.h>
int main()
{
	int n, i;
	scanf("%d", &n);
	
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", n, n+1, n+2, n, n+1, n+3, n, n+2, n+1, n, n+2, n+3, n, n+3, n+1, n, n+3, n+2);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", n+1, n, n+2, n+1, n, n+3, n+1, n+2, n, n+1, n+2, n+3, n+1, n+3, n, n+1, n+3, n+2);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", n+2, n, n+1, n+2, n, n+3, n+2, n+1, n, n+2, n+1, n+3, n+2, n+3, n, n+2, n+3, n+1);
	printf("%d%d%d %d%d%d %d%d%d %d%d%d %d%d%d %d%d%d\n", n+3, n, n+1, n+3, n, n+2, n+3, n+1, n, n+3, n+1, n+2, n+3, n+2, n, n+3, n+2, n+1);
	
	return 0;
} 
