#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//    int m, i, k;
//    printf("Enter an integer:\n");
//    scanf("%d", &m);
//    k = sqrt(m);
//    for ()//m-n֮����
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

//5  ����  1 5     2-����5֮��   
//2 3 4   5%2==
//8   1*8  2*4    8 = ����8*����8
//num = a * b     1*������


//1.���m��n֮�������
//int main()
//{
//	int i = 0, j = 0,m = 0,n = 0;
//	int count = 0;
//	scanf("%d%d", &m, &n);
//	for (i = m; i <= n; i++)//m��n֮����
//	{
//		//����i�Ƿ�Ϊ����
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

//2.����ͬ��
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


//3.�ټ���Ǯ����
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
//                    break;//�ڹ�����ĸ������ȵ�����£�ֻ��һ�����
//                }
//            }
//            return 0;
//}

//4.��ӡ����--�����²��ֽ��д�ӡ
//int main()
//{
//	int num = 0,row = 0;
//	int i = 0;
//	int j = 0;
//	printf("������һ������:\n");
//	scanf("%d", &num);
//	row = (num + 1) / 2;
//	//1.��ӡ�ϰ벿��
//	for (i = 0; i < row; i++)
//	{//1.��ӡ�ո�
//		for (j = 0; j < row - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n\n");
//	}
//	//2.��ӡ�ڶ�����
//	for (i = 0; i < row - 1; i++)
//	{//1.��ӡ�ո�
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * (row - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n\n");
//	}
//	return 0;
//}

//5.�������˻�  90��ӡ90 = 2*3*3*5   90�ܱ�2�������45   ��ӡһ��2
// 45���ܱ�2����  2���3   45%3==0  45���15  15%3==0
//int main()
//{
//	int num = 0,i = 0;
//	scanf("%d", &num);
//	printf("%d=", num);
//	for (i = 2; i <= num; i++)//��num��ÿ���������з���
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
