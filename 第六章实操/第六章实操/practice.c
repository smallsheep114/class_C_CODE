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
//	for (i = 2; i < 20; i++)//��2��ʼ��ԭ���ǣ������±��Ǵ�0��ʼ��,����i��19�Ϳ�����
//	{
//		arr[i] = arr[i - 1] + arr[i - 2];
//	}
//	for (i = 0; i < 20; i++)
//	{
//		if (i % 5 == 0)
//		{
//			printf("\n");
//		}
//		printf("%12d", arr[i]);//12d���Ѿ������˿�ȣ������ٶ��ո���
//	}
//	printf("\n");
//	return 0;
//}

//ð������
//1.����ʮ����   2.����ѭ����һ��������������һ�������ȶ���  3.���ʮ����
//int main()
//{
//	int i = 0, j = 0, t = 0;
//	int arr[10] = { 0 };
//	//1.����
//	printf("enter ten numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	//2.ѭ���Ƚ�
//	for(i = 0;i<9;i++)//10��������9��
//		for (j = 0; j < 9 - i; j++)//��һ�˶�9�ԣ�֮��ÿ�αȵĶ�����һ   9-i
//		{
//			//����  ����Ļ���ֻ��Ҫ��>����<����
//			if (arr[j] > arr[j + 1])
//			{
//				t = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = t;
//			}
//		}
//	//3.���
//	printf("the sorted numbers:\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}

//����ά����a���к��еߵ����ŵ���λ����b���У�����Ҫ��ӡa��b����
//int main()
//{
//	int a[2][3] = { {1,2,3},{4,5,6} };
//	int b[3][2] = { 0 }, i = 0, j = 0;//i--�У�j--��
//	printf("a:\n");
//	for (i = 0; i <= 1; i++)
//	{
//		for (j = 0; j <= 2; j++)
//		{//��ӡa
//			printf("%d ", a[i][j]);
//			b[j][i] = a[i][j];//�ǰ�a�ŵ�b
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

//3-4����Ҫ���ҳ��������ֵ�������ҳ��кţ��к�
//int main()
//{
//	int arr[3][4] = { {1,2,3,4},{9,8,7,6},{-10,10,-5,2} };
//	int max = arr[0][0];
//	int i = 0, j = 0;
//	int row = 0, col = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{//�Ƚ�
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

//���Ͼ���--������������������ң����ϵ��£�����һ�ε����ģ�Ҫ���ھ�����Ѱ��һ���������Ҵ�ӡ���±�
//ע��--���ϣ����¼������ֵ��Ҳ����Сֵ�����Կ��������жϣ��ų�һ�л���һ��
//��ΪҪ�����±꣬���������ϴ��к���ʱ��ʹ�ô�ַ

//int Find_num(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;//�����Ͻǿ�ʼ��
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
//	int k = 7;//��Ҫ���ҵ���
//	int x = 3;//��
//	int y = 3;//��    �ں������������Ҫ�ı�x��y��ֵ���ĳ��±�
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
//	scanf("%c%c%c", &a, &b, &c);//����s m y�Ļ���b�ͱ�ɿո���,�������ַ�������������
//	printf("%c %c %c", a, b, c);
//	return 0;
//}

//�����������ַ���������������
//int main()
//{
//	char str1[5] = "";
//	char str2[5] = "";
//	char str3[5] = "";
//	scanf("%s%s%s", &str1, &str2, &str3);//ʹ��scanf�������ַ���ʱ����spaceΪ�ָ�
//	printf("%s %s %s\n", str1, str2, str3);
//	return 0;
//}


//ͻȻ������������ַ���������
//strlwr--���ַ����д�д�ַ��ĳ�Сд�ַ��ĺ���--��������ʱchar*  ��������--�ַ�����Ԫ��
//int main()
//{
//	char ch[] = "I AM A STUDENT";
//	_strlwr(ch);
//	printf("%s\n", ch);	
//	return 0;
//}


//strupr--���ַ�����дд�ַ��ĳɴ�д�ַ��ĺ���
//int main()
//{
//	char ch[] = "i am a student";
//	_strupr(ch);
//	printf("%s\n", ch);
//	return 0;
//}

//����һ���ַ�����ͳ�������ж��ٸ����ʣ������Կո�ָ�
//int main()
//{
//	char ch[81] = "";
//	int num = 0, word = 0,i = 0;
//	char c;
//	gets(ch);//�����ַ���
//	for (i = 0; ( c = ch[i]) != '\0'; i++)//Ӧ����char cȥ���գ���i�Ļ���ı�ѭ������
//	{
//		if (c == ' ')//��c
//			word = 0;//���˸о��е���һ��
//		else if (word == 0)
//		{
//			word = 1;//�տ�ʼ��+1
//			num++;
//		}
//	}
//	printf("There are %d word in this line\n", num);
//	return 0;
//}

