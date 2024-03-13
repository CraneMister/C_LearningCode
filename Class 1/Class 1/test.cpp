#define _CRT_SECURE_NO_WARNINGS 1   //配置规则，防止vs对scanf报错
#include <stdio.h>
#include<string.h>

int all = 0;    //全局变量
//全局变量的作用域为整个工程
extern int number;   //声明变量

int main(){
	printf("Hello World!\n");

//sizeof 计算类型或变量所占空间的大小(字节)
	printf("%d\n", sizeof(int));        
	printf("%d\n", sizeof(long));
	printf("%d\n", sizeof(long long));
	printf("%d\n", sizeof(short));
	printf("%d\n", sizeof(char));
	printf("%d\n", sizeof(float));
	printf("%d\n", sizeof(double));

	const char name[4] = "whl";
	int age = 18;        //类型 变量名（推荐变量赋初值）
	double heigh = 175.5;     
	age = age + 1;
	printf("%d\n", age);
	printf("%lf\n", heigh);     //double类型输出用%lf,float类型输出用%f

	int all = 10;      //局部变量（{}括号内)
	printf("%d\n", all);
	//当局部变量和全局变量名字冲突的情况下，局部优先
	//局部变量的作用范围就是局部范围，即对应的那层{}括号内

	int a, b, sum;
	scanf("%d %d", &a, &b);    //取a,b的地址,然后将值赋给a,b
	sum = a + b;
	printf("%d\n", sum);

	const int c_num = 10;    //1.字面常量，如1.5      2.常变量,如c_num,定义时用const,本质是只读变量,被const修饰后不能改变        
#define NUM 10               //3.标识符常量,用#define定义,只是简单的字符替换
	int aaa = NUM;           
	printf("%d\n%d\n", c_num,aaa);
	enum SEX                 //4.枚举常量,其值从0开始(也可从初始枚举常量赋初值),如MALE
	{
		//这种枚举类型的变量未来可能的取值
		MALE,
		FEMALE
	};
	SEX bbb = MALE;       
	bbb = FEMALE;
	printf("%d\n", bbb);
    //#define是在编译的预处理阶段起作用，而const是在 编译运行的时候起作用。
    // #define只是简单的字符串替换，而const有对应的数据类型，会进行类型检查，可以避免一些低级的错误。const常量可以进行调试的，define是不能进行调试的。const可节省空间，避免不必要的内存分配，提高效率

	char arr[] = "hello!";     //字符数组,结束末尾隐藏了\0的字符表示字符串的结束标志
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };     //此方式只储存‘abc'，没有\0作结束符，故直接打印有乱码
	char arr3[] = "abc\0";          //结尾的\0仍会存储在数组中，也就是说储存两次\0，但是打印或计算时，第一个\0也不算内容，只会打印abc
 	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n",strlen(arr1));     //strlen计算字符串长度，\0结束符不算入字符串内容，但在建立数组时要留出结束符的空间
}



//crtl+f5快捷编译并运行
//一个工程里有且仅有一个main函数

//bit -比特，表示一位二进制
//byte -字节，表示8bit
//1 kb =1024 byte