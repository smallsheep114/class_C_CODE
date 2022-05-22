#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int main()
//{
//	double a, b, c, disc, x1, x2, p, q;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	if (disc < 0)
//	{
//		printf("方程无实数根\n");
//	}
//	else
//	{
//		p = -b / (2.0 * a);
//		q = sqrt(disc) / (2.0 * a);
//		x1 = p + q;
//		x2 = p - q;
//		printf("root1:%7.2f\nroot2:%7.2f\n", x1, x2);
//	}
//	return 0;
//}

//int main()
//{
//	double a, b, tmp;//a---放大值，b---放小值
//	scanf("%lf%lf", &a, &b);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	printf("%5.2f\n%5.2f", a, b);
//	return 0;
//}

//1.输入三个数
//2.比较  tmp
//3.输出
//从小到大输出  a---最小值，b---其次   c---放最大值
//int main()
//{
//	double a, b, c;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	if (a > b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a > c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b > c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%5.2f,%5.2f,%5.2f\n", a, b, c);
//	return 0;
//}

//int main()
//{
//	int a = 1, b = 2, c = 3, d = 4, m = 1, n = 1;
//	(m = a > b) && (n = c > d);
//	printf("m = %d\nn = %d\n", m, n);
//	return 0;
//}
//优先级由高到低，依次是
//!
//算术运算符
//关系运算符
//逻辑运算符  && ||
//赋值运算符

//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	ch = (ch >= 'A' && ch <= 'Z') ? ch + 32 : ch;
//	printf("%c\n", ch);
//	return 0;
//}
//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x > 0)
//		y = 1;
//	else if (x = 0)
//		y = 0;
//	else
//		y = -1;
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	scanf("%d", &x);
//	if (x >= 0)//if-else属于一个语句，所以不需要再加{}了
//		if (x > 0)
//			y = 1;
//		else
//			y = 0;
//	else
//		y = -1;
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	char grade;
//	scanf("%c", &grade);
//	printf("your score:");
//	switch (grade)//用多个语句时，switch和if一样，要加上语句块，{}
//	{
//	case 'A':
//		printf("85~100\n");
//		break;
//	case 'B':
//		printf("70~84\n");
//		break;
//	case 'C':
//		printf("60~69\n");
//		break;
//	case 'D':
//		printf("<60\n");
//		break;
//	default:
//		printf("enter date error\n");
//	}
//	return 0;
//}

//int main()
//{
//	int Add(int, int), Mul(int, int);
//	char ch;
//	int a, b;
//	scanf("%d%d",&a, &b);
//	//这样写其实不太好，因为输入两个数据时，再打一个回车，回车会赋值给ch
//	ch = getchar(ch);
//	switch (ch)
//	{
//	case 'a':
//	case 'A':
//		printf("sum = %d\n", Add(a, b));
//		break;
//	case 'b':
//	case 'B':
//		printf("acc = %d\n", Mul(a, b));
//		break;
//	default:
//		putchar('\a');
//	}
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}

//int Is_leap_year(int year)
//{
//	int leap;
//	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//	{
//		return 1;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	int year;
//	scanf("%d", &year);//是闰年返回1，不是闰年返回0
//	int leap = Is_leap_year(year);
//	if (leap)
//	{
//		printf("%d年是闰年\n", year);
//	}
//	else
//	{
//		printf("%d不是闰年\n", year);
//	}
//	return 0;
//}

//int main()
//{
//	double a, b, c, x1, x2, realpart, imagpart,disc;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	printf("This equation ");
//	disc = b * b - 4 * a * c;
//	if (fabs(a) < 1e-6)//将a的绝对值与1*10^-6进行比较
//	{
//		printf("is not a equation\n");
//	}
//	else
//	{
//		if (fabs(disc) <= 1e-6)//判别式等于0
//		{
//			printf("has two equal roots:%8.4f\n", (-b) / (2.0 * a));
//		}
//		else if(disc > 1e-6)//判别式大于0，不要在disc上加绝对值，不然复数根也属于这一类了
//		{
//			x1 = (-b + sqrt(disc)) / (2.0 * a);
//			x2 = (-b - sqrt(disc)) / (2.0 * a);
//			printf("has distinct real roots:%8.4f and %8.4f\n", x1, x2);
//		}
//		else
//		{
//			realpart = -b / (2.0 * a);
//			imagpart = sqrt(-disc) / (2.0 * a);
//			printf("has complex roots:\n");
//			printf("%8.4f+%8.4fi\n", realpart, imagpart);
//			printf("%8.4f+%8.4fi", realpart, imagpart);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	//&&--只要一个为0，那么结果就是0
//	//||--只要一个为1，结果就是1
//	int a = 3, b = 4, c = 5;
//	int x, y;
//	printf("%d\n", a + b > c && b == c);
//	printf("%d\n", a || b + c && b - c);
//	printf("%d\n", !(a > b) && !c || 1);
//	printf("%d\n", !(x = a) && (y = b) && 0);
//	printf("%d\n", !(a + b) + c - 1 && b + c / 2);
//	return 0;
//}

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, c,max;
//	scanf("%d%d%d", &a, &b, &c);
//	max = Max(c, Max(a, b));
//	printf("%d\n", max);
//}

//int main()
//{
//	int num = 0;
//	int flag = -1;
//	do
//	{
//		flag++;
//		if (flag != 0)
//		{
//			printf("输入错误，请重新输出->:");
//		}
//		scanf("%d", &num);
//	} while (num <= 0 || num >= 1000);
//	printf("%d\n%d\n", (int)sqrt(num),-(int)sqrt(num));//题目要求是平方根哦
//	return 0;
//}


//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//这种写法，最多判断两次，最少判断一次
//	if (x >= 1)
//	{
//		if (x >= 10)
//			y = 3 * x - 11;
//		else
//			y = 2 * x - 1;
//	}
//	else
//		y = x;
//	printf("y = %d\n", y);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	printf("enter x:\n");
//	scanf("%d", &x);
//	y = -1;
//	if (x != 0)
//	{
//		if (x > 0)
//			y = 1;
//	}//加一个语句块，就修改成功了,但一般别这么写
//	else
//		y = 0;
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int x, y;
//	printf("enter x:\n");
//	scanf("%d", &x);
//	y = 0;
//	if (x >= 0)
//	{
//		if (x > 0)
//			y = 1;
//	}//加一个语句块，就修改成功了，但一般别这么写
//	else
//		y = -1;
//	printf("x = %d,y = %d\n", x, y);
//	return 0;
//}

//int main()
//{
//	int score = 0;
//	int s = 0;
//	scanf("%d", &score);
//	s = score / 10;
//	switch (s)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		putchar('E');
//		break;
//	case 6:
//		putchar('D');
//		break;
//	case 7:
//		putchar('C');
//		break;
//	case 8:
//		putchar('B');
//		break;
//	case 9:
//	case 10:
//		putchar('A');
//		break;
//	}
//	return 0;
//}
//void Print_bite(num)
//{
//	if (num < 10)
//		printf("%d ",num);
//	else
//	{
//		Print_bite(num / 10);//要把Print_bite放在前面才是顺序打印每一位
//		printf("%d ", num % 10);
//	}
//}
//
//void Reverse(num)
//{
//	if (num < 10)
//		printf("%d ", num);
//	else
//	{
//		printf("%d", num % 10);
//		Reverse(num / 10);
//	}
//}
//int main()
//{
//	int num = 0;
//	int count = 1;//count--计数器，用来记住count是几位数
//	int t = 0;
//
//	//检验num的值是否符合条件
//	printf("enter num:->");
//	scanf("%d", &num);
//	while (num <= 0 || num > 99999)
//	{
//		printf("This is an error number\nenter again please:->\n");
//		scanf("%d",&num);
//	}
//
//
//	//计算，num是几位数
//	t = num;
//	while (t /= 10)//注意在这里的时候，我们改动了num的值，我们应该使用一个临时变量来代替num
//	{
//		count++;
//	}
//	printf("num是%d位数\n", count);
//
//
//	//分别输出每一位，用函数来实现
//	printf("num的每一位输出为：->\n");
//	Print_bite(num);
//	printf("\n");
//
//
//	//逆序输出各位数字，其实这个函数和Print_bite是好兄弟，只有一些地方不一样
//	Reverse(num);//其实这个函数
//	return 0;
//}

