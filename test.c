#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
#include <math.h>



////memset -- memory set -- �ڴ�����    void * memset(void * ptr,int value,size_t num)
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);  //sets the first 5 bytes of the block of memory pointed by arr to the '*'
//	printf("%s\n",arr);
//	return 0;
//}






////���ú����ķ��������������͵�ֵ
//void Swap1(int x, int y)//�˷���������
//��ʵ�δ����βε�ʱ��,�β���ʵ��ʵ�ε�һ����ʱ����,���βε��޸��ǲ���ı�ʵ�ε�
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









//�ú����ķ����ж�100-200֮�������

//����������1,������������0
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
//		//�ж�i�Ƿ�Ϊ����
//		if (is_prime(i) == 1)
//			printf("%d ",i);
//	}
//	return 0;
//}






//дһ�������ж�1000-2000֮���ǲ�������
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
//		//�ж�year�Ƿ�Ϊ����
//		if (is_leap_year(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}







////дһ������,ʵ��һ��������������Ķ��ֲ���
//                  //������arr��һ��ָ��
//int binary_search(int arr[], int k,int sz)
//{
//	//�㷨��ʵ��
////	int sz = sizeof(arr) / sizeof(arr[0]);  //ֵΪ1  error   �����ں����ڲ�������ĳ���
//	int left = 0;
//	int right = sz - 1;
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;//�м�Ԫ�ص��±�
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
//	//���ֲ��ң���һ�����������в��Ҿ����ĳһ����
//	//����ҵ��˷�����������±�,�Ҳ�������-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//                 ���ݹ�ȥ��������arr��Ԫ�صĵ�ַ
//	int ret = binary_search(arr, k, sz); 
//	{
//		printf("�Ҳ���ָ��������");
//	}
//	else
//	{
//		printf("�ҵ���,�±��ǣ�%d\n",ret);
//	}
//	return 0;
//}








////дһ������,ÿ����һ���������,�ͻὫnum��ֵ����1
//void Add(int* p)
//{
////	*p++;     //error ++�����ȼ�����*
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







////��ʽ����
//int main()
//{
//	int len = 0;
//	//1
//	/*len = strlen("abc");
//	printf("%d\n",len);*/
//	//2
//	printf("%d\n",strlen("abc"));   //��ʽ����
//	return 0;
//}





//int main()
//{
//	printf("%d",printf("%d",printf("%d",43 )));   //4321  printf()��������ֵΪд����ַ�����
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