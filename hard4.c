#include<stdio.h>
#include<time.h>
#pragma warning(disable:4996)

void main(void) {
	time_t now;
	struct tm t;
	char buff[100],AMPM[10];

	now = time(NULL);
	t = *localtime(&now);
	strftime(buff, sizeof(buff), "%Y-%m-%d %H:%S", &t);

	strftime(AMPM, sizeof(AMPM),"%p", &t);
	if (strcmp(buff, "AM"))strcpy(AMPM, "����");
	else if (strcmp(buff, "PM"))strcpy(AMPM, "����");
	strcat(buff, AMPM);
	puts(buff);
}