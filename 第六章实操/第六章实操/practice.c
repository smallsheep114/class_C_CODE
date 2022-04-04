#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//int main()
//{
//	int arr[20] = { 1,1 };
//	int i = 0;
//	for (i = 2; i < 20; i++)//从2开始的原因是，数组下标是从0开始的,所以i到19就可以了
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("\n");
//		}
//		printf("%12d", arr[i]);//12d就已经设置了宽度，不用再多打空格了
//	}
//	printf("\n");
//	return 0;
//}

//冒泡排序
//1.输入十个数   2.两个循环，一个用来走趟数，一个用来比对数  3.输出十个数
//int main()
//{
//	int i = 0, j = 0, t = 0;
//	int arr[10] = { 0 };
//	//1.输入
//	printf("enter ten numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//2.循环比较
//	for(i = 0;i<9;i++)//10个数，对9趟
//		for (j = 0; j < 9 - i; j++)//第一趟对9对，之后每次比的对数少一   9-i
//		{
//			//升序  降序的话，只需要将>换成<即可
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	//3.输出
//	printf("the sorted numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//将二维数组a的行和列颠倒，放到二位数组b当中，并且要打印a，b数组
//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2] = { 0 }, i = 0, j = 0;//i--行，j--列
//	printf("a:\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{//打印a
//			printf("%d ", a[i][j]);
//			b[j][i] = a[i][j];//是把a放到b
//		}
//		printf("\n");
//	}
//	printf("b:\n");
//	for (j = 0; j <= 2; j++)
//	{
//		for (i = 0; i <= 1; i++)
//		{
//			printf("%d ", b[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//3-4矩阵，要求找出其中最大值，并且找出行号，列号
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
//	int max = arr[0][0];
//	int i = 0, j = 0;
//	int row = 0, col = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{//比较
//			if (arr[i][j] > max)
//			{
//				max = arr[i][j];
//				row = i;
//				col = j;
//			}
//		}
//	}
//	printf("max = %d\nrow = %d\ncol = %d\n", max, row, col);
//	return 0;
//}

//杨氏矩阵--矩阵里面的数，从左到右，从上到下，都是一次递增的，要求在矩阵中寻找一个数，并且打印其下标
//注意--右上，左下既是最大值，也是最小值，所以可以用来判断，排除一行或者一列
//因为要返回下标，所以我们上传行和列时，使用传址

//int Find_num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//从右上角开始找
//	int y = *py - 1;
//	while ((x < *px)&&(y >= 0))
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;//需要查找的数
//	int x = 3;//行
//	int y = 3;//列    在函数中我们最后要改变x，y的值，改成下标
//	int ret = Find_num(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("i find it\nrow : %d\ncol : %d\n", x, y);
//	}
//	else
//	{
//		printf("this number isn't exit\n");
//	}
//	return 0;
//}

//int main()
//{
//	char a = 0, b = 0, c = 0;
//	scanf("%c%c%c", &a, &b, &c);//输入s m y的话，b就变成空格了,输入多个字符不能这样输入
//	printf("%c %c %c", a, b, c);
//	return 0;
//}

//但是输入多个字符串可以这样输入
//int main()
//{
//	char str1[5] = "";
//	char str2[5] = "";
//	char str3[5] = "";
//	scanf("%s%s%s", &str1, &str2, &str3);//使用scanf输入多个字符串时，以space为分隔
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//}


//突然多出来的两个字符串处理函数
//strlwr--将字符串中大写字符改成小写字符的函数--返回类型时char*  函数参数--字符串首元素
//int main()
//{
//	char ch[] = "I AM A STUDENT";
//	_strlwr(ch);
//	printf("%s\n", ch);	
//	return 0;
//}


//strupr--将字符串中写写字符改成大写字符的函数
//int main()
//{
//	char ch[] = "i am a student";
//	_strupr(ch);
//	printf("%s\n", ch);
//	return 0;
//}

