#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��90 - ��30*2����/2 �C������
//int main()
//{
//	int x, y;
//	int num = 0;//ͷ
//	int num1 = 0;//��
//	scanf("%d%d", &num, &num1);
//	y = (num1 - num * 2) / 2;
//	x = num - y;
//	printf("����%d,���ӣ�%d\n", x, y);
//	return 0;
//}


//3.	�򿪳��� �ټ���Ǯ.c�����ʵ�ְ�Ǯ��ټ����⣬����һ��
//ֵǮ�壻ĸ��һ��ֵǮ����С������ֵǮһ����Ǯ��ټ����ʹ�����ĸ����С������ֻ��
//100-20����  0-20
//100-33ĸ��  0-33
//100-100С�� 0-100

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

//for(i = 0;i< 4;i++)--���飬�����±�  0   arr[0]  arr[1]   arr[2]
    //i = 0            //�ո�      *
//   *            3      4-0-1 4-i-1   2*i+1    
//  ***           2      4-1-1
// *****	      1      4-2-1
//*******     4          4-3-1

//�ϲ���   �²���        7
// *****       3		i+1			2*(real_row-1-i)-1
//  ***
//   *
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);//�������   7
//	int real_row = (num + 1) / 2;
//	//1.��ӡ�ϰ벿��
//	for (i = 0; i < real_row; i++)//����
//	{//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0;j<real_row-i-1;j++)//-i
//			printf(" ");
//	//2.��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//			printf("*");
//		printf("\n");
//	}
//	//2.��ӡ�°벿��
//	for (i = 0; i < real_row - 1; i++)
//	{
//		//1.��ӡ�ո�
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