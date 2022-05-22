#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


//实现汉诺塔问题
//太有成就感了
//void move(char x, char y)
//{
//	printf("%c --> %c\n", x, y);
//}
//
//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	move(A, C);//函数功能越单一越好,打印功能我们在move函数里面实现
//	else
//	{
//		hanoi(n - 1, A, C, B);//将n-1个盘，从A移到B
//		move(A, C);//将剩余的最大的一个盘移到从A移到C
//		hanoi(n - 1, B, A, C);//将n-1个盘，从B移到C
//	}
//}
//
//int main()
//{
//	char A = 'A', B = 'B', C = 'C';
//	int num = 0;
//	printf("请输入A盘中有多少个盘子\n");
//	scanf("%d", &num);
//	hanoi(num, A, B, C);//将每一步都打印出来
//	return 0;
//}

//void sort(int arr[10])
//{
//	int i = 0, j = 0, min = 0,t = 0;//min-用来记录最小值的下标
//	for (i = 0; i < 9; i++)
//	{
//		min = i;//刚开始认为，arr[min]是最小的
//		for (j = i + 1; j < 10; j++)
//		{
//			if (arr[min] > arr[j])//如果找到了一个比arr[min]还要小的
//			{
//				min = j;
//			}
//		}
//		t = arr[i], arr[i] = arr[min], arr[min] = t;//这个交换部分要放在循环外面，因为你要先将最小值找完，最后再交换
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	//输入数组元素
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	sort(arr);
//	printf("通过选择法排序之后\n");
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
////打擂法实现找二维数组的最大值，及其坐标
//int main()
//{
//	int arr[3][4] = { {34,3,5,7},{2,34,6,8},{15,17,34,12} };
//	int i = 0;
//	printf("数组元素的最大值为:%d", max_arr(arr));//返回值int
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			if (arr[i][j] == max_arr(arr))
//			{
//				printf("下标序号是%d   %d\n", i, j);
//			}
//		}
//	}
//	return 0;
//}

//使用静态局部变量--实现n的阶层
 //int f(int i)--函数是先声明，再定义的
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


// int a = 0;//static int a = 0---这样写的话，变量a就只能在源文件practice.c中使用了
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
//	//1.找空格
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
//	len = strlen(ch)+1;//不计算\0的，但是我们要把\0也要传过来
//	puts("删除之前");
//	printf("%s", ch);
//	Del(ch,len);
//	puts("删除之后");
//	printf("%s",ch);
//	return 0;
//}


//输入一串字符串，删除你要删除的字符，输出删除指定字符后的字符串
//输入字符串函数，删除字符串函数，打印字符串函数，让main函数模板化

//void get_string(char* str)
//{
//	gets(str);
//}
//
//void del_string(char str[20], char ch)//important
//{//我们需要两个下标，一个下标是一步步走的，另一个下标是跳过我们的指定字符的
//	int i = 0;
//	int j = 0; 
//	for (i = 0;str[i]!= '\0' ; i++)
//	{
//		if(str[i] != ch)
//		str[j++] = str[i];//如果遇到了指定字符，那么i与j的距离就会慢慢变大
//	}
//	//由于我们没有把\0放过去，最后我们还是要加一个语句
//	str[j] = '\0';
//}
//
//void print_string(char* str)
//{
//	printf("%s\n", str);
//}
//
////这样一段代码就非常的条例清新
//int main()
//{
//	char str[20] = "";
//	char ch = 0;
//	printf("请输入一串字符串\n");
//	get_string(str);//输入字符串
//	printf("输入你想要删除的字符\n");
//	ch = getchar();
//	del_string(str,ch);//删除字符串的字符
//	print_string(str);//输出字符串
//	return 0;
//}

//1.max--最大公因数

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
//	printf("最大公因数是%d\n", max);
//	printf("最小公倍数是%d\n", min);
//	return 0;
//}

