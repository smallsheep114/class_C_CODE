#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//ʵ�ֺ�ŵ������
//̫�гɾ͸���
//void move(char x, char y)
//{
//	printf("%c --> %c\n", x, y);
//}
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	move(A, C);//��������Խ��һԽ��,��ӡ����������move��������ʵ��
//	else
//	{
//		hanoi(n - 1, A, C, B);//��n-1���̣���A�Ƶ�B
//		move(A, C);//��ʣ�������һ�����Ƶ���A�Ƶ�C
//		hanoi(n - 1, B, A, C);//��n-1���̣���B�Ƶ�C
//	}
//}
//
//int main()
//{
//	char A = 'A', B = 'B', C = 'C';
//	int num = 0;
//	printf("������A�����ж��ٸ�����\n");
//	scanf("%d", &num);
//	hanoi(num, A, B, C);//��ÿһ������ӡ����
//	return 0;
//}

//void sort(int arr[10])
//{
//	int i = 0, j = 0, min = 0,t = 0;//min-������¼��Сֵ���±�
//	for (i = 0; i < 9; i++)
//	{
//		min = i;//�տ�ʼ��Ϊ��arr[min]����С��
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[min] > arr[j])//����ҵ���һ����arr[min]��ҪС��
//			{
//				min = j;
//			}
//		}
//		t = arr[i], arr[i] = arr[min], arr[min] = t;//�����������Ҫ����ѭ�����棬��Ϊ��Ҫ�Ƚ���Сֵ���꣬����ٽ���
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//��������Ԫ��
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr);
//	printf("ͨ��ѡ������֮��\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//int max_arr(int arr[3][4])
//{
//	int i = 0, j = 0;
//	int max = arr[0][0];
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (max < arr[i][j])
//			{
//				max = arr[i][j];
//			}
//		}
//	}
//	return max;
//}
////���޷�ʵ���Ҷ�ά��������ֵ����������
//int main()
//{
//	int arr[3][4] = { {34,3,5,7},{2,34,6,8},{15,17,34,12} };
//	int i = 0;
//	printf("����Ԫ�ص����ֵΪ:%d", max_arr(arr));//����ֵint
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] == max_arr(arr))
//			{
//				printf("�±������%d   %d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}

//ʹ�þ�̬�ֲ�����--ʵ��n�Ľײ�
 //int f(int i)--���������������ٶ����
//{
//	static int ret = 1;
//	ret = ret * i;
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 1; i <= num; i++)
//	{
//		printf("%d! = %d\n", i,f(i));
//	}
//	return 0;
//}
//


// int a = 0;//static int a = 0---����д�Ļ�������a��ֻ����Դ�ļ�practice.c��ʹ����
//int main()
//{
//	int func(int m);
//	int b = 3;
//	int m = 0;
//	scanf("%d%d", &a, &m);
//	printf("%d * %d = %d\n",b,a,b*a );
//	printf("%d ** %d = %d\n", a, m, func(m));
//	return 0;
//}

//char* Del(char ch[20],int len)
//{
//	//1.�ҿո�
//	int i = 0;
//	int count = 1;
//	for ( i = 0; ch[i] != ' '; i++)
//	{
//		;
//	}
//	while (i<len)
//	{
//		if (ch[i + count] == ' ')
//		{
//			count += 1;
//		}
//		ch[i] = ch[i + count];
//		i++;
//	}
//	return ch;
//}
//
//int main()
//{
//	char ch[20] = "This is a C program";
//	int len = 0;
//	len = strlen(ch)+1;//������\0�ģ���������Ҫ��\0ҲҪ������
//	puts("ɾ��֮ǰ");
//	printf("%s", ch);
//	Del(ch,len);
//	puts("ɾ��֮��");
//	printf("%s",ch);
//	return 0;
//}


//����һ���ַ�����ɾ����Ҫɾ�����ַ������ɾ��ָ���ַ�����ַ���
//�����ַ���������ɾ���ַ�����������ӡ�ַ�����������main����ģ�廯

