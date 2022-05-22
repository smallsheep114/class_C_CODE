#define  _CRT_SECURE_NO_WARNINGS 1


//int main()
//{
//	printf("This is a C program.\n");
//	return 0;
//}


//int main()
//{
//	int a, b, sum;
//	a = 123;
//	b = 456;
//	sum = a + b;
//	printf("sum is %d\n", sum);
//	return 0;
//}


//int main()
//{
//	int Max(int x, int y);
//	int a, b, c;
//	scanf("%d%d", &a, &b);
//	c = Max(a, b);
//	printf("max = %d\n", c);
//	return 0;
//}
//
//int Max(int x, int y)
//{
//	int z;
//	if (x > y)
//		z = x;
//	else
//		z = y;
//	return z;
//}


//int main()
//{
//	int t = 1, i = 2;
//	while (i <= 5)
//	{
//		t = t * i;
//		i++;
//	}
//	printf("%d\n", t);
//	return 0;
//}

//sign deno--分母 term--每个数  sum--求和

//#include<stdio.h>
//int main()
//{
//	int sign = 1;
//	double deno = 2.0, term, sum = 1.0;
//	while (deno <= 100)
//	{
//		sign = (-1) * sign;
//		term = sign * (1 / deno);
//		sum = sum + term;
//		deno++;
//	}
//	printf("%f\n", sum);
//	return 0;
//}