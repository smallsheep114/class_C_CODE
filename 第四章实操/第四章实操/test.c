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
//		printf("������ʵ����\n");
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
//	double a, b, tmp;//a---�Ŵ�ֵ��b---��Сֵ
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

//1.����������
//2.�Ƚ�  tmp
//3.���
//��С�������  a---��Сֵ��b---���   c---�����ֵ
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
//���ȼ��ɸߵ��ͣ�������
//!
//���������
//��ϵ�����
//�߼������  && ||
//��ֵ�����

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
//	if (x >= 0)//if-else����һ����䣬���Բ���Ҫ�ټ�{}��
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
//	switch (grade)//�ö�����ʱ��switch��ifһ����Ҫ�������飬{}
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
//	//����д��ʵ��̫�ã���Ϊ������������ʱ���ٴ�һ���س����س��ḳֵ��ch
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
//	scanf("%d", &year);//�����귵��1���������귵��0
//	int leap = Is_leap_year(year);
//	if (leap)
//	{
//		printf("%d��������\n", year);
//	}
//	else
//	{
//		printf("%d��������\n", year);
//	}
//	return 0;
//}

//int main()
//{
//	double a, b, c, x1, x2, realpart, imagpart,disc;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	printf("This equation ");
//	disc = b * b - 4 * a * c;
//	if (fabs(a) < 1e-6)//��a�ľ���ֵ��1*10^-6���бȽ�
//	{
//		printf("is not a equation\n");
//	}
//	else
//	{
//		if (fabs(disc) <= 1e-6)//�б�ʽ����0
//		{
//			printf("has two equal roots:%8.4f\n", (-b) / (2.0 * a));
//		}
//		else if(disc > 1e-6)//�б�ʽ����0����Ҫ��disc�ϼӾ���ֵ����Ȼ������Ҳ������һ����
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
//	//&&--ֻҪһ��Ϊ0����ô�������0
//	//||--ֻҪһ��Ϊ1���������1
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
//			printf("����������������->:");
//		}
//		scanf("%d", &num);
//	} while (num <= 0 || num >= 1000);
//	printf("%d\n%d\n", (int)sqrt(num),-(int)sqrt(num));//��ĿҪ����ƽ����Ŷ
//	return 0;
//}


//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	scanf("%d", &x);
//	//����д��������ж����Σ������ж�һ��
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
//	}//��һ�����飬���޸ĳɹ���,��һ�����ôд
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
//	}//��һ�����飬���޸ĳɹ��ˣ���һ�����ôд
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
//		Print_bite(num / 10);//Ҫ��Print_bite����ǰ�����˳���ӡÿһλ
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
//	int count = 1;//count--��������������סcount�Ǽ�λ��
//	int t = 0;
//
//	//����num��ֵ�Ƿ��������
//	printf("enter num:->");
//	scanf("%d", &num);
//	while (num <= 0 || num > 99999)
//	{
//		printf("This is an error number\nenter again please:->\n");
//		scanf("%d",&num);
//	}
//
//
//	//���㣬num�Ǽ�λ��
//	t = num;
//	while (t /= 10)//ע���������ʱ�����ǸĶ���num��ֵ������Ӧ��ʹ��һ����ʱ����������num
//	{
//		count++;
//	}
//	printf("num��%dλ��\n", count);
//
//
//	//�ֱ����ÿһλ���ú�����ʵ��
//	printf("num��ÿһλ���Ϊ��->\n");
//	Print_bite(num);
//	printf("\n");
//
//
//	//���������λ���֣���ʵ���������Print_bite�Ǻ��ֵܣ�ֻ��һЩ�ط���һ��
//	Reverse(num);//��ʵ�������
//	return 0;
//}

//����--profit   ����---bouns
//int main()
//{
//	double  bouns,bouns1,bouns2,bouns3,bouns4,bouns5,s;
//	int profit;
//	scanf("%d", &profit);
//	//��ÿһ�󵵵Ľ��𶼴�����
//	bouns1 = 1.0 * 0.1;//10��
//	bouns2 = bouns1 + 1.0 * 0.075;//20��
//	bouns3 = bouns2 + 2.0 * 0.05;//40��
//	bouns4 = bouns3 + 2.0 * 0.03;//60��
//	bouns5 = bouns4 + 4.0 * 0.015;//100��
//	s = profit / 100000;//Ϊ�˷���д������ڳ���100000
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
//	//��ÿһ�󵵵Ľ��𶼴�����
//	bouns1 = 1.0 * 0.1;//10��
//	bouns2 = bouns1 + 1.0 * 0.075;//20��
//	bouns3 = bouns2 + 2.0 * 0.05;//40��
//	bouns4 = bouns3 + 2.0 * 0.03;//60��
//	bouns5 = bouns4 + 4.0 * 0.015;//100��
//	if (profit >= 1000000)
//		s = 10;//Ϊ�˷���д������ڳ���100000
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
//	return *(int*)e1 - *(int*)e2;//�����Ӵ�С���򣬾�e2 - e1����
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



//void cmp_int(const void* e1, const void* e2)//ע�⺯���ķ������ͣ��Ͳ�������
//{
//    return *(int*)e1 - *(int*)e2;//�����������
//    //ǿ������ת������ܽ��н�����
//    //ע�⣬e1 - e2����С��������
//    //e2 - e1,�Ӵ�С����
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
//	double a, b, c, d;//a--�ŵ�һ���޵�Բ��b�ŵڶ����޵�Բ��c�ŵ������޵�Բ��d�ŵ������޵�Բ
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
//	for (i = 0; i < 3; i++)//һ��һ�˵ؽ��бȽϣ�Ҫ�Ƚ�����
//	{
//		for (j = 0; j < 3 - i; j++)//ÿһ���ж��ٶ��������бȽ�
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
