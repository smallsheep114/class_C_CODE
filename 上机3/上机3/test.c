#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int radius = 0;
//	double area = 0;
//	double pi = 3.1416;
//	for (radius = 1; radius <= 10; radius++)
//	{
//		area = pi * radius * radius;
//		if (area >= 120.0)//�������120����ѭ��
//			break;
//		printf("square = %f\n", area);//��ӡ���С��120�����
//	}
//	printf("��ʱ��radius��:%d\n", radius - 1);//area��Ӧ��r
//	for (radius = 1; radius <= 10; radius++)
//	{
//		area = pi * radius * radius;
//		if (area < 120.0)//���С��120����������ѭ��
//			continue;
//		printf("square = %f\n", area);//��ӡ�������120�����
//	}
//	printf("��ʱ��radius��:%d\n", radius - 1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 2; i <= 1000; i++)//��1-1000ÿ�������м����Ƿ�Ϊ����
//	{
//		sum = 0;//ÿ�μ��鶼Ҫ��sum���¸�ֵ,��ŵ������Ǹ�ѭ������
//		for (j = 1; j < i; j++)//���Ӳ������䱾��
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int num0 = 1;
//	int num1 = 0;
//	for (int i = 9; i >= 1; i--)
//	{
//		num1 = 2 * (num0 + 1);
//		num0 = num1;
//	}
//	printf("%d\n", num1);
//	return 0;
//}

//int main()
//{
//	int val = 0;
//	printf("����������ȥ��¥��:\n");
//	
//	while (1)
//	{
//		scanf("%d", &val);//Ҫ����ѭ������
//		switch(val)
//		{
//			case 1:
//				printf("һ�㿪:\n");
//				break;
//			case 2:
//				printf("���㿪:\n");
//				break;
//			case 3:
//				printf("���㿪:\n");
//				break;
//			default:
//				printf("��¥�㲻����:\n");
//				continue;//��������ѭ��
//		}
//		break;//����ɹ�һ�κ󣬽�������ѭ��
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[8] = { 2,3,5,7,9,11,15 };
//	int i, j, t;
//	printf("����һ������\n");
//	for (i = 0; i <= 7; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	scanf_s("%d", &j);
//	for (i = 0; i <= 7; i++)
//		if (j < a[i])
//		{
//			t = j;
//			j = a[i];
//			a[i] = t;
//		}
//	a[7] = j;
//	for (i = 0; i <= 7; i++)
//		printf("%d ", a[i]);
//	return 0;
//}