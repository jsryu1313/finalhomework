#include<stdio.h>
#include<time.h>
#pragma warning(disable:4996)

void main(void) {
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "����:%A", &t); 
	puts(buff);
	strftime(buff, sizeof(buff), "����:%a", &t);
	puts(buff);
	printf("%d\n", t.tm_wday);
}