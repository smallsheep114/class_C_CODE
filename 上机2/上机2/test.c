#define  _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d   ", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i, j,count = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)//�������if���棬��Ϊcount����5�ı���������ܶ࣬���Ի��ӡ�ܶ໻��
//			{
//				printf("\n");
//			}
//		}
//		
//	}
//	return 0;
//}

//������������С���������㷨��1.����������ˣ�2.�ٳ����������������������

//int main()
//{
//	int a, b, t, r, n;//r--������n--�����˻�
//	scanf("%d%d", &a, &b);
//	//1.����a��b�����ֵ
//	if (a < b)//a--�����ֵ
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	n = a * b;
//	while (r = a % b)//������rΪ0ʱ������b�����������
//	{
//		a = b;
//		b = r;
//	}
//	printf("a��b���������Ϊ:%d\na��b����С������Ϊ:%d\n", b, n / b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char choice;
//	puts("��ѡ����ʳ");//puts--����ַ���������������󻹻��Զ���ӡ����\n
//	puts("A -- ��ͣ���ͺ����");
//	puts("B -- ��ͺ����");
//	puts("C -- ���");
//	choice = getchar();
//	printf("��ѡ����ǣ���");
//	switch (choice)
//	{
//	case 'a':
//	case 'A':
//		printf("��ͣ�");
//	case 'b':
//	case 'B':
//		printf("��ͣ�");
//	case 'c':
//	case 'C':
//		printf("���");
//	default:
//		puts("��Ϊ�����ʳѡ��");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        k++;
    return 0;
}

