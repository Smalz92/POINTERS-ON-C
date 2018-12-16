
/*
 *  push_test.c  V1.0 
 *  Copyright (c) 2017 Shenzhen 100ask Technology Co.Ltd.All rights reserved.
 *  http://www.100ask.org
 *  100ask.taobao.com
 *
 *  ����ƽ̨:   ubuntu16.04(64λ����)  gcc -m32 -o push_test  push_test.c 
 *				ubuntu9.10 (32λ����)  gcc      -o push_test  push_test.c 
 *  ������  :   gcc
 */
 
#include <stdio.h>


/*
*int printf(const char *format,...)
*����x86ƽ̨����������ʱ����������ʹ�ö�ջ��ʵ�ֵ�
*Ŀ��:����������ȫ����ӡ����
*/

int push_test(const char *format, ...)
{
	printf("arg1:%s\n",format);
	return 0;
}

int main(int argc,char **argv)
{
	printf("sizeof(char   )=%d\n",sizeof(char   ));
	printf("sizeof(int    )=%d\n",sizeof(int    ));
	printf("sizeof(char  *)=%d\n",sizeof(char  *));
	printf("sizeof(char **)=%d\n",sizeof(char **));	
	
	push_test("abcd");

	push_test("abcd",123);
	
	return 0;
}	


