//
//  main.c
//  chapter8
//
//  Created by ys on 2018/11/29.
//  Copyright © 2018年 ys. All rights reserved.
//

#include <stdio.h>
#include <stdbool.h>

//验证输入是一个整数
long get_long(void);

//验证范围的上下线是否有效
bool bad_limits(long begin,long end,long low,long high);

//计算a~b之间的整数的平方和
double sum_squares(long a,long b);

int main(int argc, const char * argv[]) {
    const long MIN = -10000000L;//范围的下限
    const long MAX = +10000000L;//范围的上限
    long start;                 //用户指定的范围的最小值
    long stop;                  //用户指定的范围的最大值
    double answer;
    
    printf("This program ......");
    printf("lower limit: ");
    start = get_long();
    printf("upper limit: ");
    stop = get_long();
    while (start!=0 || stop!=0) {
        if (bad_limits(start, stop, MIN, MAX)) {
            printf("Please try again.\n");
        }else{
            answer = sum_squares(start, stop);
            printf("The sum of the suqares of the integers ");
            printf("from %ld to %ld is %g\n",
                   start,stop,answer);
        }
        printf("Enter the limits (enter 0 for both "
               "limits to quit):\n");
        printf("lower limit: ");
        start = get_long();
        printf("upper limit: ");
        stop = get_long();
    }
    printf("Done.\n");
    return 0;
}

long get_long(void){
    long input;
    char ch;
    while (scanf("%ld",&input)!=1) {
        while ((ch = getchar())!='\n') {
            putchar(ch);//处理错误输入
        }
        printf(" is not an integer.\nPlease enter an ");
        printf("integer value,such as 25, -178, or 3: ");
    }
    return input;
}

double sum_squares(long a,long b){
    double total = 0;
    long i;
    for (i = a; i<=b; i++) {
        total+=i*i;
    }
    return total;
}

bool bad_limits(long begin,long end,long low,long high){
    bool not_good = false;
    if (begin > end) {
        printf("%ld isn't samller than %ld.\n",begin,end);
        not_good = true;
    }
    if (begin < low || end<low) {
        printf("Values must be %ld or greater.\n",low);
        not_good = true;
    }
    if (begin > high || end > high) {
        printf("Values must be %ld or less.\n",high);
        not_good = true;
    }
    return not_good;
}

