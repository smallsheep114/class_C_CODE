#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>

//int Max(int x, int y)
//{
//	return x > y ? x : y;
//}
//int main()
//{
//	int a, b, c, max;
//	scanf("%d%d%d", &a, &b, &c);
//	max = Max(Max(a, b), c);
//	printf("max = %d\n", max);
//	return 0;
//}

//int main()
//{
//	int m, n, r;
//	scanf("%d%d", &m, &n);
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
//	printf("m,n���������Ϊ->:%d\n", n);
//	return 0;
//}
//int main()
//{
//	float f = 64.0;//��Ҫϰ��д����int����
//	float c = 0.0;
//	c = (5.0 / 9) * (f - 32);
//	printf("���϶ȣ�%f\n���϶ȣ�%f\n", f, c);
//	return 0;
//}

//int main()
//{
//	float p0 = 1000.0, r1 = 0.0036, r2 = 0.0225, r3 = 0.0198,p1,p2,p3;//����Ķ��ű�ʾ���У��Ͳ���Ҫ��r1��r2��r3ǰ�������float��
//	p1 = p0 * (1 + r1);//����
//	p2 = p0 * (1 + r2);//һ���ڶ���
//	p3 = p0 * (1 + r3 / 2) * (1 + r3 / 2);//�����ΰ��궨��
//	printf("p1 = %f\np2 = %f\np3 = %f\n", p1, p2, p3);//��Ϊ�Ǵ���꣬��������Ҫ/2
//	return 0;
//}


//%u---��ӡ�޷���λ��ʮ����������Ϊû�з���λ
//%d---��ӡ�з���λ��ʮ���������з���λ
//Ŀǰ�����Դ�ӡ��ʽΪ׼��,printf����ʲô��ʽ�������Զ�ת����ʲô��ʽ
//int main()
//{
//	unsigned int piece1 = 50;
//	unsigned int piece2 = -1;
//	int piece3 = -1;
//	printf("%u\n", piece1);
//	printf("%d\n", piece1);
//
//	printf("%u\n", piece2);
//	printf("%d\n", piece2);
//
//	printf("%u\n", piece3);
//	printf("%d\n", piece3);
//	return 0;
//}

//int main()
//{
//	float a = 3.14159f;
//	long double b = 1.23l;
//	return 0;
//}

//int main()
//{
//	int i = 1, b = 2;
//	int b1 = b + (i++);
//	int b2 = b + (++i);//ע��b2 = 5,��һ����i++��i�����2
//	printf("b1 = %d\nb2 = %d\n", b1, b2);
//	return 0;
//}

//int main()
//{
//	char c1, c2;
//	c1 = 'A';
//	c2 = c1 + 32;//�ַ������ֵ����ַ�
//	printf("c2 = %c\n", c2);
//	printf("c2 = %d\n", c2);
//	return 0;
//}


//���������ε����
//int main()
//{
//	float a, b, c, C, s;//�������е�������
//	a = 3.67;
//	b = 5.43;
//	c = 6.21;
//	C = (a + b + c) / 2;//C�ǰ��ܳ�
//	s = sqrt(C * (C - a) * (C - b) * (C - c));
//	printf("�����ε�����ǣ�%f\n", s);//s�Ǹ����ͣ������Դ�ӡ���Σ���Ȼ���ܻ��������Ϊ���κ͸��������ڴ��еĴ洢��ʽ��һ��
//	return 0;
//}

//int main()
//{
//	double a, b, c, x1, x2, p, q, disc;//�б�ʽdiscriminant
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	p = (-b) / (2.0 * a);
//	q = sqrt(disc) / (2.0 * a);
//	x1 = p + q;
//	x2 = p - q;
//	printf("x1 = %7.2lf\nx2 = %7.2lf\n", x1, x2);
//	return 0;
//}


//����������hehe����Ϊ>���������int��unsigned int�Ƚ�ʱ��int����ת����unsigned int�ٽ��бȽϣ����ʱ��-1�޵д���
//int main()
//{
//	int a = -1;
//	unsigned int b = 1000;
//	if (a > b)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//��ӡʵ������ѧ������
//int main()
//{
//	printf("%e\n", 123.456);
//	printf("%13.2e\n", 123.456);
//	return 0;
//}


//%o---���ڴ浥Ԫ�еĸ�λ��ֵ���˽�����ʽ���
//%x---���ڴ浥Ԫ�еĸ�λ��ֵ��ʮ��������ʽ���   Ҳ����˵��ӡ���ǲ�����
//int main()
//{
//	int a = -1;
//	printf("%d\t%o\t%x\n%0o\t%0x\n", a, a, a,a,a);
//	return 0;
//}

//int main()
//{
//	/*double a, b, c;
//	scanf("a = %c,b = %c,c = %c", &a, &b, &c);
//	printf("%c%c%c", a, b, c);*/
//	int a;
//	char b;
//	float c;
//	/*scanf("%c%c%c", &a, &b, &c);*/
//	scanf("%d%c%f", &a, &b, &c);//1234a123o.26
//	//printf("%c%c%c", a, b, c);//%cֻ�����һ���ַ�
//	printf("%d\n%c\n%f\n", a, b, c);//a--1234,b--a,c--123.000000
//	return 0;
//}

