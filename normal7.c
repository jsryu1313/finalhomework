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

	strcpy(ad.name, "ȫ�浿");
	strcpy(ad.phone, "02-1234-5678");
	strcpy(ad.address, "����ϵ� �ͻ�� �μ۵�");

	printf("�̸�: %s\n", ad.name);
	printf("��ȭ: %s\n", ad.phone);
	printf("�ּ�: %s\n", ad.address);
	
}