#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//三个候选人-- 张三，李四，王五   要创建一个结构体数组
//十个选民，每个选民投一票，最后放出各位候选人的的票数
struct candidate
{
	char name[20];
	int count;//票数
};
//leader是一个数组，类型是结构体类型
//int main()
//{
//	struct candidate leader[3] = { {"张三",0},{"李四",0},{"王五",0} };
//	char name[20] = "";
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)//十位选民投票
//	{
//		scanf("%s", name);
//		for (j = 0; j < 3; j++)//判断选民投的是哪位候选人
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
//	printf("\t候选人姓名\t票数\n");
//	for (i = 0; i < 3; i++)//打印三位候选人的信息
//	{
//		printf("\t%s\t%d\n", leader[i].name, leader[i].count);
//	}
//	return 0;
//}

//要求  五个学生信息--学号，姓名，分数   按分数将他们排序，输出
//解题思路   1.选择法   2.类型相同的结构体变量可以直接相互赋值（便于变换）
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
//	const int n = 5;//数组个数
//	struct student temp = { 0 };//用于交换学生信息的临时结构体变量
//	int i = 0;
//	int k = 0;
//	int j = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		k = i;//存放最大值的下标
//		for (j = i + 1; j < n; j++)
//			if (stu[k].score < stu[j].score)
//				k = j;//找到一个更大的，把新的下标给他
//		//寻找完之后开始，交换
//		if (k != i)
//		{
//			temp = stu[i];
//			stu[i] = stu[k];
//			stu[k] = temp;
//		}
//	}
//
//	//打印
//	printf("\t学号\t姓名\t分数\n");
//	for (i = 0; i < n; i++)
//	{
//		printf("\t%d\t%s\t%.1f\n", stu[i].code, stu[i].name, stu[i].score);
//	}
//	return 0;
//}

//三位学生的信息有  -- 学号  姓名  三门科目的成绩
//要求输出平均成绩最高的学生信息（包括平均成绩也要输出）
//struct student
//{
//	int code;
//	char name[20];
//	float score[3];//成绩有.5，咱们用浮点型
//	float aver;
//};
//void Input(struct student stu[],int n)//并且实现，将平均成绩计算出来的功能
//{
//	printf("请输入三位学生的  学号  姓名  三门科门的成绩\n");
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d%s%f%f%f", &stu[i].code, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
//		stu[i].aver = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3.0;
//	}//输入字符串时，stu[i].name就是字符串首元素的地址,不需要再加&
//
//}
//
//struct student Max(struct student stu[], int n)
//{ 
//	int i = 0;
//	int k = 0;//记录平均成绩最高的学生下标
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
//	printf("平均成绩最高的学生信息为\n");
//	printf("\t%s\t%s\t%s\t\t%s\n", "学号", "姓名", "三门课成绩", "平均成绩");
//	printf("\t%d\t%s\t%.1f\t%.1f\t%.1f\t%.1f\n", stu_max.code, stu_max.name, stu_max.score[0], stu_max.score[1], stu_max.score[3], stu_max.aver);
//}
//
////1.输入学生信息   2.处理学生信息  3.输出学生信息
//int main()
//{
//	struct student stu[3], * p = stu;
//	const int n = 3;
//	Input(p,n);
//	Print(Max(p,n));//max函数，返回的是平均成绩最高的学生信息,返回类型struct student
//	return 0;
//}


//输入和输出程序
//学生--学号，姓名，性别，职业，班级
//老师--学号，姓名，性别，职业，职务//可以看到只有一项不同，为了节省空间，这个时候我们就可以使用共用体
//struct//因为既是学生又是老师信息，就不用名字了
//{
//	int num;
//	char name[10];
//	char sex;//mail femail
//	char job;//s t
//	union
//	{
//		int class;//班级
//		char position[10];//职务
//	}catagory;
//}person[2];
//
//int main()
//{
//	//输入信息
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("please enter the data of person\n");
//		scanf("%d %s %c %c", &person[i].num, person[i].name, &person[i].sex, &person[i].job);//字符串，首元素地址即可
//		if (person[i].job == 's')//如果是学生，输入班级
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
//	//输出信息
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
//	enum color i, j, k, pri;//i,j,k用来循环，pri用来处理三个球的颜色
//	int n = 0,loop = 0;
//	for (i = red; i <= black; i++)
//		for (j = red; j <= black; j++)
//			if(i!=j)
//				for (k = red; k <= black; k++)
//					if ((k != i) && (k != j))
//					{
//						n = n + 1;//记录有多少种，取法
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
//								printf("%-10s", "red"); break;//字符串是""，字符是''
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
//	printf("total = %d种\n", n);
//	return 0;
//}
