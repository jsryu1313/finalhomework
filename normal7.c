#include<stdio.h>
#include<string.h>
#pragma warning(disable : 4996)
struct tagAddress
{
	char name[30];
	char phone[20];
	char address[100];

};

void main(void) {
	struct tagAddress ad;

	strcpy(ad.name, "홍길동");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "전라북도 익산시 부송동");

	printf("이름: %s\n", ad.name);
	printf("전화: %s\n", ad.phone);
	printf("주소: %s\n", ad.address);
	
}