//输入一串字符串，统计里面有多少个单词，单词以空格分隔
//int main()
//{
//	char ch[81] = "";
//	int num = 0, word = 0,i = 0;
//	char c;
//	gets(ch);//输入字符串
//	for (i = 0; ( c = ch[i]) != '\0'; i++)//应该用char c去接收，用i的话会改变循环变量
//	{
//		if (c == ' ')//用c
//			word = 0;//个人感觉有点多此一举
//		else if (word == 0)
//		{
//			word = 1;//刚开始就+1
//			num++;
//		}
//	}
//	printf("There are %d word in this line\n", num);
//	return 0;
//}

//习题
//1.将1-100的数，输入到数组中
//2.1--0   将2后面能被2整除的数就变成0
//将3后面能被3整除的数变成0   将合数都变为0
//条件，那些数不为0
// 
// 1.筛选法
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;//因为1不是素数
//	for (i = 1; i < 99; i++)//因为100不是素数，不用再讨论arr[99]
//	{
//		for (j = i + 1; j < 100; j++)//从i后面第一个数开始，往后数，能被i整除的就划掉
//		{
//			if (arr[i] && arr[j] != 0)//前提时两个数都不为0，为0就不讨论了
//			{
//				if (arr[j] % arr[i] == 0)
//				{
//					arr[j] = 0;
//				}
//			}
//		}
//	}
//	for (i = 0; i < 100; i++)
//	{
//		if(arr[i])
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//2.选择法
// 用的是最小值下标
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int minpox = 0;//minpox--记录数组中最小元素的下标位置
//	int arr[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz--数组元素个数
//	printf("排序前的元素:\n");
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz ; i++)//外部循环控制趟数
//	{
//		
//		for (j = i + 1; j < sz ; j++)//从i后序元素开始找最小值
//		{
//			minpox = i;//进行交换后，要重新定义最小值的下标
//			if (arr[minpox] > arr[j])//如果找到比minpox元素还要小的元素
//			{
//				minpox = j;//用minpox记录下标
//				int tmp = arr[i];
//				arr[i] = arr[minpox];
//				arr[minpox] = tmp;
//			}
//		}
//	}
//	printf("排序后的元素:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//使用最大值下标
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int maxpox = 0;
//	int arr[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前的元素:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		maxpox = sz - 1 - i;
//		for (j = 0; j < sz - i; j++)//j从0开始找
//		{
//			maxpox = sz - 1 - i;
//			if (arr[maxpox] < arr[j])
//			{
//				maxpox = j;
//					//将最大值放到最末尾去呀
//					int tmp = arr[sz-1-i];
//					arr[sz -1-i] = arr[maxpox];
//					arr[maxpox] = tmp;
//			}
//		}
//	}
//	printf("排序后的元素:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//3.3*3矩阵，对角线之和
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0;
//	int j = 0;
//	int sum1 = 0;//起点在左边的对角线
//	int sum2 = 0;//起点在右边的对角线
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 3; j++)
//		{
//			printf("%d ",arr[i][j]);
//			if (i == j)
//			{
//				sum1 += arr[i][j];
//			}
//		}
//		printf("\n");
//	}
//	for (i = 0, j = 2; j >= 0; i++, j--)//注意这种写法
//	{
//		sum2 += arr[i][j];
//	}
//	printf("起点在左边的对角线之和为:%d\n", sum1);
//	printf("起点在右边的对角线之和为:%d\n", sum2);
//	return 0;
//}

