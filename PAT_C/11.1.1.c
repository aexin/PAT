#include <stdio.h>
#include <string.h>


/*struct birthday{
	int year;
	int month;
	int day;
}bir;*/

struct tong{
	char name[11];
	char birthday[11];
	char sex;
	char gnum[17];
	char num[17];
};

//void input();
//void output();

int main()
{
	int n, i;
	scanf("%d", &n);
	struct tong p[n];
	for(i = 0; i < n; i++) {
		scanf("%s %s %c %s %s", p[i].name, p[i].birthday, &p[i].sex, p[i].gnum, p[i].num);
		}
//	input(t, n);
//	output(p, n);
	int m, j;
	scanf("%d", &m);
	int a[m];
	for(j = 0; j < m; j++) {
		scanf("%d", &a[j]);
	}
	for(j = 0; j < m; j++) {
		if(a[j] >=0 && a[j] < n) {
		printf("%s %s %s %c %s\n", p[a[j]].name, p[a[j]].gnum, p[a[j]].num, p[a[j]].sex, p[a[j]].birthday);
		}
		else {
			printf("Not Found\n");
		}
	}	
	
	return 0;
}