//2.设计三个函数来实现二元一次方程的求解
//void resolve1(double disc,double a,double b)
//{
//	
//	double p = -b / (2 * a);
//	double q = sqrt(disc) / (2 * a);
//	double x1 = p + q;
//	double x2 = p - q;
//	printf("方程的两个实数根为%.2f\t%.2f\n",x1,x2);
//}
//
//void resolve2(double a, double b)
//{
//	double x1 = -b / (2 * a);
//	double x2 = x1;
//	printf("方程的两个相等实数根为%.2f\t%.2f\n", x1, x2);
//}
//
//void resolve3(double disc, double a, double b)
//{
//	double p = -b / (2 * a);
//	double q = sqrt(-disc) / (2 * a);
//	printf("方程的两个复数根为%.2f+%0.2fi\t%.2f-%0.2fi\n", p,q,p,q);
//}
//int main()
//{
//	double a = 0.0, b = 0.0, c = 0.0;
//	double disc = 0.0;
//	scanf("%lf%lf%lf", &a, &b, &c);
//	disc = b * b - 4 * a * c;
//	if (disc > 1e-6)
//		resolve1(disc,a,b);//大于0的情况，顺便把结果也输出出来
//	else if (fabs(disc) < 1e-6)
//		resolve2(a,b);//等于0的情况
//	else
//		resolve3(disc,a,b);//小于0的情况
//	return 0;
//}

//设计一个函数，判断是否为素数，如果是返回1，如果不是返回0
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
//		printf("%d是素数\n",num);
//	else
//		printf("%d不是素数\n",num);
//	return 0;
//}


//4.设计一个函数，交换二维数组的行与列
//如果遇到的是n*n数组，通法是：将行和列对应的那部分进行交换即可(值交换一次就够了)
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
//		for (j = 0; j < i; j++)//要写成j<i，这样才是真正地一对数交换一次，如果写成j<3那就又交换回去了
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
//	printf("行列交换之前的数组\n");
//	print_arr(arr);
//	Swap_arr(arr);//沿着对角线对称的进行交换，只交换一次
//	printf("行列交换之后的数组\n");
//	print_arr(arr);
//	return 0;
//}

//5.设计一个函数，使得字符串反序

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
// 6.实现自己的strcat函数
//char* my_strcat(char* dest, const char* src)
//{
//	char* start = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	//1.找dest\0的位置
//	while (*dest++)//空格space也是真，不是\0
//	{
//		;
//	}
//	dest--;
//	while (*dest++ = *src++)//这样的写法，会让\0也连接上去
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


//找元音字母的方法
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//    char sentence[30] = "jack is a hansome boy";
//    char vowels[6] = "aeiou";
//    char* pch = NULL;
//    pch = strpbrk(sentence,vowels);//在sentence字符串中找有没有和vowels中相匹配的字符，如果有就返回在sentence第一个相匹配的地址
//    while (pch != NULL)
//    {
//        printf("%c ",*pch);
//        pch = strpbrk(pch + 1,vowels);
//    }
//        printf("\n");
//}

//7.将一个字符串的元音字母复制到另一个字符串当中，并且输出另一个字符串
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
//	dest--;//找到dest\0的位置
//	//1.找src中的元音字符 strpbrk
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
////将他们的值转换为ASCII码值
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
//		if (islower(ch[i]))//字符函数里面放的不是地址，而是字符
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
//	int max_len = 0;//用来统计，最长长度
//	int len = 0;//用来计算每个单词的长度
//	int i = 0;
//	*(ch + strlen(ch)) = ' ';
//	for(i = 0;ch[i]!='\0';i++)
//	{
//		if (ch[i] == ' ')
//		{
//			ch[i] = '\0';//将空格改成\0,这样就有了结束标志，可以更好的计算长度，和记录字符串，因为我们也知道初始地址
//			len = strlen(ch);
//			if (len > max_len)
//			{
//				max_len = len;
//				strcpy(word, ch);
//			}
//			ch = ch + len + 1;//改变初始地址
//			i = 0;
//		}
//	}
//}
//
//
//int main()
//{
//	char ch[50] = "";
//	char word[50] = "";//用来存放最长单词
//	gets(ch);
//	Longestword(ch,word);//因为要将最长单词存入word中，所以也要传入参数word的地址
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
//		for (j = 0; j < len - 1 - i; j++)//从小到大，大的数往后放
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

