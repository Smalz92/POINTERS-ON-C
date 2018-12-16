
/*
 *  push_test.c  V1.0 
 *  Copyright (c) 2017 Shenzhen 100ask Technology Co.Ltd.All rights reserved.
 *  http://www.100ask.org
 *  100ask.taobao.com
 *
 *  测试平台:   ubuntu16.04(64位机器)  gcc -m32 -o push_test  push_test.c 
 *				ubuntu9.10 (32位机器)  gcc      -o push_test  push_test.c 
 *  编译器  :   gcc
 */
 
#include <stdio.h>


/*
*int printf(const char *format,...)
*依据x86平台，函数调用时参数传递是使用堆栈来实现的
*目的:将所传参数全部打印出来
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


