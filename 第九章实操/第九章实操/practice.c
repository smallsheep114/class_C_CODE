#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//������ѡ��-- ���������ģ�����   Ҫ����һ���ṹ������
//ʮ��ѡ��ÿ��ѡ��ͶһƱ�����ų���λ��ѡ�˵ĵ�Ʊ��
struct candidate
{
	char name[20];
	int count;//Ʊ��
};
//leader��һ�����飬�����ǽṹ������
//int main()
//{
//	struct candidate leader[3] = { {"����",0},{"����",0},{"����",0} };
//	char name[20] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//ʮλѡ��ͶƱ
//	{
//		scanf("%s", name);
//		for (j = 0; j < 3; j++)//�ж�ѡ��Ͷ������λ��ѡ��
//		{
//			if (strcmp(leader[j].name,name ) == 0)
//			{
//				leader[j].count++;
//				break;
//			}
//		}
//	}
//
//	printf("\nresult\n");
//	printf("\t��ѡ������\tƱ��\n");
//	for (i = 0; i < 3; i++)//��ӡ��λ��ѡ�˵���Ϣ
//	{
//		printf("\t%s\t%d\n", leader[i].name, leader[i].count);
//	}
//	return 0;
//}

//Ҫ��  ���ѧ����Ϣ--ѧ�ţ�����������   �������������������
//����˼·   1.ѡ��   2.������ͬ�Ľṹ���������ֱ���໥��ֵ�����ڱ任��
//struct student
//{
//	int code;
//	char name[20];
//	float score;
//};
//
//int main()
//{
//	struct student stu[5] = { {10101,"zhang",78},{10103,"wang",98.5},{10106,"li",86},{10108,"ling",73.5},{10110,"sun",100} };
//	const int n = 5;//�������
//	struct student temp = { 0 };//���ڽ���ѧ����Ϣ����ʱ�ṹ�����
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;//������ֵ���±�
//		for (j = i + 1; j < n; j++)
//			if (stu[k].score < stu[j].score)
//				k = j;//�ҵ�һ������ģ����µ��±����
//		//Ѱ����֮��ʼ������
//		if (k != i)
//		{
//			temp = stu[i];
//			stu[i] = stu[k];
//			stu[k] = temp;
//		}
//	}
//
//	//��ӡ
//	printf("\tѧ��\t����\t����\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("\t%d\t%s\t%.1f\n", stu[i].code, stu[i].name, stu[i].score);
//	}
//	return 0;
//}

//��λѧ������Ϣ��  -- ѧ��  ����  ���ſ�Ŀ�ĳɼ�
//Ҫ�����ƽ���ɼ���ߵ�ѧ����Ϣ������ƽ���ɼ�ҲҪ�����
//struct student
//{
//	int code;
//	char name[20];
//	float score[3];//�ɼ���.5�������ø�����
//	float aver;
//};
//void Input(struct student stu[],int n)//����ʵ�֣���ƽ���ɼ���������Ĺ���
//{
//	printf("��������λѧ����  ѧ��  ����  ���ſ��ŵĳɼ�\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%s%f%f%f", &stu[i].code, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
//		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
//	}//�����ַ���ʱ��stu[i].name�����ַ�����Ԫ�صĵ�ַ,����Ҫ�ټ�&
//
//}
//
//struct student Max(struct student stu[], int n)
//{ 
//	int i = 0;
//	int k = 0;//��¼ƽ���ɼ���ߵ�ѧ���±�
//	for (i = 1; i < n; i++)
//	{
//		if (stu[k].aver < stu[i].aver)
//		{
//			k = i;
//		}
//	}
//	return stu[k];
//}
//
//void Print(struct student stu_max)
//{
//	printf("ƽ���ɼ���ߵ�ѧ����ϢΪ\n");
//	printf("\t%s\t%s\t%s\t\t%s\n", "ѧ��", "����", "���ſγɼ�", "ƽ���ɼ�");
//	printf("\t%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", stu_max.code, stu_max.name, stu_max.score[0], stu_max.score[1], stu_max.score[3], stu_max.aver);
//}
//
////1.����ѧ����Ϣ   2.����ѧ����Ϣ  3.���ѧ����Ϣ
//int main()
//{
//	struct student stu[3], * p = stu;
//	const int n = 3;
//	Input(p,n);
//	Print(Max(p,n));//max���������ص���ƽ���ɼ���ߵ�ѧ����Ϣ,��������struct student
//	return 0;
//}


//������������
//ѧ��--ѧ�ţ��������Ա�ְҵ���༶
//��ʦ--ѧ�ţ��������Ա�ְҵ��ְ��//���Կ���ֻ��һ�ͬ��Ϊ�˽�ʡ�ռ䣬���ʱ�����ǾͿ���ʹ�ù�����
//struct//��Ϊ����ѧ��������ʦ��Ϣ���Ͳ���������
//{
//	int num;
//	char name[10];
//	char sex;//mail femail
//	char job;//s t
//	union
//	{
//		int class;//�༶
//		char position[10];//ְ��
//	}catagory;
//}person[2];
//
//int main()
//{
//	//������Ϣ
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("please enter the data of person\n");
//		scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);//�ַ�������Ԫ�ص�ַ����
//		if (person[i].job == 's')//�����ѧ��������༶
//		{
//			scanf("%d", &person[i].catagory.class);
//		}
//		else if (person[i].job == 't')
//		{
//			scanf("%s", person[i].catagory.position);
//		}
//		else
//		{
//			printf("error\n");
//		}
//	}
//
//	//�����Ϣ
//	printf("NO.  name      sex  job  class/position\n");
//	for (i = 0; i < 2; i++)
//	{
//		if (person[i].job == 's')
//		{
//			printf("%-6d%-10s%-4c%-4c%-10d\n",
//				person[i].num,
//				person[i].name,
//				person[i].sex,
//				person[i].job,
//				person[i].catagory.class);
//		}
//		else if (person[i].job == 't')
//		{
//			printf("%-6d%-10s%-4c%-4c%-10s\n",
//				person[i].num,
//				person[i].name,
//				person[i].sex,
//				person[i].job,
//				person[i].catagory.position);
//		}
//	}
//
//	return 0;


//int main()
//{
//	enum color { red, yellow, blue, white, black };
//	enum color i, j, k, pri;//i,j,k����ѭ����pri�����������������ɫ
//	int n = 0,loop = 0;
//	for (i = red; i <= black; i++)
//		for (j = red; j <= black; j++)
//			if(i!=j)
//				for (k = red; k <= black; k++)
//					if ((k != i) && (k != j))
//					{
//						n = n + 1;//��¼�ж����֣�ȡ��
//						printf("%-4d", n);
//						for (loop = 0; loop < 3; loop++)
//						{
//							switch (loop)
//							{
//							case 0:
//								pri = i; break;
//							case 1:
//								pri = j; break;
//							case 2:
//								pri = k; break;
//							}
//							switch (pri)
//							{
//							case red:
//								printf("%-10s", "red"); break;//�ַ�����""���ַ���''
//							case yellow:
//								printf("%-10s", "yellow"); break;
//							case blue:
//								printf("%-10s", "blue"); break;
//							case white:
//								printf("%-10s", "white"); break;
//							case black:
//								printf("%-10s", "black"); break;
//							default:
//								break;
//							}
//						}
//						printf("\n");
//					}
//	printf("total = %d��\n", n);
//	return 0;
//}
