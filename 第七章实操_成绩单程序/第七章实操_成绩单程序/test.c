#define  _CRT_SECURE_NO_WARNINGS 1
#include"score_gather.h"
void menu()
{
	printf("**************************************\n");
	printf("*****1.aver_stu         2.aver_course*\n");
	printf("*****3.search_hig       4.cal_var*****\n");
	printf("*****5.add_score        6.show_score**\n");
	printf("******           0.exit       ********\n");
}

int main()
{
	int input = 0;
	struct score_gather sco;
	double ret = 0.0;
	InItScore_gather(&sco);
	do
	{
		menu();
		printf("��ѡ��\n");
		scanf("%d", &input);
		switch (input)
		{
		case aver_stu:
			Aver_stu(&sco);//����ƽ��ֵ����ӡƽ��ֵ������һ��������ʵ�֣�
			break;
		case aver_course:
			Aver_course(&sco);
			break;
		case search_hig://�ҳ�������ߵ�ѧ���Ϳ�Ŀ
			Search_hig(&sco);
			break;
		case cal_var:
			 ret = Cal_val(&sco);
			 printf("ƽ���ֵķ���Ϊ%lf\n", ret);
			break;
		case add_score:
			Add_score(&sco);
			break;
		case show_score:
			Show_score(&sco);
			break;
		case exit:
			printf("�˳�����\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
	return 0;
}