//5.逆序存放
//int main()
//{
//	int arr[] = { 8,6,5,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("逆序之前:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	printf("逆序之后:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//6.杨辉三角
//#define ROW 10
//#define COL 10
//int main()
//{
//	int arr[ROW][COL] = { 0 };//初始化数组元素为0
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((i == j) || (j == 0))//对角线和第一列都是1
//			{
//				arr[i][j] = 1;
//			}
//			else
//			{
//				arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
//			}
//		}
//	}
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//4.已经排好序的数组，输入一个数，要求按照以前的顺寻将所有的数，输出
// 加入排好的顺序是升序
//解题思路   输入的数与最后一个数相比较，最后最后一个数腾出位置，便于放值输入的数
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17 };
//	int num = 0;
//	int end = 8;//最后一个数的下标
//	scanf("%d", &num);
//
//	while ((end >= 0) && (num < arr[end]))
//	{
//		arr[end + 1] = arr[end];
//		end--;
//	}
//	arr[end + 1] = num;
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//7.魔方阵
//行是--，所以它不可能大于num
//列是++，所以它不可能小于小于1
//int main()
//{
//	int arr[15][15] = { 0 };//0--表示这个位置没有被占领
//	int num = 0;
//	printf("请输入一个1-15之间的奇数:\n");
//	scanf("%d", &num);
//	int i = 1;//行
//	int j = (1+num) / 2;//列
//	arr[i][j] = 1;//第一行中间一列的数是1
//	for (int k = 2; k <= num * num; k++)//再填入num*num个数，循环退出，填满了
//	{
//		i--;
//		j++;
//		if (i<1 && j>num)//右上角的数的下一个数，一定在它的正下方
//		{//这个条件还是很有必要的
//			i += 2;
//			j--;
//		}
//		if (i < 1)
//		{
//			i = num;
//		}
//		if (j > num)
//		{
//			j = 1;
//		}
//		if (arr[i][j]!=0)
//		{
//			i += 2;
//			j--;
//		}
//			arr[i][j] = k;
//	}
//	for (i = 1; i <= num; i++)
//	{
//		for (j = 1; j <= num; j++)
//		{
//			printf("%5d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


//8.找鞍点，思路：分开找每一行的max和每一列的最小值，最后看他们是否相等
//int main()
//{
//	int i = 0;
//	int min = 0, max = 0;//min--记录每列的最小值，max--记录每行的最大值
//	int x = 0, y = 0;//x，y是为了记录下标
//	/*int arr[3][3] = { {1,2,8},{4,5,6},{7,3,9} };*/
//	int arr[3][3] = {{4,2,7},{1,5,3},{6,9,0}};
//	//1.找每行的max，并且标记行和列
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0,k = 0;
//		x = i;
//		max = arr[i][0];//先将每一行的第一个元素定为最大值
//		y = 0;
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[i][j] < arr[i][j + 1])//重新找最大值，并标记列
//			{
//				max = arr[i][j + 1];
//				y = j + 1;
//			}
//		}
//		//2.找每一列的最小值
//		min = arr[0][y];//先将每一列的第一个元素定为最小值
//		for (k = 0; k < 2; k++)//为了看每一行而不改变循环变量
//		{
//			if (min > arr[k][y])
//			{
//				min = arr[k][y];
//			}
//		}
//		if (max == min)
//			break;
//	}
//	if (i < 3)
//		printf("鞍点的数是:%d\n行序号是:%d\n列序号是:%d\n", max, x, y);
//	else
//		printf("找不到鞍点\n");
//	return 0;
//}

//9.在一个降序数组中，查找某一个数是否存在，存在找出其位置
//int main()
//{
//	int arr[15] = { 15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };
//	int left = 0;
//	int right = 14;
//	int mid = 0;
//	int num = 0;
//	scanf("%d", &num);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > num)//mid是下标,要用arr[mid]
//			left = mid + 1;
//		else if (arr[mid] < num)
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("i find it,是第%d个元素\n", mid + 1);
//	else
//		printf("我找不到了\n");
//	return 0;
//}

#include<ctype.h>
//测试一下
//int main()
//{
//	char ch;
//	scanf("%c", &ch);
//	int ret = ispunct(ch);
//	printf("%d", ret);
//	return 0;
//}

