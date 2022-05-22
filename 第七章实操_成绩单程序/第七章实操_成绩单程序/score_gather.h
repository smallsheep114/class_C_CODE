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
	int arr[MAX_SUBNUM];//ѧ���ĸ��Ƴɼ�
};

struct score_gather
{
	struct score date[MAX_NUM];
	int size;//��¼���ж���λѧ���ĳɼ�
	int sco_sub[MAX_SUBNUM];//��¼���Ƶ�ƽ���ɼ�
};

enum func_type
{
	exit,
	aver_stu,//����ѧ���ɼ���ƽ����
	aver_course,//����γ�ƽ����
	search_hig,//�ҳ�������߷ֵ�ѧ���������γ�
	cal_var,//���㷽��
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

void Add_score(struct score_gather* ps);//���ѧ�����������ɼ�

void Show_score(struct score_gather* ps);//չʾ�ɼ���

void Aver_stu(struct score_gather* ps);//����ÿ��ѧ����ƽ���ɼ�������ӡ

void Aver_course(struct score_gather* ps);//�������ƽ���ɼ�

void Search_hig(struct score_gather* ps);//�ҳ�������߷ֵ�ѧ��

double Cal_var(struct score_gather* ps);//����ƽ��ֵ�ķ���