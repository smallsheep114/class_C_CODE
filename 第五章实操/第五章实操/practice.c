#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//int main()
//{
//	char c = 0;
//	for (; (c = getchar()) != '\n';)
//	{
//		printf("%c", c);
//	}
//	return 0;
//}

//#define SUM 100000
//int main()
//{
//	float total, aver, amount;
//	int i;
//	for (i = 1, total = 0; i <= 1000; i++)
//	{
//		printf("please enter amount:->");
//		scanf("%f", &amount);//����ʱ�������ûس������Զ����У�����Ҫ���Լ�����
//		total = total + amount;
//		if (total >= SUM)
//			break;
//	}
//	aver = total / i;
//	printf("i = %d\naver = %7.2f\n", i, aver);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//���Ƶ�����--��7
//����7��������7�ı�����������
//int main()
//{
//	for (int i = 1; i <= 100; i++)
//	{
//		if ((i % 7 == 0) || (i % 10 == 7) || (i / 10 == 7))
//			continue;
//		printf("%d ", i);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int row = 0;
//	int col = 0;
//	scanf("%d%d", &row, &col);
//	for (i = 1; i <= row; i++)
//	{
//		
//		for (j = 1; j <= col; j++)
//		{
//			//if ((i == 3) && (j == 1))
//			//break;//������3�У���һ����ֹj���Ƶ��Ǹ�ѭ��
//			/*if ((i == 3) && (j == 1))
//				continue;*/
//			printf("%-2d\t ", i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	double deno = 0.0, sum = 1.0, term;
//	int sign  = 1, i = 2;//�ӵڶ�������ʼ
//	
//	while (i)
//	{
//		sign = -sign;
//		deno = (2.0) * i - 1;
//		term = sign * (1.0 / deno);
//		if (fabs(term) < 1e-6)
//			break;
//		sum = sum + term;
//		i++;
//	}
//	sum = sum * (4.0);
//	printf("Բ����Ϊ:%10.8f\n",sum );
//	return 0;
//}

//int main()
//{
//	int sign = 1;
//	double pi = 0.0, n = 1.0, term = 1.0;
//
//	while (fabs(term) >= 1e-6)
//	{
//		pi = pi + term;
//		n = n + 2;
//		sign = -sign;
//		term = sign / n;
//	}
//	pi = pi * 4;
//	printf("pi = %10.8f\n", pi);
//	return 0;
//}


//���С������С������һ����
//int main()
//{
//	int a = 1, b = 1, c;
//	int num = 0;//����ڼ�������ֵ    3---���һ��  3-1
//	scanf("%d", &num);
//	int tmp = num;
//	while (tmp - 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		tmp--;
//	}
//	printf("��%d����Ϊ%d\n", num, c);
//	return 0;
//}

//int main()
//{
//	int f1 = 1, f2 = 1, f3;
//	int i = 0;
//	printf("%12d\n%12d\n", f1, f2);
//	for (i = 1; i <= 38; i++)
//	{
//		f3 = f1 + f2;
//		printf("%12d\n", f3);
//		f1 = f2;
//		f2 = f3;
//	}
//	return 0;
//}

//int main()
//{
//	int f1 = 1, f2 = 1;
//	int i = 0;
//	for (i = 1; i <= 20; i++)//һ�����������µ���
//	{
//		printf("%12d %12d", f1, f2);
//		if (i % 2 == 0)
//			printf("\n");
//		f1 = f1 + f2;
//		f2 = f1 + f2;
//	}
//	return 0;
//}

//int main()
//{
//	int i, n;
//	for (i = 101; i < 200; i += 2)
//	{
//		for (n = 2; n <= sqrt(i); n++)
//		{
//			if (i % n == 0)
//				break;
//		}
//		if (n > sqrt(i))
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}


//int main()
//{
//	char c = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//		{
//			c = c + 4;
//			if ((c > 'Z' && c <= 'Z' + 4) || (c > 'z'))
//			{
//				c = c - 26;
//			}
//		}
//		printf("%c", c);
//	}
//	return 0;
//}



//��ҵ
//2.����һ�������䵱����������
//int main()
//{
//	int sign = 1;
//	int count = 0;
//	double pi = 0.0, n = 1.0, term = 1.0;
//	while (fabs(term) >= 1e-6)
//	{
//		pi = pi + term;
//		sign = -sign;
//		n += 2;
//		term = sign * (1 / n);
//		count++;
//	}
//	pi = pi * 4;
//	printf("pi = %10.8f\n", pi);
//	printf("\nִ����ѭ����%d��\n", count);
//	return 0;
//}

