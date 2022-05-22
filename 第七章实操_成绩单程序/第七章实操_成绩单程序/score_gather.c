#define  _CRT_SECURE_NO_WARNINGS 1

#define  _CRT_SECURE_NO_WARNINGS 1
#include "score_gather.h"

void InItScore_gather(struct score_gather* ps)
{
	memset(ps->date, 0, sizeof(ps->date));
	ps->size = 0;
	memset(ps->sco_sub, 0, sizeof(ps->sco_sub));
}

void Add_score(struct score_gather* ps)
{
	if (ps->size == MAX_NUM)
	{
		printf("成绩单已满\n");
	}
	else
	{//添加姓名，各科成绩，在size处添加即可
		printf("学生姓名\n");
		scanf("%s", &ps->date[ps->size].name);
		printf("请输入各科成绩高数，英语，C，物理，近代史\n");
		scanf("%d%d%d%d%d",
			&ps->date[ps->size].arr[math],
			&ps->date[ps->size].arr[english],
			&ps->date[ps->size].arr[C],
			&ps->date[ps->size].arr[phycics],
			&ps->date[ps->size].arr[history]);
	}
	ps->size++;
	printf("添加成功\n");
}

void Show_score(struct score_gather* ps)
{
	printf("\t%s\t%s\t%s\t%s\t%s\t%s\n", "姓名", "高数", "英语", "C", "物理", "近代史");
	int i = 0;
	for (i = 0; i < ps->size; i++)
	{
		printf("\t%s\t%d\t%d\t%d\t%d\t%d\n",
			ps->date[i].name,
			ps->date[i].arr[math],
			ps->date[i].arr[english],
			ps->date[i].arr[C],
			ps->date[i].arr[phycics],
			ps->date[i].arr[history]);
	}
}


//计算每个学生平均成绩函数，单独实现
int Aver(struct score_gather* ps, int num)
{
	int sum = 0;
	int i = 0;
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		sum += ps->date[num].arr[i];
	}
	return (sum / MAX_SUBNUM);
}

void Print_Aver(struct score_gather* ps, int num, int aver_score)
{

	printf("\t%s\t", ps->date[num].name);
	printf("%d\n", aver_score);
}

void Aver_stu(struct score_gather* ps)
{
	int i = 0;
	int ret = 0;
	printf("\t%s\t%s\n", "姓名", "平均成绩");
	for (i = 0; i < ps->size; i++)
	{
		ret = Aver(ps, i);//要知道计算第几个学生的平均成绩i
		Print_Aver(ps, i, ret);//要知道打印第几个学生的名字和平均成绩
	}
}


//计算各科目的平均成绩
int Aver_cou(struct score_gather* ps,int sub)
{
	int i = 0;
	int sum = 0;
	for (i = 0; i < ps->size; i++)
	{
		sum = sum + ps->date[i].arr[sub];
	}
	return (sum / ps->size);
}

void Print_Aver_cou(struct score_gather* ps,int sub, int Aver_cou)
{
	printf("\t%s\t%s\t%s\t%s\t%s\n", "高数", "英语", "C", "物理", "近代史");
	int i = 0;
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		printf("\t%d", ps->sco_sub[i]);
	}
	printf("\n");
}

void Aver_course(struct score_gather* ps)
{
	printf("\t\t%s\n", "全体学生各科的平均成绩");
	int i = 0;
	int ret = 0;
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		 ps->sco_sub[i] = Aver_cou(ps, i);
	}
	Print_Aver_cou(ps, i, ret);
}


//找单科最高--找单科最高的下标
void search_hig_cou(struct score_gather* ps,int sub)
{
	int i = 0;
	int k = 0;//k记录单科最高的下标
	int max = ps->date[0].arr[sub];//记录单科最高分
	for (i = 1; i < ps->size; i++)
	{
		if (max < ps->date[i].arr[sub])
		{
			k = i;//但是这只是找到了一个单科最高分的下标
			max = ps->date[i].arr[sub];
		}
	}
	int j = 0;//找出所有的单科最高下标
	for (j = k; j < ps->size; j++)//j要从k这个下标开始
	{
		if (ps->date[j].arr[sub] == max)
		{
			printf("\t%s\t%d\n", ps->date[j].name, ps->date[j].arr[sub]);//打印该下标的名字和成绩
		}
	}
	printf("\n");
	
}

void Search_hig(struct score_gather* ps)
{
	int i = 0;
	printf("单科最高分的学生，成绩如下\n");
	printf("顺序分别是\n高数，英语，C，物理，近代史\n");
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		search_hig_cou(ps, i);
	}
}

