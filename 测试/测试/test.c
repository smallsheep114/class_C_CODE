#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 10;
//	while (i)//0 1 2 3����10    10     while��䲻�ӻ����ţ���ô��һ�����������ѭ����
//	{
//		printf("hehe\n");
//		i--;//++   +1
//	}
//	
//	return 0;
//}

//ԭ�����������ж����
//0--��    ��0---��
//9---��     8--��     0--��



//�������α�����      1--��
//���ʽ--ֵ--2>1       1



//�߼�������   &&�߼���     ||�߼���     !�߼���   

//ʵ�ִ�ӡ1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//i == 4
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//������+ - * / % ==    =---��ֵ
//continue--��һ��
//break---��ֹ������ѭ��

//continue,break---����ѭ������   switch()--����

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)//����i��ֵ��ѡ��һ�����
//	{
//	case 1:
//		printf("hehe\n");
//		break;
//	case 2:
//		printf("haha\n");
//		break;
//	default :
//		printf("lala");
//	}
//	return 0;
//}

//��7--����7��7�ı��������ܽ�   1-100
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i % 7 == 0) || (i % 10 == 7) || (i / 10 % 10 == 7))
//			continue;
//			printf("%d ", i);
//			
//	}
//	return 0;
//}
//7�ı���   i%7==0
//��λ��7   i%10==7
//ʮλ��7   i/10%10==7   ||
//1234   123��λ

//int main()
//{
//	int i = 1;
//	for (i= 1;i<=10;i++ )//forѭ���ص㣬�������ʽ��ʡ��
//	{
//		
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//�ڶ������ʽʡ�ԣ�while(1)
//�ж�����һֱΪ��

//int main()
//{
//	int i = 11;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//do-while�ص㣬���٣�ѭ��һ��

//total 1020          day   0
//1020/2-2 508        day++        1
//fn+f10
//int main()
//{
//	int total = 1020, day = 0;//day--��¼���ϵ�����
//	while (total > 0)
//	{
//		total = total / 2 - 2;
//		day++;
//	}
//	printf("day = %d\n", day);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("haha");
//	return 0;
//}

//int main()
//{
//	char ch[8];
//	scanf("%s", ch);//�����ַ��������۶����ַ�����ʱ��û�г�ʼ���������ַ����������\0
//	printf("%s\n", ch);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int(*p)(int, int) = &Add;//������
//	scanf("%d%d", &a, &b);
//	int c = p(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//������   Add   &Add�������������ú���   p = Add   p = &Add�������������ú���

//����china  �� yes  ��1.������� char ch[2][10]�����գ��������2.������char* ch[2]���������������ַ����ĵ�ַ�������
// ��������ʡ�ռ䣨�����ַ����Ѿ������ڴ��У�����Ҫ������ռ���ȥ��ţ�
//����ĿҪ������china yes�ַ������������ô�������в�ͨ����Ҫ����ռ���ַ���

