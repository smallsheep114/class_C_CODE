#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int i = 10;
//	while (i)//0 1 2 3……10    10     while语句不加花括号，那么第一个语句算作是循环体
//	{
//		printf("hehe\n");
//		i--;//++   +1
//	}
//	
//	return 0;
//}

//原理：计算机如何判断真假
//0--假    非0---真
//9---真     8--真     0--假



//计算机如何表达真假      1--真
//表达式--值--2>1       1



//逻辑操作符   &&逻辑与     ||逻辑或     !逻辑非   

//实现打印1-10
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		//i == 4
//		i++;
//		if (i == 5)
//			continue;
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//操作符+ - * / % ==    =---赋值
//continue--下一步
//break---终止了整个循环

//continue,break---用在循环里面   switch()--开关

//int main()
//{
//	int i = 0;
//	scanf("%d", &i);
//	switch (i)//根据i的值，选择一个入口
//	{
//	case 1:
//		printf("hehe\n");
//		break;
//	case 2:
//		printf("haha\n");
//		break;
//	default :
//		printf("lala");
//	}
//	return 0;
//}

//逢7--遇到7，7的倍数，不能叫   1-100
//int main()
//{
//	int i = 1;
//	for (i = 1;i <= 100;i++)
//	{
//		if ((i % 7 == 0) || (i % 10 == 7) || (i / 10 % 10 == 7))
//			continue;
//			printf("%d ", i);
//			
//	}
//	return 0;
//}
//7的倍数   i%7==0
//个位是7   i%10==7
//十位是7   i/10%10==7   ||
//1234   123个位

//int main()
//{
//	int i = 1;
//	for (i= 1;i<=10;i++ )//for循环特点，三个表达式，省略
//	{
//		
//		printf("%d ", i);
//		
//	}
//	return 0;
//}
//第二个表达式省略，while(1)
//判断条件一直为真

//int main()
//{
//	int i = 11;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//do-while特点，至少，循环一次

//total 1020          day   0
//1020/2-2 508        day++        1
//fn+f10
//int main()
//{
//	int total = 1020, day = 0;//day--记录卖瓜的天数
//	while (total > 0)
//	{
//		total = total / 2 - 2;
//		day++;
//	}
//	printf("day = %d\n", day);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	printf("haha");
//	return 0;
//}

//int main()
//{
//	char ch[8];
//	scanf("%s", ch);//输入字符串，无论定义字符数组时有没有初始化，输入字符串都会加入\0
//	printf("%s\n", ch);
//	return 0;
//}


//int Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int(*p)(int, int) = &Add;//函数名
//	scanf("%d%d", &a, &b);
//	int c = p(a, b);
//	printf("%d\n", c);
//	return 0;
//}

//函数名   Add   &Add都可以用来调用函数   p = Add   p = &Add都可以用来调用函数

//输入china  和 yes  ，1.你可以用 char ch[2][10]来接收，再输出，2.或者用char* ch[2]来接收两个常量字符串的地址，再输出
// 方法二更省空间（常量字符串已经存在内存中，不需要你申请空间再去存放）
//若题目要求输入china yes字符串再输出，那么方法二行不通，你要申请空间放字符串

