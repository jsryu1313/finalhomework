#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#pragma warning(disable:4996)

void main(void) {
	char date[] = "2023-12-07";
	time_t now;
	struct tm t = { 0, };

	t.tm_mday = atoi(&date[8]);	date[7] = 0;
	t.tm_mon = atoi(&date[5]) - 1; date[4] = 0;
	t.tm_year = atoi(&date[0]) - 1900;

	now = mktime(&t);
	printf("2023-12-07을 time_t로 변환하면 %d입니다.\n", now);
}