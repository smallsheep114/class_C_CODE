#define  _CRT_SECURE_NO_WARNINGS 1

#include <string.h>
#include<stdio.h>
#include<math.h>

#define MAX_NAME 20
#define MAX_NUM 50
#define MAX_SUBNUM 5

struct score
{
	char name[MAX_NAME];
	int arr[MAX_SUBNUM];//学生的各科成绩
};

struct score_gather
{
	struct score date[MAX_NUM];
	int size;//记录共有多少位学生的成绩
	int sco_sub[MAX_SUBNUM];//记录各科的平均成绩
};

enum func_type
{
	exit,
	aver_stu,//计算学生成绩的平均数
	aver_course,//计算课程平均数
	search_hig,//找出单科最高分的学生姓名，课程
	cal_var,//计算方差
	add_score,
	show_score
};

enum subject
{
	math,
	english,
	C,
	phycics,
	history
};

void InItScore_gather(struct score_gather* ps);

void Add_score(struct score_gather* ps);//添加学生的姓名，成绩

void Show_score(struct score_gather* ps);//展示成绩表

void Aver_stu(struct score_gather* ps);//计算每个学生的平均成绩，并打印

void Aver_course(struct score_gather* ps);//计算各科平均成绩

void Search_hig(struct score_gather* ps);//找出单科最高分的学生

double Cal_var(struct score_gather* ps);//计算平均值的方差