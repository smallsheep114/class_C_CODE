#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int t = 1;
//	int i = 2;
//	while (i <= 5)
//	{
//		t = t * i;
//		i = i + 1;
//	}
//	printf("5! = %d\n", t);
//	return 0;
//}

//int main()
//{
//	double sum = 1;
//	int sign = 1;
//	double deno = 2;
//	double term = 0;
//	while (deno <= 100)
//	{
//		sign = (-1) * sign;
//		term = sign * (1 / deno);
//		sum = sum + term;
//		deno = deno + 1;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

//int Min(int x, int y)
//{
//	return x > y ? y : x;
//}
//
//int main()
//{
//	int m, n, t, min,i;//t用来接收公因数，max用来接收m，n的最大值,i用来循环
//	scanf("%d%d", &m, &n);
//	min = Min(m, n);
//	for (i = 2; i <= min; i++)
//	{
//		if (m % i == 0 && n % i == 0)
//		{
//			t = i;
//		}
//	}
//	printf("最大公因数就是:->%d\n", t);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int i = 10;
//	int max = 0;
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	max = arr[0];
//	for (i = 0; i < 9; i++)
//	{
//		if (arr[i] < arr[i + 1]);
//		{
//			max = arr[i + 1];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}