//void get_string(char* str)
//{
//	gets(str);
//}
//
//void del_string(char str[20], char ch)//important
//{//������Ҫ�����±꣬һ���±���һ�����ߵģ���һ���±����������ǵ�ָ���ַ���
//	int i = 0;
//	int j = 0; 
//	for (i = 0;str[i]!= '\0' ; i++)
//	{
//		if(str[i] != ch)
//		str[j++] = str[i];//���������ָ���ַ�����ôi��j�ľ���ͻ��������
//	}
//	//��������û�а�\0�Ź�ȥ��������ǻ���Ҫ��һ�����
//	str[j] = '\0';
//}
//
//void print_string(char* str)
//{
//	printf("%s\n", str);
//}
//
////����һ�δ���ͷǳ�����������
//int main()
//{
//	char str[20] = "";
//	char ch = 0;
//	printf("������һ���ַ���\n");
//	get_string(str);//�����ַ���
//	printf("��������Ҫɾ�����ַ�\n");
//	ch = getchar();
//	del_string(str,ch);//ɾ���ַ������ַ�
//	print_string(str);//����ַ���
//	return 0;
//}

//1.max--�������

//int gre_com_fac(int x, int y)
//{
//	int r = 0;
//	if (x < y)
//	{
//		int t = x;
//		x = y;
//		y = t;
//	}
//	while (r = x % y)
//	{
//		x = y;
//		y = r;
//	}
//	return y;
//}
//
//int low_com_mul(int x, int y, int n)
//{
//	return(x * y) / n;
//}
//
//int main()
//{
//	int a = 0, b = 0;
//	scanf("%d%d", &a, &b);
//	int max = gre_com_fac(a, b);
//	int min = low_com_mul(a, b,max);
//	printf("���������%d\n", max);
//	printf("��С��������%d\n", min);
//	return 0;
//}

//2.�������������ʵ�ֶ�Ԫһ�η��̵����
//void resolve1(double disc,double a,double b)
//{
//	
//	double p = -b / (2 * a);
//	double q = sqrt(disc) / (2 * a);
//	double x1 = p + q;
//	double x2 = p - q;
//	printf("���̵�����ʵ����Ϊ%.2f\t%.2f\n",x1,x2);
//}
//
//void resolve2(double a, double b)
//{
//	double x1 = -b / (2 * a);
//	double x2 = x1;
//	printf("���̵��������ʵ����Ϊ%.2f\t%.2f\n", x1, x2);
//}
//
//void resolve3(double disc, double a, double b)
//{
//	double p = -b / (2 * a);
//	double q = sqrt(-disc) / (2 * a);
//	printf("���̵�����������Ϊ%.2f+%0.2fi\t%.2f-%0.2fi\n", p,q,p,q);
//}
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0;
//	double disc = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	if (disc > 1e-6)
//		resolve1(disc,a,b);//����0�������˳��ѽ��Ҳ�������
//	else if (fabs(disc) < 1e-6)
//		resolve2(a,b);//����0�����
//	else
//		resolve3(disc,a,b);//С��0�����
//	return 0;
//}

//���һ���������ж��Ƿ�Ϊ����������Ƿ���1��������Ƿ���0
//#include <stdio.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i < sqrt(n); i++)
//	{
//		if (n % i == 0)
//			break;
//	}
//	if (i > sqrt(n))
//		return 1;
//	else
//		return 0;
//}
//
//int main()
//{
//	int num = 0;
//	scanf("%d", &num);
//	int ret = is_prime(num);
//	if (ret == 1)
//		printf("%d������\n",num);
//	else
//		printf("%d��������\n",num);
//	return 0;
//}


//4.���һ��������������ά�����������
//�����������n*n���飬ͨ���ǣ����к��ж�Ӧ���ǲ��ֽ��н�������(ֵ����һ�ξ͹���)
//void print_arr(int arr[3][3])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//void Swap_arr(int arr[3][3])
//{
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)//Ҫд��j<i����������������һ��������һ�Σ����д��j<3�Ǿ��ֽ�����ȥ��
//		{
//			if (i != j)
//			{
//				int tmp = arr[j][i];
//				arr[j][i] = arr[i][j];
//				arr[i][j] = tmp;
//			}
//		}
//	}
//}
//int main()
//{
//	
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	printf("���н���֮ǰ������\n");
//	print_arr(arr);
//	Swap_arr(arr);//���ŶԽ��߶ԳƵĽ��н�����ֻ����һ��
//	printf("���н���֮�������\n");
//	print_arr(arr);
//	return 0;
//}

