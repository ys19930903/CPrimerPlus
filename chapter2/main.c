//
//  main.c
//  chapter2
//
//  Created by ys on 2018/11/28.
//  Copyright © 2018年 ys. All rights reserved.
//

#include <stdio.h>

void butler(void);/*ANSI/ISO C函数原型*/

int main(int argc, const char * argv[]) {
    // insert code here...
    //printf("Hello, World!\n");
    int num;
    num = 1;
    printf("I am a simple ");
    printf("computer,\n");
    printf("My favorite number is %d because it is first.\n",num);
    butler();
    return 0;
}

void butler(void){/*函数定义开始*/
    printf("You rang,sir?\n");
}
