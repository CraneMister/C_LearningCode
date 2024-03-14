#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

int Add(int x, int y);  //函数声明

int main() 
{
	printf("ab\n\0cd");       //转义字符,\0结束符
	printf("%c\n", '\'');
	printf("%d %d\n", '\130','\x80');    //\ddd,ddd表示1~3位八进制数字.\xdd,表示2位十六进制数字
	                                     //\130=1*8^2+3*8^1+0*8^0=88,\x80=8*16^1+0*16^0=128
	printf("该字符串的长度为%d\n", strlen("C:\test\328\test.c"));     //每个转义字符算一个字符,\328算两个字符(\32和8各算一个字符,因为八进制不含8）

	/*该注释风格不能嵌套注释*/

	printf("今天好好学习了吗？(1/0)");
	int input;
	scanf("%d", &input);
	if (input == 1)                      //if选择语句
	{
		printf("明天一定会更好！");
	}
	else
	{
		printf("引以为戒，明天加油！");
	}

	int line = 1;
	while (line <= 5)                //while循环语句
	{
		printf("写代码:%d\n", line);
		line++;
	}
	
	int num1 = 1;
	int num2 = 2;
	int sum = Add(num1, num2);          //调用Add函数
	printf("%d\n", sum);

	int arr[10] = { 1,2,3,4,5 };        //数组，一组相同类型的元素的集合，数组内的元素用下标访问（不完全初始化，剩余的补充为0）
	char arr1[10] = "abc";              //存放字符的数组，剩余的补充为\0
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;
}

int Add(int x, int y)             //函数
{
	int z = 0;
	z = x + y;
	return z;

}