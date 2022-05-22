#define  _CRT_SECURE_NO_WARNINGS 1

void delete_str(char* str, char ch)
{
	int i = 0;
	int j = 0;
	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ch)
		{
			str[j++] = str[i];
		}
	}
	str[j] = '\0';
}