//ϰ��
//1.��1-100���������뵽������
//2.1--0   ��2�����ܱ�2���������ͱ��0
//��3�����ܱ�3�����������0   ����������Ϊ0
//��������Щ����Ϊ0
// 
// 1.ɸѡ��
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int arr[100] = { 0 };
//	for (i = 0; i < 100; i++)
//	{
//		arr[i] = i + 1;
//	}
//	arr[0] = 0;//��Ϊ1��������
//	for (i = 1; i < 99; i++)//��Ϊ100��������������������arr[99]
//	{
//		for (j = i + 1; j < 100; j++)//��i�����һ������ʼ�����������ܱ�i�����ľͻ���
//		{
//			if (arr[i] && arr[j] != 0)//ǰ��ʱ����������Ϊ0��Ϊ0�Ͳ�������
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

//2.ѡ��
// �õ�����Сֵ�±�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int minpox = 0;//minpox--��¼��������СԪ�ص��±�λ��
//	int arr[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);//sz--����Ԫ�ظ���
//	printf("����ǰ��Ԫ��:\n");
//	for (i = 0; i < sz ; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz ; i++)//�ⲿѭ����������
//	{
//		
//		for (j = i + 1; j < sz ; j++)//��i����Ԫ�ؿ�ʼ����Сֵ
//		{
//			minpox = i;//���н�����Ҫ���¶�����Сֵ���±�
//			if (arr[minpox] > arr[j])//����ҵ���minpoxԪ�ػ�ҪС��Ԫ��
//			{
//				minpox = j;//��minpox��¼�±�
//				int tmp = arr[i];
//				arr[i] = arr[minpox];
//				arr[minpox] = tmp;
//			}
//		}
//	}
//	printf("������Ԫ��:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//ʹ�����ֵ�±�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int maxpox = 0;
//	int arr[] = { 2,8,3,9,5,7,1,4,0,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��Ԫ��:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		maxpox = sz - 1 - i;
//		for (j = 0; j < sz - i; j++)//j��0��ʼ��
//		{
//			maxpox = sz - 1 - i;
//			if (arr[maxpox] < arr[j])
//			{
//				maxpox = j;
//					//�����ֵ�ŵ���ĩβȥѽ
//					int tmp = arr[sz-1-i];
//					arr[sz -1-i] = arr[maxpox];
//					arr[maxpox] = tmp;
//			}
//		}
//	}
//	printf("������Ԫ��:\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//3.3*3���󣬶Խ���֮��
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int i = 0;
//	int j = 0;
//	int sum1 = 0;//�������ߵĶԽ���
//	int sum2 = 0;//������ұߵĶԽ���
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
//	for (i = 0, j = 2; j >= 0; i++, j--)//ע������д��
//	{
//		sum2 += arr[i][j];
//	}
//	printf("�������ߵĶԽ���֮��Ϊ:%d\n", sum1);
//	printf("������ұߵĶԽ���֮��Ϊ:%d\n", sum2);
//	return 0;
//}

//5.������
//int main()
//{
//	int arr[] = { 8,6,5,4,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	printf("����֮ǰ:\n");
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
//	printf("����֮��:\n");
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//6.�������
//#define ROW 10
//#define COL 10
//int main()
//{
//	int arr[ROW][COL] = { 0 };//��ʼ������Ԫ��Ϊ0
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < ROW; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if ((i == j) || (j == 0))//�Խ��ߺ͵�һ�ж���1
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

//4.�Ѿ��ź�������飬����һ������Ҫ������ǰ��˳Ѱ�����е��������
// �����źõ�˳��������
//����˼·   ������������һ������Ƚϣ�������һ�����ڳ�λ�ã����ڷ�ֵ�������
//int main()
//{
//	int arr[10] = { 1,3,5,7,9,11,13,15,17 };
//	int num = 0;
//	int end = 8;//���һ�������±�
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

