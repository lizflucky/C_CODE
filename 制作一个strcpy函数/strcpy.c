#define  _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int main()
{
	//strcpy
	//×Ö·û´®¿½±´
	char* my_strcpy(char* dest, const char* scr);
	char arr1[] = "##########";
	char arr2[] = "bit";
	printf("%s\n",my_strcpy(arr1, arr2));
	return 0;
}
char* my_strcpy(char* dest, const char* scr)
{
	char* ret = dest;
	assert(dest != NULL);//¶ÏÑÔ
	assert(scr != NULL);//¶ÏÑÔ
	while (*dest++ = *scr++)//°ÑscrÖ¸¶¨µÄ×Ö·û´®¿½±´µ½destÖ¸ÏòµÄ¿Õ¼ä£¬°üº¬'\0'×Ö·û
	{
		;
	}
	return ret;
}