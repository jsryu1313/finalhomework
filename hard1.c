#include<stdio.h>
#include<time.h>
#pragma warning(disable:4996)
void main(void) {
	time_t now;
	struct tm t;

	now = time(NULL);
	t = *localtime(&now);

	printf("올해의 결과일수: %d\n", t.tm_yday);
}
