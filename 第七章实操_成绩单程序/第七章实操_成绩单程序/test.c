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
		printf("请选择\n");
		scanf("%d", &input);
		switch (input)
		{
		case aver_stu:
			Aver_stu(&sco);//计算平均值，打印平均值（用另一个函数来实现）
			break;
		case aver_course:
			Aver_course(&sco);
			break;
		case search_hig://找出单科最高的学生和科目
			Search_hig(&sco);
			break;
		case cal_var:
			 ret = Cal_val(&sco);
			 printf("平均分的方差为%lf\n", ret);
			break;
		case add_score:
			Add_score(&sco);
			break;
		case show_score:
			Show_score(&sco);
			break;
		case exit:
			printf("退出程序\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
	return 0;
}