//3
//int main()
//{
//	int m, n,r,j;
//	scanf("%d%d", &m, &n);
//	int M = m, N = n;//�����������ʱ����ı�m��n��ԭʼֵ��������������������������¼m,n�ĳ�ʼֵ
//	if (m < n)
//	{
//		int tmp = m;
//		m = n;
//		n = tmp;
//	}
//	while (r = m%n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("m,n���������Ϊ��%d\n", n);
//	printf("m,n����С������Ϊ��%d\n", n*(M/n)*(N/n));
//	return 0;
//}

//4
//int main()
//{
//	char a = getchar();
//	char b = getchar();
//	char c = getchar();
//	printf("a = %d,b = %d,c = %d\n", a, b, c);
//	return 0;
//}

//1.�ַ���a-z:97-122,A-Z:65-90       �ո�:32     ����:48-57   ����:else
//���⼼��ASC||�����ֵ
//int main()
//{
//	char c = 0;
//	int count_c = 0, count_n = 0, count_s = 0, count_o = 0;
//	while ((c = getchar()) != '\n')
//	{
//		if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
//			count_c++;
//		else if (c == 32)
//			count_s++;
//		else if (c >= 48 && c <= 57)
//			count_n++;
//		else
//			count_o++;
//	}
//	printf("�ַ���:%d\n�ո���:%d\n������:%d\n�����ַ���:%d\n", count_c, count_s, count_n, count_o);
//	return 0;
//}


//1.ʹ��getchar()�������ص�
//int main()
//{
//	char c = 0;
//	int count = 0;
//	while ((c = getchar()) != '\n')
//	{
//		count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	char ch[100] = { 0 };
//	gets(ch);
//	int len = strlen(ch);
//	printf("%d\n", len);
//	return 0;
//}




//5.
//int main()
//{
//	int num = 12345;
//	int n = 1;
//	while (num /= 10)
//	{
//		n++;
//	}
//	printf("%d\n", n);
//	return 0;
//}

//int main()
//{
//	int a, n,sum=0;
//	scanf("%d%d", &a, &n);
//	int i = a;//��a�����ʼֵ��i
//	while (n--)
//	{
//		sum = sum + a;
//		a += i * 10;
//		i = i * 10;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//��һ��д��
//int main()
//{
//	int a, n, i;
//	scanf("%d%d", &a, &n);
//	int sum = 0;
//	int pre_sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		pre_sum += a*pow(10,i);//aֵû�з����ı䣬һֱΪ2    ��һ��������2 22 222 2222 22222
//		sum = sum + pre_sum;//�ڶ��������������
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

//6.
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0.0;
//	double ret = 1.0;//ע��ret����ֵ����Ҫ��
//	scanf("%d", &n);
//	//�ж��ٴ����
//	for (i = 1; i <= n; i++)
//	{ 
//		ret = 1;
//		//����n�Ľײ�
//		for (int j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %.2lf\n", sum);//���̫���ˣ�����Ҫʹ�þ��ȸ��ߵ�double
//	return 0;
//}

//int main()
//{
//	int k = 0,a = 0,b = 0;//a��������k��b��������k*k
//	double sum = 0.0,c = 0.0;//c��������1.0/k
//	for (k = 1; k <= 100; k++)
//	{
//		a += k;
//		if(k<=50)
//		b += (k * k);
//		if(k<=10)
//		c += (1.0 / k);
//	}
//	sum = a + b + c;
//	printf("%.7f", sum);
//	return 0;
//}


//����1-100000��������

