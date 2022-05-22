#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char filename[10], ch;
//	printf("请输入文件名\n");
//	scanf("%s", filename);//傻逼，打印%s的时候不用&
//	getchar();//吃掉多打的回车
//	FILE* pf = fopen(filename, "w");
//	if (pf == NULL)
//	{
//		perror("open file:\n");
//		return 0;
//	}
//	
//	printf("请输入一串字符到磁盘文件中,以#结尾\n");
//	ch = getchar();
//	while (ch != '#')
//	{
//		fputc(ch,filename);
//		putchar(ch);
//		ch = getchar();
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//将文件file1.txt复制到file2.txt
//int main()
//{
//	char infile[10], outfile[10];//装文件名
//	FILE* in, *out;//都要加*
//	char str[50];//放字符串
//	printf("请输入读入文件名\n");
//	scanf("%s", infile);
//	printf("请输入输出文件名\n");
//	scanf("%s", outfile);
//	
//	in = fopen(infile, "r");
//	if (in == NULL)
//	{
//		perror("open file1:");
//		return 0;
//	}
//	out = fopen(outfile, "w");
//	if (out == NULL)
//	{
//		perror("open file2:");
//		return 0;
//	}
//	fgets(str, 50, in);//将文件infile的内容，读入到str中
//	fputs(str, out);
//
//	fclose(in);
//	fclose(out);
//	in = NULL;
//	out = NULL;
//	return 0;
//}


//最后一个代码，写完回寝室
//输入三个字符串，按从小到大的顺序排序完，再放到磁盘文件中 string.txt
//#include<string.h>
//int main()
//{//1.输入三个字符串
//	char str[3][10],tmp[10];//tmp--临时数组用于交换
//	int i = 0,k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", str[i]);
//	}
//	//对三个字符串进行排序--选择法
//	for (i = 0; i < 2; i++)
//	{
//		k = i;
//		int j = 0;
//		for (j = i + 1; j < 3; j++)
//			if (strcmp(str[k], str[j]) > 0)
//				k = j;
//		if (k != i)
//		{
//			strcpy(tmp, str[i]);
//			strcpy(str[i], str[k]);
//			strcpy(str[k], tmp);
//		}
//	}
//	//放到文件里面     分三步
//	FILE* pf = fopen("string.dat", "w");
//	if (pf == NULL)
//	{
//		perror("open string.dat:");
//		return 0;
//	}
//	for (i = 0; i < 3; i++)
//	{
//		fputs(str[i], pf);
//		fputs("\n", pf);
//		printf("%s\n", str[i]);
//	}
//	return 0;
//}


//写一串字符串 This is a C program到磁盘文件test.txt中，要求使用fputc,putchar,getchar
//int main()
//{
//	char filename[10], ch;
//	printf("请输入文件名\n");
//	scanf("%s", filename);
//	getchar();
//	FILE* pf = fopen(filename, "w");
//	if (pf == NULL)
//	{
//		perror("fopen test.txt:");
//		return 0;
//	}
//	printf("请输入一串字符串到磁盘文件中，以#结尾\n");
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, pf);
//		putchar(ch);//并且把字符打印在屏幕上
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//将磁盘文件的内容读入到内存char str[3][30]中，并且输出
//int main()
//{
//	char str[3][30];
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		ferror("open test.txt:");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fgets(str[i], 30, pf);
//	}
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s", str[i]);
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//将三个学生的信息输入到磁盘文件(以二进制的形式输出)  stu.dat中，学生信息有 姓名，学号，年龄，地址
//输出信息用save()函数实现
typedef struct
{
	char name[20];
	int num;
	int age;
	char add[15];
}student;
//
//
//void Save(student* stu)
//{
//	FILE* pf = fopen("stu.dat", "wb");
//	if (pf == NULL)
//	{
//		ferror("open stu.dat:");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fwrite(&stu[i], sizeof(student), 1, pf);
//	}
//
//	fclose(pf);
//	pf = NULL;
//}
//
//
//int main()
//{
//	student stu[3] = { {"zhangsan",20201,16,"longgang"},{"lisi",20202,17,"xianggang"},{"wangwu",20203,28,"aomen"}};
//	Save(stu);
//	return 0;
//}

//int main()
//{
//	student stu[3];
//	FILE* pf = fopen("stu.dat", "rb");//wb    rb
//	if (pf == NULL)
//	{
//		ferror("open stu.dat:");
//		return 0;
//	}
//
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		fread(&stu[i], sizeof(student), 1, pf);
//	}
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("%s,%d,%d,%s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].add);
//	}
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}

//将zhangsan  wangwu的信息输入到内存中
//使用到了fseek  fread
//int main()
//{
//	student stu[3];
//	FILE* pf = fopen("stu.dat", "rb");
//	if (pf == NULL)
//	{
//		ferror("open stu.dat:");
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 3; i += 2)
//	{
//		fseek(pf, i * sizeof(student), SEEK_SET);
//		fread(&stu[i], sizeof(student), 1, pf);
//	}
//	for (i = 0; i < 3; i += 2)
//	{
//		printf("%-15s%-6d%-6d%-12s\n", stu[i].name, stu[i].num, stu[i].age, stu[i].add);
//	}
//	return 0;
//}