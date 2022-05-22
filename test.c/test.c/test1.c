#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//（90 - （30*2））/2 –兔子数
//int main()
//{
//	int x, y;
//	int num = 0;//头
//	int num1 = 0;//脚
//	scanf("%d%d", &num, &num1);
//	y = (num1 - num * 2) / 2;
//	x = num - y;
//	printf("鸡：%d,兔子：%d\n", x, y);
//	return 0;
//}


//3.	打开程序 百鸡百钱.c，编程实现百钱买百鸡问题，公鸡一，
//值钱五；母鸡一，值钱三；小鸡三，值钱一。百钱买百鸡，问公鸡、母鸡、小鸡各几只。
//100-20公鸡  0-20
//100-33母鸡  0-33
//100-100小鸡 0-100

//int main()
//{
//    int  cocks, hens, chicks;
//    for (cocks = 0; cocks <= 20; cocks++)
//        for (hens = 0; hens <= 33; hens++)//hens-1 hen-2
//            for (chicks = 100; chicks >= 0; chicks--)//97
//            {
//                if (cocks * 5 + hens * 3 + chicks * 1 == 100)
//                {
//                    printf("cocks = %d,hens = %d,chicks = %d\n", cocks, hens, chicks);
//                    break;
//                }
//            }
//            return 0;
//}

//for(i = 0;i< 4;i++)--数组，数组下标  0   arr[0]  arr[1]   arr[2]
    //i = 0            //空格      *
//   *            3      4-0-1 4-i-1   2*i+1    
//  ***           2      4-1-1
// *****	      1      4-2-1
//*******     4          4-3-1

//上部分   下部分        7
// *****       3		i+1			2*(real_row-1-i)-1
//  ***
//   *
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);//输入的行   7
//	int real_row = (num + 1) / 2;
//	//1.打印上半部分
//	for (i = 0; i < real_row; i++)//行数
//	{//1.打印空格
//		int j = 0;
//		for (j = 0;j<real_row-i-1;j++)//-i
//			printf(" ");
//	//2.打印*
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	//2.打印下半部分
//	for (i = 0; i < real_row - 1; i++)
//	{
//		//1.打印空格
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//			printf(" ");
//		for (j = 0; j < 2 * (real_row - 1 - i) - 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//}



//90   2 3 3 5    90 = 2*3*3*5
//int main()
//{
//    int num = 0;
//    int i = 0;
//    scanf("%d", &num);
//    printf("%d=", num);
//    for (i = 2; i <= num; i++)
//    {
//        while (num % i == 0)//90
//        {
//            if (num == i)
//                printf("%d",i);
//            else
//            {
//                printf("%d*", i);
//            }
//            num = num / i;//45  15  5  
//        }
//        
//    }
//    return 0;
//}