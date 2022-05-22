#define  _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d   ", i,j,i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int i, j,count = 0;
//	for (i = 101; i < 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;
//			printf("%d\t", i);
//			if (count % 5 == 0)//如果放在if外面，因为count等于5的倍数的情况很多，所以会打印很多换行
//			{
//				printf("\n");
//			}
//		}
//		
//	}
//	return 0;
//}

//计算两个数最小公倍数的算法，1.将两个数相乘，2.再除以两个数的最大公因数即可

//int main()
//{
//	int a, b, t, r, n;//r--余数，n--两数乘积
//	scanf("%d%d", &a, &b);
//	//1.计算a，b的最大值
//	if (a < b)//a--最最大值
//	{
//		t = a;
//		a = b;
//		b = t;
//	}
//	n = a * b;
//	while (r = a % b)//当余数r为0时，除数b就是最大公因数
//	{
//		a = b;
//		b = r;
//	}
//	printf("a，b的最大公因数为:%d\na，b的最小公倍数为:%d\n", b, n / b);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	char choice;
//	puts("请选择膳食");//puts--输出字符串函数，而且最后还会自动打印换行\n
//	puts("A -- 早餐，午餐和晚餐");
//	puts("B -- 午餐和晚餐");
//	puts("C -- 晚餐");
//	choice = getchar();
//	printf("你选择的是：将");
//	switch (choice)
//	{
//	case 'a':
//	case 'A':
//		printf("早餐，");
//	case 'b':
//	case 'B':
//		printf("午餐，");
//	case 'c':
//	case 'C':
//		printf("晚餐");
//	default:
//		puts("作为你的膳食选择");
//	}
//	return 0;
//}

#include <stdio.h>
int main()
{
    int i = 0;
    int k = 0;
    for (i = 0, k = 0; k = 0; i++, k++)
        k++;
    return 0;
}