//int main()
//{
//	int n = 0;
//	
//	for (n = 1; n <= 100000; n++)
//	{
//		//1.����λ��
//		int count = 1;//count��������λ��,���������ֻ�ܷ���forѭ�����棬��Ϊÿ�μ���λ������Ҫ��count��ֵΪ1
//		int tmp = n;//��ʱ�����������nֵ
//		int sum = 0;//����������������λ�η���
//		while (tmp /= 10)
//		{
//			count++;
//		}
//		//2.��λ�η������
//		tmp = n;//����tmp��ֵ�������������з����˱仯�������ٴθ�ֵ
//		while (tmp)
//		{
//			sum += pow(tmp % 10, count);
//			tmp /= 10;
//		}
//		//3.��Ƚ�
//		if (n == sum)
//		{
//			printf("%d ", n);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 1000; i++)
//	{
//		//���µı��������������ڵڶ���forѭ����ˢ��
//		int j = 0;
//		int count = 0;//count�������������������������±꣬�����Ӵ��������
//		int sum = 0;
//		int arr[100] = { 0 };
//		for (j = 1; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				arr[count] = j;
//				count++;
//				sum += j;
//			}
//		}
//		if (i == sum)//����forѭ������
//		{
//			printf("%d its factors are:", i);
//			for (j = 0; j < count; j++)//���ﲻ���Ըı�ѭ������i����������i��ѭ����������j
//			{
//				printf("%d ", arr[j]);
//			}
//			printf("\n");
//		}
//	}
//	printf("\n");
//	return 0;
//}
//
//int main()
//{
//	float f1 = 1.0, f2 = 2.0,f3 = 0,term = 0,sum = 0;
//	for (int i = 0; i < 20; i++)
//	{
//		term = f2/f1;//����һ���ǰ��һ��
//		sum += term;
//		f3 = f1 + f2;
//		f1 = f2;
//		f2 = f3;
//	}
//	printf("sum = %f\n", sum);
//	return 0;
//}

//int main()
//{
//	float h = 100.0, sum_h = 100.0;
//	for (int i = 0; i < 10; i++)
//	{
//		h /= 2.0;
//		sum_h += (h * (2.0));//����+�½�������h*2.0
//	}
//	printf("sum_h = %f\nh = %f\n", sum_h, h);
//	return 0;
//}

//int main()
//{
//	int total = 1;
//	for (int i = 0; i < 9; i++)
//	{
//		total = (total + 1) * 2;
//	}
//	printf("total = %d\n", total);
//	return 0;
//}

//int main()
//{
//	float a, x0, x1;
//	scanf("%f", &a);
//	x0 = 10.0;//������ĳ�ֵ�Ƕ��٣������ᾭ�������ʽ��ʹ���ֵԽ��Խ�ӽ�sqrt(a)�����������ֵһ��ʼ�ͺܽӽ�sqrt(a)�Ļ��������������һЩ
//	x1 = (x0 + a / x0) / 2;
//	do
//	{
//		x0 = x1;
//		x1 = (x0 + a / x0) / 2;//ͨ�������ʽ���Ὣ�������x1����sqrt��a��Խ��Խ�ӽ�
//	} while (fabs(x0-x1)>=1e-5);
//	printf("%f��ƽ������+%f -%f", a, x1, x1);
//	return 0;
//}



//int main()
//{
//	double left = -10, right = 10, mid = 0;
//	double temp = 10;//temp������Ϊ0����Ȼһ��ʼѭ�����˳���
//	//ѭ���������м�ֵ�ĺ���ֵ����0
//
//	while (fabs(temp) > 1e-5)
//	{
//		mid = (left + right) / 2;
//		temp = 2 * pow(mid, 3) - 4 * pow(mid, 2) + 3 * mid - 6;
//		if (temp > 0)
//		{
//			right = mid;
//		}
//		else if (temp < 0)
//		{
//			left = mid;
//		}
//	}
//	printf("(-10,10)֮��ĸ�Ϊ%lf\n", mid);
//	return 0;
//}

//int main()
//{
//	int real_row, row;
//	scanf("%d", &real_row);
//	row = real_row / 2+1;
//	//1.��ӡ�ϰ벿��
//	for (int i = 0; i < row; i++)
//	{
//		//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < row - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * i + 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//2.��ӡ�°벿��
//	for (int i = 0; i < row - 1; i++)
//	{
//		//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * (row - 1 - i)-1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	char A, B, C;
//	for (A = 'X'; A <= 'Z'; A++)
//	{
//		for (B = 'X'; B <= 'Z'; B++)
//		{
//			for (C = 'X'; C <= 'Z'; C++)
//			{
//				if ((A!='X') + (C!='X'&&C!='Z') == 2)
//				{
//					if(A!=B&&A!=C&&B!=C)
//					printf("A�Ķ���->%c\nB�Ķ���->%c\nC�Ķ���->%c\n", A, B, C);
//				}
//			}
//		}
//	}
//	return 0;
//}