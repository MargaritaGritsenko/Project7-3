#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RU");
	int s;
	printf("������� ����� �� ����� ���� ������ �������� 1 ������\n");
	scanf("%d", &s);
	int x, a, b, c, d, e, f, g;
	printf("�������  ����� �� 1 �� 365\n");
	scanf("%i", &x);
	a = x%7;
	b = ((x % 7) + 1)%7;
	c = ((x % 7) + 2) % 7;
	d = ((x % 7) + 3) % 7;
	e = ((x % 7) + 4) % 7;
	f = ((x % 7) + 5) % 7;
	g = ((x % 7) + 6) % 7;
	switch (s)
	{
	case 1:
		switch (a)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	case 2:
		switch (b)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 7:
			printf("�����������");
			break;
		}
		break;
	case 3:
		switch (c)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	case 4:
		switch (d)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	case 5:
		switch (e)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	case 6:
		switch (f)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	case 7:
		switch (g)
		{
		case 1:
			printf("�����������");
			break;
		case 2:
			printf("������");
			break;
		case 3:
			printf("�����");
			break;
		case 4:
			printf("�������");
			break;
		case 5:
			printf("�������");
			break;
		case 6:
			printf("�������");
			break;
		case 0:
			printf("�����������");
			break;
		}
		break;
	}
	return 0;
}