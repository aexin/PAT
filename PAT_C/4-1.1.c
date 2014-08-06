//‘À––≥¨ ± 

#include <stdio.h>
#include <math.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	
	for(i = pow(10, n-1); i < pow(10, n); i++) {
		if(pow((i / 1000000), n)+pow((i / 100000 % 10), n)+pow((i / 10000 % 10), n)+pow((i / 1000 % 10), n)+pow((i / 100 % 10), n)+pow((i / 10 % 10), n)+pow((i % 10), n) == i)
		printf("%d\n", i);
	} 	
	
	return 0;
}
