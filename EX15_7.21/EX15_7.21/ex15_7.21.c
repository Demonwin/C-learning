#define  _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<ctype.h>
#include<assert.h>

union U   //定义一个联合体
{
	int i;
	char c;
	double n;
};

int main()
{
	union U  u;
	printf("%d\n", sizeof(u)); //联合体的内存大小至少是最大成员大小的整数倍，是最大对齐数的整数倍
	return 0;
}

//——————————————————————————————————————————————————————————————————————————————

//enum Day  //定义一个枚举类型
//{          
//	Mon,   //常量
//	Tues,
//	Wen,
//	Thur,
//	Fri,
//	Sat,
//	Sun
//};
//
//int main()
//{
//	enum Day date = Fri;  //定义一个枚举变量，它的取值只能是这个枚举类型所列举出来变量的一个
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//struct A   //位段
//{
//	int	a : 3;  //a成员占3个bit位
//	int b : 5;   //b成员占5个bit位
//	int c : 10;  //c成员占10个bit位
//	int d : 30;  //d成员占3个bit位
//};
//
//int main()
//{
//	printf("%d\n", sizeof(struct A));
//
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//struct S
//{
//	int data[1000];
//	int num;
//}; 
//struct S s = { {1,2,3,4},100 };  //全局变量
//
//void print(struct S* ps)    //结构体传地址
//{
//	printf("%d\n", ps->num);
//}
//
//int main()
//{
//	print(&s);//传地址
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//struct S
//{
//	double d;
//	char c;
//	int i1;
//	int i2 
//};
//
//int main()
//{
//	struct S s1 = { 0 };
//	printf("%d\n", sizeof(s1));  //打印结果 24  ，结构体类型变量的内存对齐规则
//	return 0;
//}

//—————————————————————————————————————————————————————————————————————————————————————

//struct S 
//{
//	char name[200];
//	int age;
//	char sex[200];
//}s1,s2;     //s1,s2是全局变量
//
//int main()
//{              //s3是局部变量
//	struct  S s3 = { "XiangPeng",22,"男"};  //结构体的初始化
//	printf("name is %s\nage is %d\nsex is %s\n", s3.name, s3.age, s3.sex);
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//struct Book {
//	char name[20];
//	int price;
//	char card[20];
//
//};
//
//int main()
//{
//
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//void* my_memcpy(void* dest, const void* src, size_t num)
//{
//	void* ret = dest;
//	assert(dest && src); //因为要对dest和src两个指针接引用，所以需要断言保证这两个不是空指针
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		dest = (char*)dest + 1;
//		src = (char*)src + 1;  
//	}
//	return ret;
//}
//
//int main() //模拟实现memcpy函数
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	my_memcpy(arr2, arr1, 20); 
//	return 0;
//}


//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 0 };
//	memcpy(arr2, arr1, 20);    //内存函数，将任意类型的数据拷贝到另外一个数据中
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//int main()
//{
//	char ch = '@';
//	//int ret = isdigit(ch);  //判断是不是10进制数字字符函数  isdigit()    成功返回非零值，失败返回0
//	int ret = islower(ch); // 判断是不是小写字母字符函数  islower()    成功返回非零值，失败返回0
//	printf("%d\n", ret);
//	return 0;
//}

//——————————————————————————————————————————————————————————————————————————————

//int main()
//{
//	FILE* fp = fopen("test.txt","r");  //在文件夹中以只读形式打开“test”文件
//	if (fp == NULL)
//	{
//		perror("fopen");  //如果没有这个文件则打印错误信息
//	}
//	else
//		printf("找到文件了"); //如果有就打印“找到文件了”
//	return 0;
//}