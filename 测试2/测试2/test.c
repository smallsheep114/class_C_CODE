#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//#include<stdio.h>
//void change(int a[3][3])
//{
//	int i, j;
//	int b[3][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			b[j][i] = a[i][j];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[3][3] = { { 1,2,3 },{4,5,6},{7,8,9} };
//	printf("ת����\n");
//	change(a);
//	return 0;
//}

//#include<stdio.h>
//void space(char a[5])
//{
//	int i = 0;
//	while (a[i] != '\n')
//	{
//		printf("%c", a[i]);
//		if (a[i + 1] == '\0')
//			break;
//		printf("%c", ' ');
//		i++;
//	}
//	printf("\n");
//}
//int main()
//{
//	char a[5] = "";
//	int i;
//	printf("�������ĸ�����:");
//	for (i = 0; i < 5; i++)
//		scanf_s("%c", &a[i]);
//	space(a);
//	return 0;
//}


#include<stdio.h>

//sex F M
//sports  Y N
//diet Y N
//faHeight moHeight
//#include<stdio.h>
//int main()
//{
//	char sex, sports, diet;
//	float faHeight = 0.0, moHeight = 0.0;
//	float chHeight = 0.0;
//	printf("�����뺢���Ա�: F--Ů��M--��\n");
//	scanf("%c", &sex);
//	getchar();
//	printf("�������Ƿ�ϲ������������Y--����M--����\n");
//	scanf("%c", &sports);
//	getchar();
//	printf("�������Ƿ������õ���ʳϰ�ߣ�Y--�У�N--��\n");
//	scanf("%c", &diet);
//	getchar();
//	printf("�����븸ĸ���\n");
//	scanf("%f %f", &faHeight, &moHeight);
//	if (sex == 'M')
//		chHeight = (faHeight + moHeight) * 0.54;
//	else
//		chHeight = (faHeight * 0.93 + moHeight) / 2;
//	if (sports == 'Y')
//		chHeight *= (1 + 0.02);
//	if (diet == 'Y')
//		chHeight *= (1 + 0.015);
//	printf("���ԩ���������:%.2f\n", chHeight);
//	return 0;
//}


//#include<stdio.h>
////x--   ��ʹ��x��x = x-1
////x++   ��ʹ��x��x = x+1
////--x  ��x = x - 1  ��ʹ��x
////++x
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);//x  = 5
//	if (--x < 5)
//		printf("%d\n", x);//x = 4
//	else//x = 4
//		printf("%d\n", ++x);//4
//
//	//x = 5
//	return 0;
//}

//0.1    1e-1
//-0.123    -123e-3      MeN    M,N--����
//�ַ�  a,b,c,d    'a'   ����   ''
//"�ַ���"    "abcdef"
//#include<stdio.h>
//int main()
//{
//	char ch = 'a';
//	char st[5] = "abcd";   
//	printf("%s\n", st);//st--������--��Ԫ����ʼ��ַ   
//	return 0;
//}a = 97   'a'   

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);
//	return 0;
//}

//char ch = 97;
//char ch = 'a';
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%d%c%d", &a,&c ,&b);      // 97 a 89--��
//	//89
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 1, c = 1;
//	printf("%d,%d,%d\n", a, b, c);//++���ȼ�����+=,+=������Ǵ�������
//	a += b += ++c;
//	printf("%d,%d,%d\n", a, b, c);
//	a = a > b, b = (a<b || b>c), c++;
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min = arr[0], max = arr[0];
//	int min_line = 0, max_line = 0;
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			min_line = i;
//		}
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			max_line = i;
//		}
//	}
//	printf("min = %d,�ǵ�%d��Ԫ��\nmax = %d,�ǵ�%d��Ԫ��\n", min, min_line + 1, max, max_line + 1);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0,r = 0,m_n;//r--������
//	scanf("%d %d", &m, &n);
//	m_n = m * n;
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("�������:%d\n", n);
//	printf("��С������:%d\n", m_n/n);//�����˻�����������������ɵõ���С������
//	return 0;
//}

//��������������Ż�����
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	printf("%d\n", m >> 1);
//	printf("%d\n", m);
//	return 0;
//}

//ͳ��1900-2099�ж��ٸ����꣬���������������
//int main()
//{
//	int i = 0;
//	int count = 0;//��������ĸ���
//	int flag = 0;
//	for (i = 1900; i <= 2099; i++)
//	{
//		flag = 0;
//		if ((i%4==0) && (i%100!=0) || (i%400==0))
//		{
//			count++;
//			flag = 1;
//			printf("%d ", i);
//			if (count % 5 == 0 && flag == 1)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//����1-100�������
//int main()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));//���ó�ʼֵ
//	while (1)
//	{
//		ret = rand()% 100 + 1;
//		Sleep(100);
//		printf("%d ",ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}