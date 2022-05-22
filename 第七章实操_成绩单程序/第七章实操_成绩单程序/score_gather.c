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
		printf("�ɼ�������\n");
	}
	else
	{//������������Ƴɼ�����size����Ӽ���
		printf("ѧ������\n");
		scanf("%s", &ps->date[ps->size].name);
		printf("��������Ƴɼ�������Ӣ�C����������ʷ\n");
		scanf("%d%d%d%d%d",
			&ps->date[ps->size].arr[math],
			&ps->date[ps->size].arr[english],
			&ps->date[ps->size].arr[C],
			&ps->date[ps->size].arr[phycics],
			&ps->date[ps->size].arr[history]);
	}
	ps->size++;
	printf("��ӳɹ�\n");
}

void Show_score(struct score_gather* ps)
{
	printf("\t%s\t%s\t%s\t%s\t%s\t%s\n", "����", "����", "Ӣ��", "C", "����", "����ʷ");
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


//����ÿ��ѧ��ƽ���ɼ�����������ʵ��
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
	printf("\t%s\t%s\n", "����", "ƽ���ɼ�");
	for (i = 0; i < ps->size; i++)
	{
		ret = Aver(ps, i);//Ҫ֪������ڼ���ѧ����ƽ���ɼ�i
		Print_Aver(ps, i, ret);//Ҫ֪����ӡ�ڼ���ѧ�������ֺ�ƽ���ɼ�
	}
}


//�������Ŀ��ƽ���ɼ�
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
	printf("\t%s\t%s\t%s\t%s\t%s\n", "����", "Ӣ��", "C", "����", "����ʷ");
	int i = 0;
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		printf("\t%d", ps->sco_sub[i]);
	}
	printf("\n");
}

void Aver_course(struct score_gather* ps)
{
	printf("\t\t%s\n", "ȫ��ѧ�����Ƶ�ƽ���ɼ�");
	int i = 0;
	int ret = 0;
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		 ps->sco_sub[i] = Aver_cou(ps, i);
	}
	Print_Aver_cou(ps, i, ret);
}


//�ҵ������--�ҵ�����ߵ��±�
void search_hig_cou(struct score_gather* ps,int sub)
{
	int i = 0;
	int k = 0;//k��¼������ߵ��±�
	int max = ps->date[0].arr[sub];//��¼������߷�
	for (i = 1; i < ps->size; i++)
	{
		if (max < ps->date[i].arr[sub])
		{
			k = i;//������ֻ���ҵ���һ��������߷ֵ��±�
			max = ps->date[i].arr[sub];
		}
	}
	int j = 0;//�ҳ����еĵ�������±�
	for (j = k; j < ps->size; j++)//jҪ��k����±꿪ʼ
	{
		if (ps->date[j].arr[sub] == max)
		{
			printf("\t%s\t%d\n", ps->date[j].name, ps->date[j].arr[sub]);//��ӡ���±�����ֺͳɼ�
		}
	}
	printf("\n");
	
}

void Search_hig(struct score_gather* ps)
{
	int i = 0;
	printf("������߷ֵ�ѧ�����ɼ�����\n");
	printf("˳��ֱ���\n������Ӣ�C����������ʷ\n");
	for (i = 0; i < MAX_SUBNUM; i++)
	{
		search_hig_cou(ps, i);
	}
}

