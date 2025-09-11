//copy 复制_库函数
/* #include <stdio.h>
#include <string.h>

int main(){
    char arr1[20] = { 0 };
    char arr2[] = {"Hello World !"};
    strcpy(arr1, arr2);
    printf("%s", arr1);
    return 0;
} */



//写一个函数，求两个数的最大值
/* #include <stdio.h>

int get_max(int x, int y){
    return (x > y ? x : y);//三目运算符，(a ? b : c)，如果a成立则执行x，反之执行y
}

int main(){
    int a = 0;
    int b = 0;

    printf("请输入两个数字: ");
    scanf("%d %d", &a, &b);
    
    int max = get_max(a, b);

    printf("最大值为: %d", max);
}*/




//写一个函数，交换两个数
/* #include <stdio.h>

// void swap(int x, int y){
//     int i = 0;
//     i = x;
//     x = y;
//     y = i;
// }

void swap(int *x, int *y){
    int i = 0;
    i = *x;
    *x = *y;
    *y = i; 
}

int main(){
    int a = 0;
    int b = 0;

    scanf("%d %d", &a, &b);

    printf("交换前：a = %d, b = %d\n", a, b);
    //a，b是实参
    //x，y是形参
    //当实参传递给形参的时候，形参是实参的一份临时拷贝，对形参的修改不会影响实参
    //swap(a, b);
    swap(&a, &b);
    printf("交换后：a = %d, b = %d\n", a, b);
    return 0;
} */




//写一个函数，可以判断一个数是不是素数
/* #include <stdio.h>
#include <math.h>

void A(int x){
    //i ~ (a-1)
    int i = 2;
    int flag = 1;

    // while((x-1) >= i){
    //     if(x % i == 0){//说明a不是素数
    //         printf("该函数不是素数");
    //         break;
    //     }
    //     i++;
    // }

    // for(i = 2; x-1 >= i; i++){
    //     if(x % i == 0){
    //         flag = 0;
    //         break;
    //     }
    // }

    for(i = 2; sqrt(x) >= i; i++){//sqrt开平方
        if(x % i == 0){
            flag = 0;
            break;
        }
    }
    if(flag == 1)
        printf("该函数是素数");
    else if(flag == 0)
        printf("该函数不是素数");
}

int main(){
    int a = 0;
    printf("这是一个判断一个数是不是素数的程序\n");
    printf("请输入你要判断的数字：");
    scanf("%d", &a);
    A(a);
    return 0;
} */

/* #include <stdio.h>
#include <math.h>

int is_prime(int n){
    int i = 0;
    for(i = 2; sqrt(n) >= i; i++){
        if(n % n == 0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int a = 0;
    scanf("%d", &a);
    if(is_prime(a)){
        printf("该函数是素数");
    }
    else
        printf("该函数不是素数");
    return 0;
} */

//布尔类型
/* #include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool is_prime(int x){
    int y = 2;
    for(y = 2; sqrt(x) >= y; y++){
        if(x % y == 0)
            return false;
    }
    return true;
}

int main(){
    int i = 0;
    printf("这是一个判断素数的程序\n");
    printf("请输入一个数：\n");
    scanf("%d", &i);

    if(is_prime(i)){
        printf("该函数是素数\n");
    }
    else{
        printf("该函数不是素数\n");
    }
    return 0;
} */





//写一个函数判断一年是不是闰年
/* #include <stdio.h>

int is_leap_year(int y){
    if((y % 400 == 0) || ((y % 4 == 0) && (y % 100 != 0)))
        return 1;
    else
        return 0;
}

int main(){
    int year = 0;
    printf("请输入一个年数，以判断该年数是否为闰年：");
    scanf("%d", &year);
    if(is_leap_year(year)){
        printf("该年数是闰年");
    }
    else{
        printf("该年数不是闰年");
    }
    return 0;
} */






//写一个函数实现一个整形有序数组的二分查找。
/* #include <stdio.h>

int binary_search(int x[], int y , int z){//x数组，y查找的数，z数组个数
    int left = 0;
    int right = z - 1;
   
    while(left <= right){
        int mind = left + (right - left) / 2;
        if(x[mind] > y){
            right = mind - 1;
        }
        else if(x[mind] < y){
            left = mind + 1;
        }
        else{
            return mind;//找到了，返回下标
        }
    }
    return -1;//找不到返回-1
}

int main(){
    int i = 0;
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int sz = sizeof(arr) / sizeof(arr[0]);
    printf("已知数组 arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}");
    printf("输入一个 1~10 的数字，以查找该数在数组内的下标");
    scanf("%d", &i);
    int ret = binary_search(arr, i, sz);//创建一个ret接收，函数返回的值
    if(ret == -1){
        printf("找不到\n");
    }
    else
        printf("找到了，下表是%d\n", ret);
    return 0;
} */






//写一个函数，每调用一次这个函数 num 值 +1
//传 num 地址，直接找到 num 改变其本省
/* #include <stdio.h>

void Add(int* x){
    (*x)++;
}

int main(){
    int num = 0;
    Add(&num);
    printf("%d\n", num);//使用指针改变函数外部的数
    Add(&num);
    printf("%d\n", num);
    return 0;
} */
//在函数内加 1，然后返回给num
/* #include <stdio.h>

int Add(int x){
    return ++x;
}

int main(){
    int num = 0;
    num = Add(num);
    printf("%d\n", num);
    num = Add(num);
    printf("%d\n", num);
} */






//链式访问
/* #include <stdio.h>
#include <string.h>

int main(){
    int len = strlen("abcdef");
    printf("%d\n", len);

    //链式访问  一个函数的返回值做了另一个函数的参数 
    printf("%d\n", strlen("abcdef"));
} */


/* #include <stdio.h>

int main(){
    printf("%d", printf("%d", printf("%d", 43)));
    return 0;
} */
//printf返回值是打印参数的个数
//链式访问的前提条件是函数有返回值
//函数没写返回类型的时候，默认返回类型是int
//int类型函数没写返回值的时候，默认返回最后一条语句的返回结果
//明确的说明main函数不需要参数，本质上main函数是有参数的
//main函数有三个参数
/* #include <stdio.h>

int main(int argc, char* argv[], char* envp[]){
    return 0;
} */






#include <stdio.h>

//函数的声明
int Add(int, int);//这里也可以加上 x, y 与 函数的定义 保持一致

int main(){
    int a = 0;
    int b = 0;
    printf("请输入两个数字:");
    scanf("%d %d", &a, &b);
    int sum = Add(a, b);
    printf("%d", sum);
}

//函数的定义
int Add(int x, int y){
    return x + y;
}