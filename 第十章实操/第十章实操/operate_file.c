#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	char filename[10], ch;
//	printf("�������ļ���\n");
//	scanf("%s", filename);//ɵ�ƣ���ӡ%s��ʱ����&
//	getchar();//�Ե����Ļس�
//	FILE* pf = fopen(filename, "w");
//	if (pf == NULL)
//	{
//		perror("open file:\n");
//		return 0;
//	}
//	
//	printf("������һ���ַ��������ļ���,��#��β\n");
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

//���ļ�file1.txt���Ƶ�file2.txt
//int main()
//{
//	char infile[10], outfile[10];//װ�ļ���
//	FILE* in, *out;//��Ҫ��*
//	char str[50];//���ַ���
//	printf("����������ļ���\n");
//	scanf("%s", infile);
//	printf("����������ļ���\n");
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
//	fgets(str, 50, in);//���ļ�infile�����ݣ����뵽str��
//	fputs(str, out);
//
//	fclose(in);
//	fclose(out);
//	in = NULL;
//	out = NULL;
//	return 0;
//}


//���һ�����룬д�������
//���������ַ���������С�����˳�������꣬�ٷŵ������ļ��� string.txt
//#include<string.h>
//int main()
//{//1.���������ַ���
//	char str[3][10],tmp[10];//tmp--��ʱ�������ڽ���
//	int i = 0,k = 0;
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%s", str[i]);
//	}
//	//�������ַ�����������--ѡ��
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
//	//�ŵ��ļ�����     ������
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


//дһ���ַ��� This is a C program�������ļ�test.txt�У�Ҫ��ʹ��fputc,putchar,getchar
//int main()
//{
//	char filename[10], ch;
//	printf("�������ļ���\n");
//	scanf("%s", filename);
//	getchar();
//	FILE* pf = fopen(filename, "w");
//	if (pf == NULL)
//	{
//		perror("fopen test.txt:");
//		return 0;
//	}
//	printf("������һ���ַ����������ļ��У���#��β\n");
//	while ((ch = getchar()) != '#')
//	{
//		fputc(ch, pf);
//		putchar(ch);//���Ұ��ַ���ӡ����Ļ��
//	}
//
//	fclose(pf);
//	pf = NULL;
//	return 0;
//}


//�������ļ������ݶ��뵽�ڴ�char str[3][30]�У��������
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

//������ѧ������Ϣ���뵽�����ļ�(�Զ����Ƶ���ʽ���)  stu.dat�У�ѧ����Ϣ�� ������ѧ�ţ����䣬��ַ
//�����Ϣ��save()����ʵ��
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

//��zhangsan  wangwu����Ϣ���뵽�ڴ���
//ʹ�õ���fseek  fread
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