//利润--profit   奖金---bouns
//int main()
//{
//	double  bouns,bouns1,bouns2,bouns3,bouns4,bouns5,s;
//	int profit;
//	scanf("%d", &profit);
//	//将每一大档的奖金都存起来
//	bouns1 = 1.0 * 0.1;//10万
//	bouns2 = bouns1 + 1.0 * 0.075;//20万
//	bouns3 = bouns2 + 2.0 * 0.05;//40万
//	bouns4 = bouns3 + 2.0 * 0.03;//60万
//	bouns5 = bouns4 + 4.0 * 0.015;//100万
//	s = profit / 100000;//为了方便写，最后在乘上100000
//	if (s <=1 )
//		bouns = s * 0.1;
//	else if (s > 1 && s <= 2)
//		bouns = bouns1 + (s - 1.0) * 0.075;
//	else if (s > 2 && s <= 4)
//		bouns = bouns2 + (s - 2.0) * 0.05;
//	else if (s > 4 && s <= 6)
//		bouns = bouns3 + (s - 4.0) * 0.03;
//	else if (s > 6 && s <= 10)
//		bouns = bouns4 + (s - 6.0) * 0.015;
//	else if (s > 1000000)
//		bouns = bouns5 + (s - 10.0) * 0.01;
//	printf("total bouns are %f\n", bouns * 100000);
//	return 0;
//}

//int main()
//{
//	double  bouns, bouns1, bouns2, bouns3, bouns4, bouns5, s;
//	int profit;
//	scanf("%d", &profit);
//	//将每一大档的奖金都存起来
//	bouns1 = 1.0 * 0.1;//10万
//	bouns2 = bouns1 + 1.0 * 0.075;//20万
//	bouns3 = bouns2 + 2.0 * 0.05;//40万
//	bouns4 = bouns3 + 2.0 * 0.03;//60万
//	bouns5 = bouns4 + 4.0 * 0.015;//100万
//	if (profit >= 1000000)
//		s = 10;//为了方便写，最后在乘上100000
//	else
//		s = profit / 100000;
//
//	switch ((int)s)
//	{
//	case 0:
//		bouns = s * 0.1;
//		break;
//	case 1:
//		bouns = bouns1 + (s - 1) * 0.075;
//		break;
//	case 2:
//	case 3:
//		bouns = bouns2 + (s - 2.0) * 0.05;
//		break;
//	case 4:
//	case 5:
//		bouns = bouns3 + (s - 4.0) * 0.03;
//		break;
//	case 6:
//	case 7:
//	case 8:
//	case 9:
//		bouns = bouns4 + (s - 6.0) * 0.015;
//		break;
//	case 10:
//		bouns = bouns5 + (s - 10.0) * 0.01;
//		break;
//	default:
//		printf("This is an error profit date\n");
//	}
//	printf("total bouns are %f\n", bouns * 100000);
//	
//	return 0;
//}


//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void cmp_int(const void* e1, const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;//如果想从大到小排序，就e2 - e1即可
//}
//
//int main()
//{
//	int arr[] = {4,3,2,1};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]),cmp_int);
//	Print(arr, sz);
//	return 0;
//}



//void cmp_int(const void* e1, const void* e2)//注意函数的返回类型，和参数类型
//{
//    return *(int*)e1 - *(int*)e2;//根据情况而变
//    //强制类型转换后才能进行解引用
//    //注意，e1 - e2，从小到大排序
//    //e2 - e1,从大到小排序
//}
//int main()
//{
//    int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//    Print(arr, sz);
//    return 0;
//}


//
//int main()
//{
//	double a, b, c, d;//a--放第一象限的圆，b放第二象限的圆，c放第三象限的圆，d放第四象限的圆
//	double x, y;
//	int h = 0;
//	scanf("%lf%lf", &x, &y);
//	a = pow(x - 2, 2) + pow(y - 2, 2);
//	b = pow(x + 2, 2) + pow(y - 2, 2);
//	c = pow(x + 2, 2) + pow(y + 2, 2);
//	d = pow(x - 2, 2) + pow(y + 2, 2);
//	if (a <= 1 || b <= 1 || c <= 1 || d <= 1)
//	{
//		h = 10;
//	}
//	printf("x = %.2f,y = %.2f\nh = %d\n", x, y, h);
//	return 0;
//}


//
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for ( i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (i = 0; i < 3; i++)//一趟一趟地进行比较，要比较三趟
//	{
//		for (j = 0; j < 3 - i; j++)//每一趟有多少对数，进行比较
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