//7.ħ����
//����--�������������ܴ���num
//����++��������������С��С��1
//int main()
//{
//	int arr[15][15] = { 0 };//0--��ʾ���λ��û�б�ռ��
//	int num = 0;
//	printf("������һ��1-15֮�������:\n");
//	scanf("%d", &num);
//	int i = 1;//��
//	int j = (1+num) / 2;//��
//	arr[i][j] = 1;//��һ���м�һ�е�����1
//	for (int k = 2; k <= num * num; k++)//������num*num������ѭ���˳���������
//	{
//		i--;
//		j++;
//		if (i<1 && j>num)//���Ͻǵ�������һ������һ�����������·�
//		{//����������Ǻ��б�Ҫ��
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


//8.�Ұ��㣬˼·���ֿ���ÿһ�е�max��ÿһ�е���Сֵ����������Ƿ����
//int main()
//{
//	int i = 0;
//	int min = 0, max = 0;//min--��¼ÿ�е���Сֵ��max--��¼ÿ�е����ֵ
//	int x = 0, y = 0;//x��y��Ϊ�˼�¼�±�
//	/*int arr[3][3] = { {1,2,8},{4,5,6},{7,3,9} };*/
//	int arr[3][3] = {{4,2,7},{1,5,3},{6,9,0}};
//	//1.��ÿ�е�max�����ұ���к���
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0,k = 0;
//		x = i;
//		max = arr[i][0];//�Ƚ�ÿһ�еĵ�һ��Ԫ�ض�Ϊ���ֵ
//		y = 0;
//		for (j = 0; j < 2; j++)
//		{
//			if (arr[i][j] < arr[i][j + 1])//���������ֵ���������
//			{
//				max = arr[i][j + 1];
//				y = j + 1;
//			}
//		}
//		//2.��ÿһ�е���Сֵ
//		min = arr[0][y];//�Ƚ�ÿһ�еĵ�һ��Ԫ�ض�Ϊ��Сֵ
//		for (k = 0; k < 2; k++)//Ϊ�˿�ÿһ�ж����ı�ѭ������
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
//		printf("���������:%d\n�������:%d\n�������:%d\n", max, x, y);
//	else
//		printf("�Ҳ�������\n");
//	return 0;
//}

//9.��һ�����������У�����ĳһ�����Ƿ���ڣ������ҳ���λ��
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
//		if (arr[mid] > num)//mid���±�,Ҫ��arr[mid]
//			left = mid + 1;
//		else if (arr[mid] < num)
//			right = mid - 1;
//		else
//			break;
//	}
//	if (left <= right)
//		printf("i find it,�ǵ�%d��Ԫ��\n", mid + 1);
//	else
//		printf("���Ҳ�����\n");
//	return 0;
//}

#include<ctype.h>
//����һ��
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
//	{//1.����ÿһ�е��ַ�
//		gets(ch+i);//��λ������Ԫ�ص���ʵ��ַ���ǵ�һ�е������ַ
//	}
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		int ret = strlen(ch+i);//���ÿһ���ַ����ĳ���   strlen()�����Ƿŵ�ַ�����Ƿ�Ԫ��
//		for (j = 0; j < ret; j++)//��ÿһ�н����ַ�����
//		{
//			if (ret == '\n')//islower�����Ĳ���������
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



//11.��ӡͼ��
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{//1.��ӡ�ո�
//		int j = 0;
//		for (j = 0; j < 2 * i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 5; j++)
//		{
//			printf("* ");
//		}
//		printf("\n");
//	}
//	return 0;
//}


//12.���ܣ�����˼·�����ֵ���
//int main()
//{
//	char arr1[50] = " ";//���룬���ǲ�ȥ�ı������ֵ
//	char arr2[50] = "";
//	int i = 0;
//	gets(arr1);
//	strcpy(arr2, arr1);//arr2��Ϊarr1��һ����ʱ����
//	int len = strlen(arr2);//������֮��������arr2�ĳ���
//	for (i = 0; i < len; i++)
//	{
//		if ( (arr2[i] >= 65) && (arr2[i] <= 90) )//��ӵ���155
//		{
//			arr2[i] = 165 - arr2[i];
//		}
//		else if ((arr2[i] >= 97) && (arr2[i] <= 122))//��ӵ���219
//		{
//			arr2[i] = 219 - arr2[i];
//		}
//	}
//	printf("ԭ��������%s:\n����ת��֮����:%s\n", arr1, arr2);
//	return 0;
//}


//13.�Լ�ʵ��strcat������
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
//	//1.���ж�ǰ�沿���Ƿ����
//	while (*px == *py)
//	{
//		if (*px == '\0')//��ȵ�����£�*px����\0��˵��*px *py����\0Ҳ���������ַ������
//			return 0;
//		px++;
//		py++;
//	}
//	//2.�����ۺ��治��ȵĲ���
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