//12.牛顿迭代法   x1 = x0 - f(xn)/f(xn)的导数--算出来的x1就越来越接近根的真实值
//float funt(int a, int b, int c, int d)
//{
//	float x1 = 1.0,x0,f,f1;//f--函数，f1--导数
//	do
//	{
//		x0 = x1;
//		f = a * pow(x0, 3) + b * pow(x0, 2) + c * x0 + d;
//		f1 = 3 * a * pow(x0, 2) + 2 * b * x0 + c;
//		x1 = x0 - f / f1;//牛顿迭代公式
//	} while (fabs(x0-x1)>1e-5);//当x1与x0的距离接近于0时，循环结束，所以我们加入的条件是>0
//	return x1;
//}
//
//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	printf("enter a,b,c,d\n");
//	scanf("%d%d%d%d", &a, &b, &c, &d);
//	float ret = funt(a, b, c, d);//用ret来接收算出来的实际根
//	printf("1附近的根为：%0.2f\n", ret);
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
//	printf("x = %d时，%d阶勒让德多项式的值为：%0.2f\n",x,n, ret);
//	return 0;
//}


//特别注意，如果你在输入完职工号后敲一个回车，\n会停在缓存区，进而影响name的内容，所以我们用一个getchar吃掉\n
//void scanf_worker(char name[10][20],int num[10])
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("请输入NO. %d职工的姓名和职工号\n", i+1);
//		gets_s(name[i],20);//name[i]--表示第几行数组的起始地址---vs编译器gets(数组名，元素个数)
//		scanf("%d", &num[i]);
//		getchar();//消除\n的
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
//	char temp[20] = "";//交换姓名要用的
//	int tmp = 0;//交换职工号要用的
//	//1.交换职工号
//	tmp = num[k];
//	num[k] = num[k + 1];
//	num[k + 1] = tmp;
//	//2.交换职工姓名
//	strcpy(temp, name[k]);
//	strcpy(name[k], name[k + 1]);
//	strcpy(name[k + 1], temp);
//}
//
//void sort_worker(char name[10][20], int num[10])
//{//职工号小的放在前面，交换函数
//	int i = 0;
//	int k = 0;//记录需要交换的位置的下标
//	//冒泡法排序
//	for (i = 0; i < 9; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 9 - i; j++)//循环条件写错了，这个bug写的真的搓
//		{
//			if (num[j] > num[j + 1])//
//			{
//				k = j;//这里出问题了
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
//	printf("请输入要查找的职工的职工号\n");
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
//		printf("查无此人\n");
//	}
//	else
//	{
//		printf("%s\n", name[ret]);
//	}
//}
//
//int main()
//{
//	char name[10][20]  = {""};//前行后列，用来装职工的姓名
//	int num[10] = { 0 };//用来装职工的职工号
//	scanf_worker(name,num);
//	print_worker(name,num);
//
//	sort_worker(name, num);
//	print_worker(name, num);
//
//	search_worker(name, num);
//	return 0;
//}

//1.方法1
//int transform(int a)
//{
//	return a;
//}

//2.方法2
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
//	printf("%x转换为十进制是%d\n", a, ret);
//	return 0;
//}

//void trans_int_str(int a,char* str)
//{
//	char* start = str;
//	int count = 1;
//	int tmp = a;
//	while (tmp /= 10)
//		count++;//计算a是几位数
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
//		months[1] = 29;//闰年366天
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
//	printf("请输入年月日\n");
//	scanf("%d%d%d", &year, &month, &day);
//	int ret = cal_day(year,month,day,months);
//	printf("%d年%d月%d日是该年的第%d天\n",year,month,day,ret);
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
//	printf("输入四位数字\n");
//	scanf("%s", ch);
//	print_char(ch);
//	return 0;
//}