//5.���һ��������ʹ���ַ�������

//void Reverse(char ch[20])
//{
//	int len = strlen(ch);
//	int left = 0;
//	int right = len - 1;
//	while (left < right)
//	{
//		char tmp = ch[left];
//		ch[left] = ch[right];
//		ch[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char ch[20] = "";
//	gets(ch);
//	Reverse(ch);
//	puts(ch);
//	return 0;
//}

//#include<assert.h>
// 6.ʵ���Լ���strcat����
//char* my_strcat(char* dest, const char* src)
//{
//	char* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1.��dest\0��λ��
//	while (*dest++)//�ո�spaceҲ���棬����\0
//	{
//		;
//	}
//	dest--;
//	while (*dest++ = *src++)//������д��������\0Ҳ������ȥ
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char ch[100] = "";
//	char ch1[20] = "";
//	gets(ch);
//	gets(ch1);
//	my_strcat(ch, ch1);
//	puts(ch);
//}


//��Ԫ����ĸ�ķ���
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char sentence[30] = "jack is a hansome boy";
//    char vowels[6] = "aeiou";
//    char* pch = NULL;
//    pch = strpbrk(sentence,vowels);//��sentence�ַ���������û�к�vowels����ƥ����ַ�������оͷ�����sentence��һ����ƥ��ĵ�ַ
//    while (pch != NULL)
//    {
//        printf("%c ",*pch);
//        pch = strpbrk(pch + 1,vowels);
//    }
//        printf("\n");
//}

//7.��һ���ַ�����Ԫ����ĸ���Ƶ���һ���ַ������У����������һ���ַ���
#include<assert.h>
//char* str_vowels_cpy(const char* src, char* dest,char* vowels)
//{
//	char* start = dest;
//	assert(src != NULL);
//	assert(src != NULL);
//	while (*dest++)
//	{
//		;
//	}
//	dest--;//�ҵ�dest\0��λ��
//	//1.��src�е�Ԫ���ַ� strpbrk
//	char* pch = NULL;
//	pch = strpbrk(src, vowels);
//	while (pch != NULL)
//	{
//		*dest++ = *pch;
//		pch = strpbrk(pch + 1, vowels);
//	}
//	return start;
//}
//
//int main()
//{
//	char arr1[30] = "";
//	char arr2[30] = "";
//	char vowels[6] = "aeiou";
//	gets(arr1);
//	gets(arr2);
//	str_vowels_cpy(arr1, arr2,vowels);
//	puts(arr2);
//	return 0;
//}
#include<stdio.h>
//void scanf_arr(int arr[4])
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//}
////�����ǵ�ֵת��ΪASCII��ֵ
//void int_char_shift(int arr[4])
//{
//	int i = 0;
//	char c = '0';
//	for (i = 0; i < 4; i++)
//	{
//		arr[i] = (int)c + arr[i];
//	}
//}
//
//void print_arr(int arr[4])
//{
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%c ", (char)(arr[i]));
//	}
//
//}
//int main()
//{
//	int arr[4] = { 0 };
//	scanf_arr(arr);
//	int_char_shift(arr);
//	print_arr(arr);
//	return 0;
//}

