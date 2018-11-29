//
//  main.c
//  chapter3
//
//  Created by ys on 2018/11/28.
//  Copyright © 2018年 ys. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    float weight;
    float value;
    printf("Are you worth your weight in platinum?\n");
    printf("Let's check it out.\n");
    printf("Please enter your weight in pounds:");
    
    scanf("%f",&weight);
    value = 1700.0 * weight * 14.5833;
    printf("Your weight in platinum is worth $%.2f.\n",value);
    
    return 0;
}
