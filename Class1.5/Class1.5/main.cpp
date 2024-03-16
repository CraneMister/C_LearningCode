#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

int Add(int x, int y);  //函数声明
void test();

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

	float a = 9 / 2.0;        //当操作符两边都是整型时，结果也只会是整型，所以在计算时应注意数据类型
	int b = 9 % 2;        // % 取余操作符
	int c = 10 << 1;       //左移操作符，将二进制编码左移一位，例如将000001010左移为000010100
	// & 按位与   | 按位或   ^ 按位异或
	printf("%f %d %d", a,b,c);
	printf("%d", !a);     // ! 逻辑反操作，0为假，非0为真
	printf("该数组的元素个数为%d\n", sizeof(arr) / sizeof(arr[0]));         //sizeof是操作符，不是函数,单位是字节
	int cd = (int)3.14;    // (类型)  强制类型转换
	printf("%d", ~0);         // ~ 按位取反,把所有二进制的数字取反

	//整数在内存中以补码存储
	//正数的原码、反码、补码相同，负数的如下计算，例如 -1 
	// 原码：100000000000000000000001     第一位是符号位
	//反码：111111111111111111111110         除了符号位，原码全部取反
	//补码：111111111111111111111111      在反码的基础上+1

	int a1 = 10;
	int b1 = ++a1;        //前置++，先计算后使用
	printf("%d", a1);
	printf("%d", b1);
	int a2 = 10;
	int b2 = a2++;
	printf("%d", a2);     //后置++，先使用后计算
	printf("%d", b2);

	int a3 = 3;
	int b3 = 0;
	if (a3 && b3)       //逻辑与，两个均为真才为真
	{
		printf("1\n");
	}
	else
	{
		printf("0\n");
	}
	if (a3 || b3)
	{
		printf("1\n");      //逻辑或，两个中有一个为真即为真
	}
	else
	{
		printf("0\n");
	}

	int aaa = 1;
	int bbb = 2;
	int max = aaa < bbb ? bbb: aaa;      //条件表达式    exp1?exp2:exp3     如果exp1成立，则是exp2的结果，否则为exp3的结果
	printf("%d", bbb);

	int aa = 1;
	int bb = 2;
	int cc = (aa += 1, bb = aa + 3, aa += bb);           //逗号表达式    exp1,exp2,exp3...    用逗号隔开的一串表达式，会从左到右依次计算，整个表达式的结果是最后一个表达式的结果
	printf("%d\n", cc);

	//arr[5]   []为下标引用操作符（当调用数组元素时才是，声明时不算）
	//printf()   ()为函数调用操作符
	//auto   每个局部变量都是auto修饰的（一般被省略）
	register int uu = 100;    //register  寄存器关键字，建议uu的值放在寄存器中(大量被频繁使用的数据建议放在寄存器中，速度快)
	//static    静态类型
	//union     联合体
	//define,include 都是预处理指令，不是关键字

	typedef unsigned int u_int;    //typedef 类型重命名
	u_int zzz = 1;      //与unsigned int zzz相同

	int k = 0;
	while (k < 10)
	{
		test();
		k++;
	}

	extern int inp;	           //extern   用来声明外部符号（变量）
	printf("%d\n", inp);

#define ADD(x,y) ((x)+(y))           //define定义宏，将一个符号用规定的操作替换（define是直接替换，应注意算法加上括号，防止出错）
	printf("%d\n", ADD(1, 2));
	return 0;
}

int Add(int x, int y)             //函数
{
	int z = 0;
	z = x + y;
	return z;
}

void test()
{
	static int m = 0;     //static修饰局部变量，改变了局部变量的生命周期（本质上是改变了变量的存储类型），使其不会在函数结束后被销毁,但仍是局部变量
	m++;                  //static修饰全局变量，使这个变量只能在所在的源文件使用（全局变量是因为具有外部链接属性才能在其他源文件内部使用，被static修饰后就变成了内部链接属性，故不能被其他源文件使用）
	printf("%d", m);      //static修饰函数，会使这个函数只能在所在源文件使用（原因同全局变量）
}

//内存中含有这些区域：（1）栈区：存放局部变量、函数的参数
//                    （2）堆区：动态内存的分配
//                    （3）静态区：全局变量、static修饰的静态变量