#include <stdio.h>
#include <string.h>
#define N 80

void del_str(char *str, char *s, char *resultstr)   //ɾ������ 
{
	int i, j, resultstr_len, s_len;                 //resultstr_lenΪresultstr�ַ����ĳ��ȣ�s_strΪs�ַ����ĳ��� 
	s_len = strlen(s);
	strcpy(resultstr, str);                         //��str������resultstr 
	char *p;                                         
	p = strstr(resultstr, s);                       //pָ��s��resultstr�г�������ַ� 
	resultstr_len = strlen(resultstr);
//	printf("resultstr_len = %d\n", resultstr_len);
	while(p != NULL) {                             
		for(i = p - resultstr; i < resultstr_len - s_len + 1; i++) {   
			resultstr[i] = resultstr[i + s_len];
		} 
		resultstr_len = strlen(resultstr);
	//	resultstr[resultstr_len] = '\0'; 
		p = strstr(resultstr, s);
	}
}

int main()
{
	char str[N+1], s[N+1], resultstr[N+1];     //strΪ��һ���ַ�����sΪ�ڶ����ַ�����resultstrΪɾ������ַ��� 
	gets(str);
	gets(s);
	del_str(str, s, resultstr);                //ɾ������ 
	printf("%s\n", resultstr);
	
	return 0;
}
