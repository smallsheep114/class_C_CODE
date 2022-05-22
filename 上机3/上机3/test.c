#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int radius = 0;
//	double area = 0;
//	double pi = 3.1416;
//	for (radius = 1; radius <= 10; radius++)
//	{
//		area = pi * radius * radius;
//		if (area >= 120.0)//面积大于120跳出循环
//			break;
//		printf("square = %f\n", area);//打印面积小于120的面积
//	}
//	printf("这时的radius是:%d\n", radius - 1);//area对应的r
//	for (radius = 1; radius <= 10; radius++)
//	{
//		area = pi * radius * radius;
//		if (area < 120.0)//面积小于120，跳过本次循环
//			continue;
//		printf("square = %f\n", area);//打印面积大于120的面积
//	}
//	printf("这时的radius是:%d\n", radius - 1);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 2; i <= 1000; i++)//对1-1000每个数进行检验是否为完数
//	{
//		sum = 0;//每次检验都要对sum重新赋值,别放到下面那个循环里了
//		for (j = 1; j < i; j++)//因子不包括其本身
//		{
//			if (i % j == 0)
//			{
//				sum += j;
//			}
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}


//int main()
//{
//	int num0 = 1;
//	int num1 = 0;
//	for (int i = 9; i >= 1; i--)
//	{
//		num1 = 2 * (num0 + 1);
//		num0 = num1;
//	}
//	printf("%d\n", num1);
//	return 0;
//}

//int main()
//{
//	int val = 0;
//	printf("请输入你想去的楼层:\n");
//	
//	while (1)
//	{
//		scanf("%d", &val);//要放在循环里面
//		switch(val)
//		{
//			case 1:
//				printf("一层开:\n");
//				break;
//			case 2:
//				printf("二层开:\n");
//				break;
//			case 3:
//				printf("三层开:\n");
//				break;
//			default:
//				printf("该楼层不存在:\n");
//				continue;//跳过本次循环
//		}
//		break;//输入成功一次后，结束整个循环
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a[8] = { 2,3,5,7,9,11,15 };
//	int i, j, t;
//	printf("输入一个数：\n");
//	for (i = 0; i <= 7; i++)
//		printf("%d ", a[i]);
//	printf("\n");
//	scanf_s("%d", &j);
//	for (i = 0; i <= 7; i++)
//		if (j < a[i])
//		{
//			t = j;
//			j = a[i];
//			a[i] = t;
//		}
//	a[7] = j;
//	for (i = 0; i <= 7; i++)
//		printf("%d ", a[i]);
//	return 0;
//}