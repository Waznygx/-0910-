#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

////strerror
//#include<string.h>
//#include<errno.h>
//int main()
//{
//	FILE* pfile = fopen("test.txt", "r");
//	if (pfile == NULL)
//	{
//		//printf("%s", strerror(errno));
//		perror("fopen");
//	}
//	/*fclose(pfile);
//	pfile = NULL;*/
//	return 0;
//}

//字符函数
//#include<ctype.h>
//int main()
//{
//	/*char ch = ' ';
//	printf("%d", isdigit(ch));*/
//	char arr[30] = { 0 };
//	printf("input:");
//	scanf("%s", arr);
//	int i = 0;
//	while (arr[i] != '\0')
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i] = tolower(arr[i]);
//		}
//		i++;
//		printf("%s", arr[i]);
//	}
//	return 0;
//}

//内存操作函数
#include<memory.h>
#include<string.h>
//struct{
//	char name[40];
//	int age;
//}person,person_copy;
//int main()
//{
//	char myname[] = "pierre de Fermat";
//	memcpy(person.name, myname, strlen(myname) + 1);//strlen 不包含'\0'
//	person.age = 21;
//	memcpy(&person_copy, &person, sizeof(person));
//
//	printf("person_copy:%s,%d\n", person_copy.name, person_copy.age);
//	/*int arr1[20] = { 2,3,5,7,8,9,13,14,16,17,15,53,37,73,8,58,45,56,68,97 };
//	int arr2[20] = { 0 };
//	memcpy(arr2, arr1,20);*/
//	return 0;
//}

//#include<assert.h>
//void* my_memmove(void* str2, const void* str1, size_t num)
//{
//	void* ret = str2;
//	assert(str1 && str2);
//	//前向后
//	if (str2 < str1)
//	{
//		while (num--)
//		{
//			*(char*)str2 = *(char*)str1;
//			str2 = (char*)str2 + 1;
//			str1 = (char*)str1 + 1;
//		}
//	}
//	//后向前
//	else
//	{
//		while (num--)
//		{
//			*((char*)str2 + num) = *((char*)str1 + num);
//		}
//	}
//	return ret;
//}
////void* my_memcpy(void* str2,const void* str1, size_t num)
////{
////	void* ret = str2;
////	assert(str1 && str2);
////	
////	while (num--)
////	{
////		*(char*)str2 = *(char*)str1;
////		str2 = (char*)str2 + 1;
////		str1 = (char*)str1 + 1;
////	}
////	return ret;
////}
//int main()
//{
//	int arr1[7] = { 1,2,3,4,5,6,7 };
//	int arr2[7] = { 0 };
//	//my_memcpy(arr2, arr1, 20);
//	my_memmove(arr1+2, arr1+1, 12);
//	for (int i = 0; i < 7; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}

