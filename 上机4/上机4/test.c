#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	//1.����һ���ַ���
//	char string[81] = "";
//	int i = 0,word = 0,num = 0;
//	char c = 0;
//	gets(string);
//	while ((c = string[i++]) != '\0')
//	{
//		if (c == ' ')
//			word = 0;//word == 0˵��ǰ���ǿո��µ��ʵķָ�
//		else if (word == 0)//ǰ���ǿո񣬺��治�ǿո�ʱ����ʼ��һ������
//		{
//			word = 1;
//			num++;
//		}
//	}
//	printf("һ����%d������\n", num);
//	return 0;
//}

//����ʮ���������
//#define ROW 10
//#define COL 10
//void Print_arr(int arr[ROW][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)//������j<=i
//		{
//			printf("%d ", arr[i][j]); 
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[ROW][COL] = { 0 };
//	//1.����һ�У����Խ��߶���ֵΪ1
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <=i; j++)
//		{
//			if ((j == 0) || (i == j))
//				arr[i][j] = 1;
//			else
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//	//2.���������ֵ�ֵ��һ��   �Ϸ���ֵ��������������ֵ
//	//�ȴ�ӡ����Ч��
//	Print_arr(arr);
//	return 0;
//}

int main()
{
	//1.��ÿ�е����ֵ������¼���ֵ��һ�е��±�
	int max = 0, max_col = 0, min = 0;
	int i = 0;
	int j = 0;
	int arr[4][4] = { {5,6,3,8},{3,4,4,9},{7,6,3,7},{5,8,3,2} };
	for (i = 0; i < 4; i++)
	{
		max = arr[i][0];//�Ƚ�ÿ�е�һ��Ԫ�ظ����ֵ
		for (i = 0; j < 4; j++)
		{
			if (arr[i][j] > max)
			{
				max_col = j;
			}
		}
	}
	return 0;
}