#define _CRT_SECURE_NO_WARNINGS 1


//#include <assert.h>
//杨辉三角
//int main()
//{
//	int a[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j < 10; j++)
//		{
//			if (j == 0)
//			{
//				a[i][j] = 1;
//			}
//			if (j == i)
//			{
//				a[i][j] = 1;
//			}
//			if (i >= 2 && j >= 1)
//			{
//				a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
//			}
//		}
//	}
//
//	for (i = 0; i < 10; i++)
//	{
//		//打印空格
//		for (j = 0; j < 10 - i - 1; j++)
//		{
//			printf(" ");
//		}
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", a[i][j]);
//		}
//		printf("\n");
//	}
//		
//	
//	return 0;
//}

//找到嫌疑人
//假设法，假设a为凶手，为真的是3，就找到凶手
//int main()
//{
//	int killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//			printf("凶手是：%c\n", killer);
//	}
//	return 0;
//}

//排名次
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1)) == 1)
//						{
//							if ((a * b * c * d * e) == 120)
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//
//						}
//							
//					}
//
//				}
//			}
//
//		}
//	}
//	return 0;
//}

//左旋字符
//#include <assert.h>
//#include <string.h>
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		char tmp = *arr;
//		int j = 0;
//		for (j = 0; j < len-1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		*(arr + len-1) = tmp;
//	}
//	
//}
//int main()
//{
//
//	char arr[] = "abcdef";
//	left_move(arr, 5);
//  printf("%s", arr);
//	return 0;
//}

//三部翻转法实现左旋


//逆序实现
//void reverse1(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse1(arr,arr+k-1);
//	reverse1(arr+k,arr+len-1);
//	reverse1(arr,arr+len-1);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 5);
//    printf("%s", arr);
//	return 0;
//}


//判断b是否是a左旋后的字符串1
//void reverse1(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//
//	}
//
//}
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse1(arr, arr + k - 1);
//	reverse1(arr + k, arr + len - 1);
//	reverse1(arr, arr + len - 1);
//}
//
//int  is_left_move(char *arr1,char*arr2)
//{
//	int len = strlen(arr1);
//
//	for (int i = 0; i < len - 1; i++)
//	{
//		left_move(arr1, 1);
//		int ret = strcmp(arr1, arr2);
//		if (ret == 0)
//			return 1;//如果找到满足ret==1，就return 1，相当于break；下面就不会执行了
//		//找不到就不进入if条件，继续循环，如果都没找到循环结束，往下走，return 0.
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr1[] = "abcdef";//*arr1="abcdef",常量字符串（只读）不能旋转，改变。数组可以，存在栈
//	char arr2[] = "cdefab";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//}

//判断b是否是a左旋后的字符串2
//#include <stdio.h>
//#include <string.h>
//
//
//int is_left_move(char *str1, char *str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//追加字符串
//	strncat(str1, str1, 6);
//	//找子串
//	char* ret =strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//}
//int main()
//{
//	char arr1[30] = "abcdef";//*arr1="abcdef",常量字符串（只读）不能旋转，改变。数组可以，存在栈
//	char arr2[] = "cdefa";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//
//	return 0;
//
//}

//杨氏矩阵
//查找右上角或者左下角元素

#include <stdio.h>


int find_k(int arr[3][3], int k, int *px, int *py)
{
	//右上角元素
	int x = 0;
	int y = *py - 1;
	while (x<=*px-1 && y>=0)
	{
		if (arr[x][y] > k)
		{
			y--;
		}
		else if (arr[x][y] < k)
		{
			x++;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
	int k = 0;
	printf("请输入要查找的数字：");
	scanf("%d", &k);
	int x = 3;
	int y = 3;
	//指针的形式实现返回型参数
	int ret=find_k(arr, k, &x, &y);
	if (ret == 1)
	{
		printf("找到了。\n");
		printf("下标是：%d,%d", x, y);
	}
	else
	{
		printf("没找到。");
	}
		
	return 0;
}