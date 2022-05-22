#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.
//int main()
//{
//	char a = 'a', b;
//	printf("%c,",++a);
//	printf("%c\n", b = a++);
//	return 0;
//}

//2.
//int main()
//{
//	int a = 2, b = -1, c = 2;
//	if (a < b)
//	{
//		if (b < 0)
//			c = 0;
//		else
//			c++;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//3.
//int main()
//{
//	int x = 1, a = 0, b = 0;
//	switch (x)
//	{
//	case 0:b++;
//	case 1:a++;
//	case 2:a++, b++;
//	}
//	printf("a = %d,b = %d\n", a, b);
//	return 0;
//}

//4.
//int main()
//{
//	int a, b, c = 246;
//	a = c / 100 % 9;
//	b = (-1) && (-1);
//	printf("%d,%d", a, b);
//	return 0;
//}


//5.
//int main()
//{
//	int arr[] = { 10,4,2,7,3,12,5,34,5,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	float sum = 0.0;
//	float average = 0.0;
//	for (int i = 0; i < sz; i++)
//	{
//		sum += arr[i];
//	}
//	average = sum / sz;
//	printf("The average is:%0.2f\n", average);
//	return 0;
//}

//6.
//int main()
//{
//	int arr[] = { 10,4,2,7,3,12,5,34,5,9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int min = arr[0];//注意min的值不可以随便赋，一般以数组首元素赋值
//	int position = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			position = i;
//		}
//	}
//	printf("The min is:%d,position is:%d", min, position);
//	return 0;
//}

//#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;//计算素数的个数
//	int flag = 1;
//	for (i = 101; i < 199; i += 2)
//	{
//		flag = 1;
//		int n = 0;
//		for (n = 2; n <= sqrt(i); n++)
//		{
//			if (i % n == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//		if (n > sqrt(i))
//		{
//			printf("%d ", i);
//			count++;
//		}
//		if ((count % 5 == 0)&&flag)
//		{
//			printf("\n");
//		}
//	}
//	return 0;
//}

//int main()
//{
//	for (int i = 0; i < 4; i++)
//	{//1.打印空格
//		int j = 0;
//		for (j = 0; j < 4 - i - 1; j++)
//		{
//			printf("  ");
//		}
//		//2.打印* 
//		for (j = 0; j < 5; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}

