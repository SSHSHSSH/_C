#include <stdio.h>
#include "Add.h"//自己写的头文件，函数封装模块化   add.c  add.h一起叫加法模块

int main(){
    int a = 0;
    int b = 0;
    printf("请输入两个数字: ");
    scanf("%d %d", &a, &b);
    int sum = Add(a, b);
    printf("%d", sum);
    return 0;
}