#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>



////memset -- memory set -- 内存设置    void * memset(void * ptr,int value,size_t num)
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //sets the first 5 bytes of the block of memory pointed by arr to the '*'
//	printf("%s\n",arr);
//	return 0;
//}






////利用函数的方法交换两个整型的值
//void Swap1(int x, int y)//此方法不可行
//当实参传给形参的时候,形参其实是实参的一份临时拷贝,对形参的修改是不会改变实参的
//{
//	int tmp = 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void Swap2(int *pa,int *pb)
//{
//	int tmp = 0;
//	tmp=*pa;
//	*pa=*pb;
//	*pb = tmp;
//}
//

//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a=%d,b=%d\n",a,b);
//	//Swap1(a, b);
//	Swap2(&a,&b); 
//	printf("a=%d,b=%d\n", a, b);
//	return 0;
//}









//用函数的方法判断100-200之间的素数

//是素数返回1,不是素数返回0
//int is_prime(int n)
//{
//	int j = 0;
//	for (j = 2; j <= sqrt(n); j++)
//	{
//		if (n % j == 0)
//			return 0;
//	}
//	return 1;
//	
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		if (is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}






//写一个函数判断1000-2000之间是不是闰年
//int is_leap_year(int y)
//{
//	if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0))
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	for (year= 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}







////写一个函数,实现一个整型有序数组的二分查找
//                  //本质上arr是一个指针
//int binary_search(int arr[], int k,int sz)
//{
//	//算法的实现
////	int sz = sizeof(arr) / sizeof(arr[0]);  //值为1  error   不能在函数内部算数组的长度
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//中间元素的下标
//		if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	//二分查找：找一个有序数组中查找具体的某一个数
//	//如果找到了返回这个数的下标,找不到返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                 传递过去的是数组arr首元素的地址
//	int ret = binary_search(arr, k, sz); 
//	{
//		printf("找不到指定的数字");
//	}
//	else
//	{
//		printf("找到了,下标是：%d\n",ret);
//	}
//	return 0;
//}








////写一个函数,每调用一次这个函数,就会将num的值增加1
//void Add(int* p)
//{
////	*p++;     //error ++的优先级大于*
//	(*p)++;
//}
//int main()
//{
//	int num = 0;
//	Add(&num);
//	printf("num=%d\n",num);  //1
//	Add(&num);
//	printf("num=%d\n",num);  //2
//	Add(&num);
//	printf("num=%d\n",num);  //3
//}







////链式访问
//int main()
//{
//	int len = 0;
//	//1
//	/*len = strlen("abc");
//	printf("%d\n",len);*/
//	//2
//	printf("%d\n",strlen("abc"));   //链式访问
//	return 0;
//}





//int main()
//{
//	printf("%d",printf("%d",printf("%d",43 )));   //4321  printf()函数返回值为写入的字符总数
//	return 0;
//}








#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n",sum);
	return 0;
}