//#include<ctype.h>
//int lower = 0, upper = 0, space = 0, punct = 0;
//
//void sta_char(char ch[30])
//{
//	int i = 0;
//	for(i = 0;ch[i]!='\0';i++)
//	{
//		if (islower(ch[i]))//�ַ���������ŵĲ��ǵ�ַ�������ַ�
//			lower++;
//		else if (isupper(ch[i]))
//			upper++;
//		else if (isspace(ch[i]))
//			space++;
//		else if (ispunct(ch[i]))
//			punct++;
//	}
//}
//
//int main()
//{
//	char ch[30] = "";
//	gets(ch);
//	sta_char(ch);
//	printf("lower = %d\nupper = %d\npunct = %d\nspace = %d\n", lower, upper, punct, space);
//	return 0;
//}
//void Longestword(char ch[50],char word[50])
//{
//
//	int max_len = 0;//����ͳ�ƣ������
//	int len = 0;//��������ÿ�����ʵĳ���
//	int i = 0;
//	*(ch + strlen(ch)) = ' ';
//	for(i = 0;ch[i]!='\0';i++)
//	{
//		if (ch[i] == ' ')
//		{
//			ch[i] = '\0';//���ո�ĳ�\0,���������˽�����־�����Ը��õļ��㳤�ȣ��ͼ�¼�ַ�������Ϊ����Ҳ֪����ʼ��ַ
//			len = strlen(ch);
//			if (len > max_len)
//			{
//				max_len = len;
//				strcpy(word, ch);
//			}
//			ch = ch + len + 1;//�ı��ʼ��ַ
//			i = 0;
//		}
//	}
//}
//
//
//int main()
//{
//	char ch[50] = "";
//	char word[50] = "";//������������
//	gets(ch);
//	Longestword(ch,word);//��ΪҪ������ʴ���word�У�����ҲҪ�������word�ĵ�ַ
//	puts(word);
//	return 0;
//}

//char* Bubble_sort_char(char ch[10])
//{
//	int i = 0;
//	int len = strlen(ch);
//	for (i = 0; i < len - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < len - 1 - i; j++)//��С���󣬴���������
//		{
//			if (ch[j] > ch[j + 1])
//			{
//				char t = ch[j];
//				ch[j ] = ch[j+1];
//				ch[j+1] = t;
//			}
//		}
//	}
//	return ch;
//}
//
//
//int main()
//{
//	char ch[20] = "jihgfedcba";
//	Bubble_sort_char(ch);
//	puts(ch);
//	return 0;
//}

//12.ţ�ٵ�����   x1 = x0 - f(xn)/f(xn)�ĵ���--�������x1��Խ��Խ�ӽ�������ʵֵ
//float funt(int a, int b, int c, int d)
//{
//	float x1 = 1.0,x0,f,f1;//f--������f1--����
//	do
//	{
//		x0 = x1;
//		f = a * pow(x0, 3) + b * pow(x0, 2) + c * x0 + d;
//		f1 = 3 * a * pow(x0, 2) + 2 * b * x0 + c;
//		x1 = x0 - f / f1;//ţ�ٵ�����ʽ
//	} while (fabs(x0-x1)>1e-5);//��x1��x0�ľ���ӽ���0ʱ��ѭ���������������Ǽ����������>0
//	return x1;
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("enter a,b,c,d\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	float ret = funt(a, b, c, d);//��ret�������������ʵ�ʸ�
//	printf("1�����ĸ�Ϊ��%0.2f\n", ret);
//	return 0;
//}

//#include<stdio.h>
//float polya(int n, int x)
//{
//	float result = 0;
//	if (n == 0)
//		result = 1;
//	if (n == 1)
//		result = x;
//	if (n > 1)
//		
//	result = ((2 * n - 1) * x - polya(n - 1, x) - (n - 1) * polya(n - 2, x)) / n;
//	return result;
//}
//
//int main()
//{
//	int n = 0;
//	int x = 0;
//	scanf("%d%d", &n, &x);
//	float ret = polya(n, x);
//	printf("x = %dʱ��%d�����õ¶���ʽ��ֵΪ��%0.2f\n",x,n, ret);
//	return 0;
//}


//�ر�ע�⣬�������������ְ���ź���һ���س���\n��ͣ�ڻ�����������Ӱ��name�����ݣ�����������һ��getchar�Ե�\n
//void scanf_worker(char name[10][20],int num[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("������NO. %dְ����������ְ����\n", i+1);
//		gets_s(name[i],20);//name[i]--��ʾ�ڼ����������ʼ��ַ---vs������gets(��������Ԫ�ظ���)
//		scanf("%d", &num[i]);
//		getchar();//����\n��
//	}
//}
//
//void print_worker(char name[10][20], int num[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("NO. %d", i + 1);
//		printf("\t%s\t%d\n", name[i], num[i]);
//	}
//	printf("\n");
//}
//
//void Swap_worker(char name[10][20], int num[10], int k)
//{
//	char temp[20] = "";//��������Ҫ�õ�
//	int tmp = 0;//����ְ����Ҫ�õ�
//	//1.����ְ����
//	tmp = num[k];
//	num[k] = num[k + 1];
//	num[k + 1] = tmp;
//	//2.����ְ������
//	strcpy(temp, name[k]);
//	strcpy(name[k], name[k + 1]);
//	strcpy(name[k + 1], temp);
//}
//
//void sort_worker(char name[10][20], int num[10])
//{//ְ����С�ķ���ǰ�棬��������
//	int i = 0;
//	int k = 0;//��¼��Ҫ������λ�õ��±�
//	//ð�ݷ�����
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)//ѭ������д���ˣ����bugд����Ĵ�
//		{
//			if (num[j] > num[j + 1])//
//			{
//				k = j;//�����������
//				Swap_worker(name, num, k);
//			}
//		}
//	}
//}
//
//int find_worker(int num[10])
//{
//	int input = 0;
//	int left = 0, right = 9, mid = 0;
//	printf("������Ҫ���ҵ�ְ����ְ����\n");
//	scanf("%d", &input);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (num[mid] < input)
//		{
//			left = mid + 1;
//		}
//		else if (num[mid] > input)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if (left > right)
//		return -1;
//}
//void search_worker(char name[10][20], int num[10])
//{
//	int ret = find_worker(num);
//	if (ret == -1)
//	{
//		printf("���޴���\n");
//	}
//	else
//	{
//		printf("%s\n", name[ret]);
//	}
//}
//
//int main()
//{
//	char name[10][20]  = {""};//ǰ�к��У�����װְ��������
//	int num[10] = { 0 };//����װְ����ְ����
//	scanf_worker(name,num);
//	print_worker(name,num);
//
//	sort_worker(name, num);
//	print_worker(name, num);
//
//	search_worker(name, num);
//	return 0;
//}

