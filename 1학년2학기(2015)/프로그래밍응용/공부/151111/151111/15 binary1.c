//#include <stdio.h>	
//
//int main(void)
//{
//	int buffer[] = { 10, 20, 30, 40, 50 };
//	FILE *fp = NULL;
//	size_t size, count;
//
//	fp = fopen("binary.bin", "wb");
//
//	if (fp == NULL)
//	{
//		fprintf(stderr, "bianry.bin ������ �� �� �����ϴ�.\n");
//		return 1;
//	}
//
//	size = sizeof(buffer[0]);
//	count = sizeof(buffer) / sizeof(buffer[0]);
//
//	fwrite(buffer, size, count, fp);
//
//	return 0;
//}