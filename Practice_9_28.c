#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
////�ж�str2�Ƿ��ܹ�ͨ��str1��ת�õ�
//int IsLeftLotation(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	int i = 0;
//	for (i = 0;i < len;i++)
//	{
//		char tmp = *str1;
//		int j = 0;
//		for (j = 0;j < len;j++)
//		{
//			str1[j] = str1[j + 1];
//		}
//		str1[len - 1] = tmp;
//		if (strcmp(str1, str2) == 0)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "bcdefa";
//	int ret = IsLeftLotation(str1, str2);
//	if (ret)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//
//}

//#include <stdio.h>
//#include <string.h>
////�ж�str2�Ƿ��ܹ�ͨ��str1��ת�õ�
////ver2.�⺯��strstr��strncat
//int IsLeftLotation(char* str1, char* str2)
//{
//	int len = strlen(str1);
//	if (len != strlen(str2))
//		return 0;
//	strncat(str1, str1, len);//str1=="abcdeabcdef"
//	char* ret = strstr(str1, str2);
//	if (ret)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char str1[20] = "abcdef";
//	char str2[] = "cdefab";
//	int ret = IsLeftLotation(str1, str2);
//	if (ret)
//		printf("Yes");
//	else
//		printf("No");
//	return 0;
//}
//#define ROW 5
//#include <stdio.h>
////�ж������Ǿ���
////���Խ������µ�Ԫ�ض�Ϊ0
////���Խ��ߣ������Ͻǵ����½�
//int IsUpperTriangularMatrix(int arr[ROW][ROW])
//{
//	int row = ROW;
//	int i = 1;
//	int j = 0;
//	for (i = 1;i < ROW;i++)
//	{
//		for (j = 0;j < i;j++)
//		{
//			if (arr[i][j]!=0)
//			{
//				return 0;
//			}
//		}
//	}
//	return 1;
//}
//int main()
//{
//	//����
//	int arr[ROW][ROW] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0;i < ROW;i++)
//	{
//		for (j = 0;j < ROW;j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	//�ж�
//	int ret=IsUpperTriangularMatrix(arr);
//	//���
//	if (ret)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
#include <stdio.h>
//�ж������Ƿ�����sorted/unsorted
int IsSorted(int* arr, int sz)
{
	int i = 0;
	for (i = 0;i < sz - 1;i++)
	{
		if (arr[i] <= arr[i + 1])
		{
			int j = 1;
			for (j = 1;j < sz - 2;j++)
			{
				if (arr[j] > arr[j + 1])
					return 0;
			}
			return 1;
		}
		else
		{
			int j = 1;
			for (j = 1;j < sz - 2;j++)
			{
				if (arr[j] < arr[j + 1])
					return 0;
			}
			return -1;
		}
	}
}
int main()
{
	int arr[] = { 1,2,1,1,1,1};
	int sz = sizeof(arr) / sizeof(arr[0]);
	int ret = IsSorted(arr,sz);
	if (ret==1)
	{
		printf("Yes,Up");
	}
	else if (ret == -1)
	{
		printf("Yes,down");
	}
	else
	{
		printf("No");
	}
	return 0;
}