//�ַ���������
//int main()
//{
//	/*char a = 'B', b = 'O', c = 'Y';*/
//	int a = 66, b = 79, c = 89;
//	//ִ���������ʱ��a,b,c���ᱻת�����ַ���ʱ��ASC||ֵ
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');//Ҫ�ӵ�����
//	return 0;
//}

//int main()
//{
//	
//	putchar('\101');//\xxx---ʮ��������xxx��Ӧ��ASC||ֵ��Ӧ���ַ�   101---65---A
//	putchar('\015');//\0xx---�˽�����xx��Ӧ��ASC||��ֵ��Ӧ���ַ�   015---13---�س�
//	return 0;
//}
//int main()
//{
//	char a, b, c;
//	a = getchar();
//	b = getchar();
//	c = getchar();
//	putchar(a);
//	putchar(b);
//	putchar(c);
//	putchar('\n');
//	return 0;
//}
//����Ƕ��
//int main()
//{
//	putchar(getchar());
//	putchar(getchar());
//	putchar(getchar());
//	putchar('\n');
//	return 0;
//}

//int main()
//{
//	char a, b;
//	a = getchar();
//	b = a + 32;
//	putchar(b);
//	putchar('\n');
//	return 0;
//}

//�ڶ�����ҵ
//int main()
//{
//	double p = 1.0, r = 0.07;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		p *= (1 + r);
//	}
//	printf("�����ˣ�%lf\n", p - 1);
//	return 0;
//}
//int main()
//{
//	int i = 0, j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%s", "  ");
//		}
//		printf("*****\n");
//	}
//	return 0;
//}
//���������������ڴ��еĴ洢��ʽ��һ��
//int main()
//{
//    float p = 9000.0;
//    float r = 0.035;
//    int n = 10;
//    printf("%f\n", pow(2.0, 10.0));//pow������������---double����
//    printf("%f\n", pow(p * (1 + r), 2));
//    return 0;
//}

//int main()
//{
//	float p0 = 1000, r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03, r = 0.0035, p1, p2, p3, p4, p5;//r--����
//	p1 = p0 * (1 + 5 * r5);//һ�δ�������
//	p2 = p0 * (1 + 2 * r2) * (1 + 3 * r3);//�ȴ����꣬�ٴ�����
//	p3 = p0 * (1 + 3 * r3) * (1 + 2 * r2);//�ִ����꣬�ٴ�����
//	p4 = p0 * (pow((1 + r1), 5.0));//������5��һ���
//	p5 = p0 * (pow((1 + r / 4), 4 * 5.0));
//	printf("p1 = %f\np2 = %f\np3 = %f\np4 = %f\np5 = %f\n", p1, p2, p3, p4, p5);
//	return 0;
//}

//int main()
//{
//	float d = 300000.0, p = 6000, r = 0.01,m;
//	m = log10(p / (p - d * r))/log10(1+r);
//	printf("��Ҫ%3.1f�²��ܻ���\n", m);
//	return 0;
//}

//int main()
//{
//	int c1, c2;
//	/*c1 = 97;
//	c2 = 98;*/
//	c1 = 197;
//	c2 = 198;
//	//��ʱ�����-59,-58���char��
//
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	printf("c1 = %d,c2 = %d\n", c1, c2);
//	return 0;
//}
//int�����ܱ�ʾ�ķ�Χ�����������Ϳ������197 198
//int main()
//{
//	int a,b;
//	float x, y;
//	char c1, c2;
//	scanf("a = %db = %d", &a, &b);
//	scanf("%f%f", &x, &y);
//	scanf("%c%c", &c1, &c2);//ע��������y�󲻿��Լӻس�����Ϊ��ѻس����뵽c1����
//	printf("a = %d,b = %d\n", a, b);
//	printf("x = %f,y = %f\n", x, y);
//	printf("c1 = %c,c2 = %c\n", c1, c2);
//	return 0;
//}

//int main()
//{
//	char c1, c2, c3, c4, c5,cc1,cc2,cc3,cc4,cc5;
//	int i = 0;
//	scanf("%c%c%c%c%c", &c1, &c2, &c3, &c4, &c5);
//	cc1 = c1 + 4;
//	cc2 = c2 + 4;
//	cc3 = c3 + 4;
//	cc4 = c4 + 4;
//	cc5 = c5 + 4;
//	putchar(cc1);
//	putchar(cc2);
//	putchar(cc3);
//	putchar(cc4);
//	putchar(cc5);
//	printf("\n%c%c%c%c%c\n", cc1, cc2, cc3, cc4, cc5);
//	return 0;
//}

//int main()
//{
//	char c[5] = { 0 };
//	char C[5] = { 0 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%c", &c[i]);
//		C[i] = c[i] + 4;
//	}
//	for (i = 0; i < 5; i++ )
//	{
//		printf("%c", C[i]);
//	}
//	return 0;
//}

//int main()
//{
//	float a = 3.14159, r = 1.5, h = 3, L1, S1, L2, S2, S3;
//	L1 = 2 * a * r;
//	S1 = a * r * r;
//	L2 = 4 * a * r * r;
//	S2 = (4 / 3) * a * pow(r, 3.0);
//	S3 = a * r * r * h;
//	printf("Բ�ܳ���%.2f,Բ�����%.2f\nԲ��������%.2f,Բ�������%.2f\nԲ�������%.2f\n", L1, S1, L2, S2, S3);
//	return 0;
//}


