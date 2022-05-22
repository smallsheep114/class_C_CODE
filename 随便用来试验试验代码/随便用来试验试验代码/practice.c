#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>


//
//int main()
//{
//	int a, b, c, M;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		M = a;
//	}
//	else if (b > a && b > c)
//	{
//		M = b;
//	}
//	else
//	{
//		M = c;
//	}
//	printf("Max = %d", M);
//	return 0;
//}

//char数组，输入
//
//int main()
//{
//	float F, C;
//	scanf("%f", &F);
//	C = (5.0 / 9) * (F - 32);
//	printf("华氏度：%.0f\n摄氏度：%.2f", F, C);
//	return 0;
//}


//int main()
//{
//	char a;
//	a = getchar();
//	putchar(a + 1);
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	int num = 0,a,b,c,sum;
//	scanf("%d", &num);
//	a = num / 100;
//	b = num / 10 % 10;
//	c = num % 10;
//	sum = a + b + c;
//	printf("%d\n", sum);
//	return 0;
//}

//int my_strlen(char* p)
//{
//	int count = 0;
//	while (*p)
//	{
//		if (*p != '\0')
//		{
//			count++;
//			p++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	char ch[20] = { 0 };
//	gets(ch);
//	int length = my_strlen(ch);
//	printf("%d", length);
//	return 0;
//}

//void Print(char* ptr, int len)
//{
//	
//		if (ptr + len-1)
//		{
//			printf("%s",ptr+len-1);
//		}
//	
//}
//int main()
//{
//	char ch[100] = { 0 };
//	gets(ch);
//	int len = 0;
//	scanf("%d", &len);
//	Print(ch, len);
//	return 0;
//}

void Swap(int* x, int* y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}
int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	Swap(&a, &b);
	printf("%d %d", a, b);
	return 0;
}
