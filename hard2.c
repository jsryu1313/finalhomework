#include<stdio.h>
#include<time.h>
#pragma warning(disable:4996)
void main(void) {
	time_t now;
	struct tm t;
	char buff[100];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff),"������ ����� ��:%U��",&t);

	puts(buff);
}