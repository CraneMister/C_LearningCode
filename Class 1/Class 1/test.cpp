#define _CRT_SECURE_NO_WARNINGS 1   //���ù��򣬷�ֹvs��scanf����
#include <stdio.h>
#include<string.h>

int all = 0;    //ȫ�ֱ���
//ȫ�ֱ�����������Ϊ��������
extern int number;   //��������

int main(){
	printf("Hello World!\n");

//sizeof �������ͻ������ռ�ռ�Ĵ�С(�ֽ�)
	printf("%d\n", sizeof(int));              //4�ֽڣ�32λ�����ƣ�����ȡֵ��Χ��[-2147483648��2147483648]���޷��ų�����ȡֵ��Χ�� [0��4294967259]��
	printf("%d\n", sizeof(long));             //4�ֽڣ���ʾ����ͬint��������16λϵͳ��intռ2�ֽڣ�longռ4�ֽڣ�
	printf("%d\n", sizeof(long long));        //8�ֽڣ�64λ������
	printf("%d\n", sizeof(short));            //2�ֽڣ�16λ������
	printf("%d\n", sizeof(char));             //1�ֽ�
	printf("%d\n", sizeof(float));            //4�ֽ�
	printf("%d\n", sizeof(double));           //8�ֽ�
	//����ѡ�����ͣ�������߿ռ������ʣ���������ռ�ֽڴ�С��ͬ�����ܱ�ʾ����������Ҳ��ͬ��

	const char name[4] = "whl";
	int age = 18;        //���� ���������Ƽ���������ֵ��
	double heigh = 175.5;     
	age = age + 1;
	printf("%d\n", age);
	printf("%lf\n", heigh);     //double���������%lf,float���������%f

	int all = 10;      //�ֲ�������{}������)
	printf("%d\n", all);
	//���ֲ�������ȫ�ֱ������ֳ�ͻ������£��ֲ�����
	//�ֲ����������÷�Χ���Ǿֲ���Χ������Ӧ���ǲ�{}������

	int a, b, sum;
	scanf("%d %d", &a, &b);    //ȡa,b�ĵ�ַ,Ȼ��ֵ����a,b
	sum = a + b;
	printf("%d\n", sum);

	const int c_num = 10;    //1.���泣������1.5      2.������,��c_num,����ʱ��const,������ֻ������,��const���κ��ܸı�        
#define NUM 10               //3.��ʶ������,��#define����,ֻ�Ǽ򵥵��ַ��滻,�൱�ڳ���
	int aaa = NUM; 
	char ttt[NUM] = "add";
	printf("%s\n", ttt);
	printf("%d\n%d\n", c_num,aaa);
	enum SEX                 //4.ö�ٳ���,��ֵ��0��ʼ(Ҳ�ɴӳ�ʼö�ٳ�������ֵ),��MALE
	{
		//����ö�����͵ı���δ�����ܵ�ȡֵ
		MALE,
		FEMALE
	};
	SEX bbb = MALE;       
	bbb = FEMALE;
	printf("%d\n", bbb);
    //#define���ڱ����Ԥ����׶������ã���const���� �������е�ʱ�������á�
    // #defineֻ�Ǽ򵥵��ַ����滻����const�ж�Ӧ���������ͣ���������ͼ�飬���Ա���һЩ�ͼ��Ĵ���const�������Խ��е��Եģ�define�ǲ��ܽ��е��Եġ�const�ɽ�ʡ�ռ䣬���ⲻ��Ҫ���ڴ���䣬���Ч��

	char arr[] = "hello!";     //�ַ�����,����ĩβ������\0���ַ���ʾ�ַ����Ľ�����־
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };     //�˷�ʽֻ���桮abc'��û��\0������������ֱ�Ӵ�ӡ������
	char arr3[] = "abc\0";          //��β��\0�Ի�洢�������У�Ҳ����˵��������\0�����Ǵ�ӡ�����ʱ����һ��\0Ҳ�������ݣ�ֻ���ӡabc
 	printf("%s\n", arr1);
	printf("%s\n", arr2);
	printf("%d\n",strlen(arr1));     //strlen�����ַ������ȣ�\0�������������ַ������ݣ�����������������Ԫ�ظ�������ڽ�������ʱҪ�����������Ŀռ�
}



//crtl+f5��ݱ��벢����
//һ�����������ҽ���һ��main����

//bit -���أ���ʾһλ������
//byte -�ֽڣ���ʾ8bit
//1 kb =1024 byte