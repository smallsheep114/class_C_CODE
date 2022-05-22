#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//    int m, i, k;
//    printf("Enter an integer:\n");
//    scanf("%d", &m);
//    k = sqrt(m);
//    for ()//m-n之间数
//    {
//        for (i = 2; i <= k; i++)
//            if (m % i == 0)break;
//    }
//    if (i > k)
//        printf("%d is a prime number\n", m);
//    else
//        printf("%d is not a prime number\n", m);
//    return 0;
//}

//5  素数  1 5     2-根号5之间   
//2 3 4   5%2==
//8   1*8  2*4    8 = 根号8*根号8
//num = a * b     1*它本身


//1.输出m，n之间的素数
//int main()
//{
//	int i = 0, j = 0,m = 0,n = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = m; i <= n; i++)//m与n之间数
//	{
//		//检验i是否为素数
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//				break;
//		}
//		if (j > sqrt(i))
//		{
//			count++;//1 2 3 4
//			printf("%4d ", i);
//			if (count % 4 == 0)
//				printf("\n");
//		}
//	}
//	return 0;
//}

//2.鸡兔同笼
//int main()
//{
//    int x, y;
//    for (x = 0; x <= 30; x++)
//    {
//        y = 30 - x;
//        if(2*x+4*y==90)    /* fill blank*/
//            printf("chicken num is %d,rabbit num is %d\n", x, y);
//    }
//    return 0;
//}


//3.百鸡百钱问题
//int main()
//{
//    int  cocks, hens, chicks;
//    for (cocks = 0; cocks <= 20; cocks++)
//        for (hens = 0; hens <= 33; hens++)
//            /*fill blank*/
//            for (chicks = 100; chicks >= 0; chicks--)
//            {
//                if (cocks * 5 + hens * 3 + chicks == 100)
//                {
//                    printf("cocks = %d,hens = %d,chick = %d\n", cocks, hens, chicks);
//                    break;//在攻击和母鸡都相等的情况下，只有一种情况
//                }
//            }
//            return 0;
//}

//4.打印菱形--分上下部分进行打印
//int main()
//{
//	int num = 0,row = 0;
//	int i = 0;
//	int j = 0;
//	printf("请输入一个奇数:\n");
//	scanf("%d", &num);
//	row = (num + 1) / 2;
//	//1.打印上半部分
//	for (i = 0; i < row; i++)
//	{//1.打印空格
//		for (j = 0; j < row - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n\n");
//	}
//	//2.打印第二部分
//	for (i = 0; i < row - 1; i++)
//	{//1.打印空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (j = 0; j < 2 * (row - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//5.质因数乘积  90打印90 = 2*3*3*5   90能被2整除变成45   打印一个2
// 45不能被2整除  2变成3   45%3==0  45变成15  15%3==0
//int main()
//{
//	int num = 0,i = 0;
//	scanf("%d", &num);
//	printf("%d=", num);
//	for (i = 2; i <= num; i++)//对num的每个因数进行分析
//	{
//		while (num % i == 0)
//		{
//			if (i != num)
//				printf("%d*", i);
//			else
//				printf("%d", i);
//			num /= i;
//		}
//	}
//	return 0;
//}
