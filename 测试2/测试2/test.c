#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<Windows.h>
//#include<stdio.h>
//void change(int a[3][3])
//{
//	int i, j;
//	int b[3][3];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//			b[j][i] = a[i][j];
//	}
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", b[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int a[3][3] = { { 1,2,3 },{4,5,6},{7,8,9} };
//	printf("转换后：\n");
//	change(a);
//	return 0;
//}

//#include<stdio.h>
//void space(char a[5])
//{
//	int i = 0;
//	while (a[i] != '\n')
//	{
//		printf("%c", a[i]);
//		if (a[i + 1] == '\0')
//			break;
//		printf("%c", ' ');
//		i++;
//	}
//	printf("\n");
//}
//int main()
//{
//	char a[5] = "";
//	int i;
//	printf("请输入四个数字:");
//	for (i = 0; i < 5; i++)
//		scanf_s("%c", &a[i]);
//	space(a);
//	return 0;
//}


#include<stdio.h>

//sex F M
//sports  Y N
//diet Y N
//faHeight moHeight
//#include<stdio.h>
//int main()
//{
//	char sex, sports, diet;
//	float faHeight = 0.0, moHeight = 0.0;
//	float chHeight = 0.0;
//	printf("请输入孩子性别: F--女，M--男\n");
//	scanf("%c", &sex);
//	getchar();
//	printf("请输入是否喜爱体育锻炼：Y--爱，M--不爱\n");
//	scanf("%c", &sports);
//	getchar();
//	printf("请输入是否有良好的饮食习惯：Y--有，N--无\n");
//	scanf("%c", &diet);
//	getchar();
//	printf("请输入父母身高\n");
//	scanf("%f %f", &faHeight, &moHeight);
//	if (sex == 'M')
//		chHeight = (faHeight + moHeight) * 0.54;
//	else
//		chHeight = (faHeight * 0.93 + moHeight) / 2;
//	if (sports == 'Y')
//		chHeight *= (1 + 0.02);
//	if (diet == 'Y')
//		chHeight *= (1 + 0.015);
//	printf("你的冤种崽身高是:%.2f\n", chHeight);
//	return 0;
//}


//#include<stdio.h>
////x--   先使用x，x = x-1
////x++   先使用x，x = x+1
////--x  先x = x - 1  再使用x
////++x
//int main()
//{
//	int x = 0;
//	scanf("%d", &x);//x  = 5
//	if (--x < 5)
//		printf("%d\n", x);//x = 4
//	else//x = 4
//		printf("%d\n", ++x);//4
//
//	//x = 5
//	return 0;
//}

//0.1    1e-1
//-0.123    -123e-3      MeN    M,N--整数
//字符  a,b,c,d    'a'   ‘’   ''
//"字符串"    "abcdef"
//#include<stdio.h>
//int main()
//{
//	char ch = 'a';
//	char st[5] = "abcd";   
//	printf("%s\n", st);//st--数组名--首元素起始地址   
//	return 0;
//}a = 97   'a'   

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%d\n", arr);
//	return 0;
//}

//char ch = 97;
//char ch = 'a';
//int main()
//{
//	int a = 0;
//	int b = 0;
//	char c = 0;
//	scanf("%d%c%d", &a,&c ,&b);      // 97 a 89--错
//	//89
//	return 0;
//}

//int main()
//{
//
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int a = 1, b = 1, c = 1;
//	printf("%d,%d,%d\n", a, b, c);//++优先级高于+=,+=结合性是从右至左
//	a += b += ++c;
//	printf("%d,%d,%d\n", a, b, c);
//	a = a > b, b = (a<b || b>c), c++;
//	printf("%d,%d,%d\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int sum = 0;
//	for (int i = 1; i <= 100; i++)
//	{
//		sum += i;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 0 };
//	int i = 0;
//	for (i = 0; i < 20; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int min = arr[0], max = arr[0];
//	int min_line = 0, max_line = 0;
//	for (i = 0; i < 20; i++)
//	{
//		if (arr[i] < min)
//		{
//			min = arr[i];
//			min_line = i;
//		}
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			max_line = i;
//		}
//	}
//	printf("min = %d,是第%d个元素\nmax = %d,是第%d个元素\n", min, min_line + 1, max, max_line + 1);
//	return 0;
//}

//int main()
//{
//	int m = 0, n = 0,r = 0,m_n;//r--放余数
//	scanf("%d %d", &m, &n);
//	m_n = m * n;
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("最大公因数:%d\n", n);
//	printf("最小公倍数:%d\n", m_n/n);//两数乘积除以最大公因数，即可得到最小公倍数
//	return 0;
//}

//计算最大公因数的优化方法
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	printf("%d\n", m >> 1);
//	printf("%d\n", m);
//	return 0;
//}

//统计1900-2099有多少个闰年，并将所有闰年输出
//int main()
//{
//	int i = 0;
//	int count = 0;//计算闰年的个数
//	int flag = 0;
//	for (i = 1900; i <= 2099; i++)
//	{
//		flag = 0;
//		if ((i%4==0) && (i%100!=0) || (i%400==0))
//		{
//			count++;
//			flag = 1;
//			printf("%d ", i);
//			if (count % 5 == 0 && flag == 1)
//			{
//				printf("\n");
//			}
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}

//生成1-100的随机数
//int main()
//{
//	int ret = 0;
//	srand((unsigned int)time(NULL));//设置初始值
//	while (1)
//	{
//		ret = rand()% 100 + 1;
//		Sleep(100);
//		printf("%d ",ret);
//	}
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-4d", i, j, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}