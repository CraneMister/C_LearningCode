#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include<string.h>

int Add(int x, int y);  //��������

int main() 
{
	printf("ab\n\0cd");       //ת���ַ�,\0������
	printf("%c\n", '\'');
	printf("%d %d\n", '\130','\x80');    //\ddd,ddd��ʾ1~3λ�˽�������.\xdd,��ʾ2λʮ����������
	                                     //\130=1*8^2+3*8^1+0*8^0=88,\x80=8*16^1+0*16^0=128
	printf("���ַ����ĳ���Ϊ%d\n", strlen("C:\test\328\test.c"));     //ÿ��ת���ַ���һ���ַ�,\328�������ַ�(\32��8����һ���ַ�,��Ϊ�˽��Ʋ���8��

	/*��ע�ͷ����Ƕ��ע��*/

	printf("����ú�ѧϰ����(1/0)");
	int input;
	scanf("%d", &input);
	if (input == 1)                      //ifѡ�����
	{
		printf("����һ������ã�");
	}
	else
	{
		printf("����Ϊ�䣬������ͣ�");
	}

	int line = 1;
	while (line <= 5)                //whileѭ�����
	{
		printf("д����:%d\n", line);
		line++;
	}
	
	int num1 = 1;
	int num2 = 2;
	int sum = Add(num1, num2);          //����Add����
	printf("%d\n", sum);

	int arr[10] = { 1,2,3,4,5 };        //���飬һ����ͬ���͵�Ԫ�صļ��ϣ������ڵ�Ԫ�����±���ʣ�����ȫ��ʼ����ʣ��Ĳ���Ϊ0��
	char arr1[10] = "abc";              //����ַ������飬ʣ��Ĳ���Ϊ\0
	int i = 0;
	while (i < 10)
	{
		printf("%d\n", arr[i]);
		i++;
	}
	
	return 0;
}

int Add(int x, int y)             //����
{
	int z = 0;
	z = x + y;
	return z;

}