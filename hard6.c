#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main(void) {
	char date[] = "2023-12-07 23:32:30";
	struct tm t = { 0, };

	t.tm_sec = atoi(&date[17]); date[16] = 0;
	t.tm_min = atoi(&date[14]); date[13] = 0;
	t.tm_hour = atoi(&date[11]); date[10] = 0;
	t.tm_mday = atoi(&date[8]);	date[7] = 0;
	t.tm_mon = atoi(&date[5]) - 1; date[4] = 0;
	t.tm_year = atoi(&date[0]) - 1900;

	mktime(&t);
	printf("struct tm ��ȯ �� ��¥:%4d-%02d-%02d %02d:%02d:%02d\n",t.tm_year+1900,t.tm_mon+1,t.tm_mday,
		t.tm_hour,t.tm_min,t.tm_sec);
}