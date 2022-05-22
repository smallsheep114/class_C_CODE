#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//int main()
//{
//	//1.输入一个字符串
//	char string[81] = "";
//	int i = 0,word = 0,num = 0;
//	char c = 0;
//	gets(string);
//	while ((c = string[i++]) != '\0')
//	{
//		if (c == ' ')
//			word = 0;//word == 0说明前面是空格，新单词的分隔
//		else if (word == 0)//前面是空格，后面不是空格时，开始算一个单词
//		{
//			word = 1;
//			num++;
//		}
//	}
//	printf("一共有%d个单词\n", num);
//	return 0;
//}

//输入十行杨辉三角
//#define ROW 10
//#define COL 10
//void Print_arr(int arr[ROW][COL])
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)//这里是j<=i
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
//	//1.将第一列，主对角线都赋值为1
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
//	//2.将其他部分的值算一算   上方的值，加上上左左侧的值
//	//先打印看看效果
//	Print_arr(arr);
//	return 0;
//}

int main()
{
	//1.找每行的最大值，并记录最大值那一列的下标
	int max = 0, max_col = 0, min = 0;
	int i = 0;
	int j = 0;
	int arr[4][4] = { {5,6,3,8},{3,4,4,9},{7,6,3,7},{5,8,3,2} };
	for (i = 0; i < 4; i++)
	{
		max = arr[i][0];//先将每行第一个元素给最大值
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