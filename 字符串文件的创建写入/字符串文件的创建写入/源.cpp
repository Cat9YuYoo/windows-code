#include<stdio.h>
int main()
{
	const char*filename = "d:\\aaa.txt";
	FILE* fp = fopen(filename, "wb");
	if (fp == NULL)
	{
		printf("����ʧ�ܣ�\n");
		return -1;
	}
	char buf[] = "������������������������";
	fwrite(buf, 1, sizeof(buf), fp);
	fclose(fp);

	return 0;
}