//int main()
//{
//	char ch[100] = "";
//	int count_lower = 0;
//	int count_space = 0;
//	gets(ch);
//	for (int i = 0; i < strlen(ch); i++)
//	{
//		if (ch[i] == '\n')
//			break;
//		if (islower(ch[i]))
//			count_lower++;
//		if (isspace(ch[i]))
//			count_space++;
//	}
//	printf("lower = %d\nspace = %d\n", count_lower, count_space);
//
//	return 0;
//}

//int main()
//{
//	char ch[3][80] = { "" };
//	int i = 0;
//	int lower = 0, upper = 0, space = 0, punct = 0;
//	for (i = 0; i < 3; i++)
//	{//1.输入每一行的字符
//		gets(ch+i);//二位数组首元素的其实地址，是第一行的数组地址
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int ret = strlen(ch+i);//求出每一行字符串的长度   strlen()里面是放地址，不是放元素
//		for (j = 0; j < ret; j++)//对每一行进行字符检验
//		{
//			if (ret == '\n')//islower函数的参数类型是
//				break;
//			if (islower(ch[i][j]))
//				lower++;
//			if (isupper(ch[i][j]))
//				upper++;
//			if (isspace(ch[i][j]))
//				space++;
//			if (ispunct(ch[i][j]))
//				punct++;
//		}
//	}
//	printf("altogether:\n lower = %d\nupper = %d\nspace = %d\npunct = %d\n",lower,upper,space,punct);
//	return 0;



//11.打印图形
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{//1.打印空格
//		int j = 0;
//		for (j = 0; j < 2 * i; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (j = 0; j < 5; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//12.解密，解题思路：相加值相等
//int main()
//{
//	char arr1[50] = " ";//密码，我们不去改变密码的值
//	char arr2[50] = "";
//	int i = 0;
//	gets(arr1);
//	strcpy(arr2, arr1);//arr2作为arr1的一份临时拷贝
//	int len = strlen(arr2);//拷贝完之后才能算出arr2的长度
//	for (i = 0; i < len; i++)
//	{
//		if ( (arr2[i] >= 65) && (arr2[i] <= 90) )//相加等于155
//		{
//			arr2[i] = 165 - arr2[i];
//		}
//		else if ((arr2[i] >= 97) && (arr2[i] <= 122))//相加等于219
//		{
//			arr2[i] = 219 - arr2[i];
//		}
//	}
//	printf("原来密码是%s:\n翻译转换之后是:%s\n", arr1, arr2);
//	return 0;
//}


//13.自己实现strcat的作用
//#include<assert.h>
//char* my_strcat(char* des,const char* src)
//{
//	char* start = des;
//	assert(des != NULL);
//	assert(src != NULL);
//	while (*des!='\0')
//		des++;
//	while (*des++ = *src++)
//	{
//		;
//	}
//	return des;
//}
//
//int main()
//{
//	char arr1[50] = "hello ";
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//#include<assert.h>
//char* my_strcmp(const char* px,const char* py)
//{
//	assert(px != NULL);
//	assert(py != NULL);
//	//1.先判断前面部分是否相等
//	while (*px == *py)
//	{
//		if (*px == '\0')//相等的情况下，*px等于\0，说明*px *py都是\0也就是两个字符串相等
//			return 0;
//		px++;
//		py++;
//	}
//	//2.再讨论后面不相等的部分
//	return (*px - *py);
//}
//
//int main()
//{
//	char arr1[50] = "";
//	char arr2[50] = "";
//	gets(arr1);
//	gets(arr2);
//	int ret = my_strcmp(arr1, arr2);
//	printf("%d\n",ret);
//	return 0;
//}

//#include<assert.h>
//char* my_strcpy(char* s1, const char* s2)
//{
//	char* start = s1;
//	assert(s1 != NULL);
//	assert(s2 != NULL);
//	while (*s1++ = *s2++)
//	{
//		;
//	}
//	return start;
//}
//
//int main()
//{
//	char s1[30] = "hello kcc";
//	char s2[] = "hello world";
//	my_strcpy(s1, s2);
//	printf("%s\n", s1);
//	return 0;
//}