//1.����1
//int transform(int a)
//{
//	return a;
//}

//2.����2
//int transform(int a)
//{
//	int i = 0;
//	int sum = 0;
//	int tmp = 0;
//	for (i = 0;; i++)
//	{
//		tmp = a;
//		int j = i;
//		while (j)
//		{
//			tmp /= 16;
//			j--;
//		}
//		if (tmp == 0)
//			break;
//		tmp = tmp % 16;
//		sum += tmp*pow(16, i);
//	}
//	return sum;
//}
//
//int main()
//{
//	int a = 10;
//	scanf("%x", &a);
//	int ret = transform (a);
//	printf("%xת��Ϊʮ������%d\n", a, ret);
//	return 0;
//}

//void trans_int_str(int a,char* str)
//{
//	char* start = str;
//	int count = 1;
//	int tmp = a;
//	while (tmp /= 10)
//		count++;//����a�Ǽ�λ��
//	if (count == 1)
//	{
//		*str = a+'0';
//	}
//	else
//	{
//		str = str + count - 1;
//		*str = a % 10 + '0';
//		trans_int_str(a/10, start);
//	}
//}
//
//int main()
//{
//	int a = 0;
//	char string[10] = "";
//	scanf("%d", &a);
//	trans_int_str(a,string);
//	printf("%s", string);
//	return 0;
//}
//int cal_day(int year, int month, int day, int months[12])
//{
//	int ret = 0;
//	int i = 0;
//	if ((year%4==0) && (year%100!=0) || (year%400==0))
//	{
//		months[1] = 29;//����366��
//	}
//	for (i = 0; i < month - 1; i++)
//	{
//		ret += months[i];
//	}
//	ret += day;
//	return ret;
//}
//
//int main()
//{
//	int months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
//	int year = 0,month = 0,day = 0;
//	printf("������������\n");
//	scanf("%d%d%d", &year, &month, &day);
//	int ret = cal_day(year,month,day,months);
//	printf("%d��%d��%d���Ǹ���ĵ�%d��\n",year,month,day,ret);
//}

//#include<stdio.h>
//void print_char(char ch[5])
//{
//	int i = 0;
//	while (ch[i] != '\0')
//	{
//		printf("%c ", ch[i++]);
//		
//	}
//}
//
//int main()
//{
//	char ch[5] = "";
//	printf("������λ����\n");
//	scanf("%s", ch);
//	print_char(ch);
//	return 0;
//}