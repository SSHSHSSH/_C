//接受一个无符号整型，按照顺序打印它的每一位
//例如 1234，输出 1 2 3 4
/* #include <stdio.h>
int main(){
    unsigned int num = 0;
    int arr[4] = {0};
    int i = 0;
    

    scanf("%d", &num);

    for(i = 0; num; i++){
    arr[i] = num % 10;//这里在 arr 里存完 4 之后，又加了一次 1 ，所以 i-1
    num /= 10;
    }

    int j = i-1;
    while(j >= 0){
        printf("%d", arr[j]);
        j--;
    }
    return 0; 
} */


/* #include <stdio.h>
//(123)4
//(12) 3 4
//(1) 2 3 4
//1 2 3 4
void print(unsigned int n){
    if(n > 9){
        print(n / 10);
    }
    printf("%d", n % 10);
}

int main(){
    unsigned int num = 0;
    scanf("%u", &num);
    print(num);

    return 0;
} */







//编写函数不允许创建临时变量，求字符串的长度。
/* #include <stdio.h>

//int my_strlen(char str[])  参数部分写成数组形式
int my_strlen(char* str){  //参数部分写成指针形式
    int count = 0;//计数器
    while(*str != '\0'){
        count++;
        str++;//寻找下一个字符
    }
    return count;
}
int main(){
    char arr[] = {"abc"};
    int len = my_strlen(arr);//传数组命，其实是首字母的 地址

    printf("%d\n", len);
    return 0;
}*/


/* #include <stdio.h>
//my_strlen("abc")
//1 + my_strlen("bc")
//1 + 1 + my_strlen("c")
//1 + 1 + 1 + my_strlen("\0")
//1 + 1 + 1 + 0
int my_strlen(char* str){
    if(*str != '\0'){
        return 1 + my_strlen(str + 1);
    }
    else
        return 0;
}
int main(){
    char arr[] = {"abc"};
    int len = my_strlen(arr);
    printf("%d", len);
} */





//阶乘
//循环
/* #include <stdio.h>

int fac(int n){
    int i = 0;
    int ret = 1;
    for(i = 1; i <= n; i++){
        ret *= i;
    }
    return ret;
}

int main(){
    int n = 0;
    scanf("%d", &n);
    int ret = fac(n);
    printf("%d", ret);
    return 0;
} */


//递归
/* #include <stdio.h>

int fac(int x){
    if(x > 1){
        return x * fac(x-1);
    }
    else
        return 1;
}

int main(){
    int i = 0;
    scanf("%d", &i);
    int ret = fac(i);
    printf("%d", ret);
} */




//求第 n 个斐波那契数（不考虑溢出）
//1 1 2 3 5 8 13 21 34（即后面一个数字等于前面两个数字之和）
//递归
/* #include <stdio.h>

int fib(int x){
    if(x > 2){
        return fib(x-1)+fib(x-2);
    }
    else if(x <= 2){
        return 1;
    }
}

int main(){
    int n = 0;
    printf("请输入你要求的第 n 个斐波那契数：");
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d", ret);
    return 0;
} */



//迭代
#include <stdio.h>

int fib(int x){
    int a = 1;
    int b = 1; 
    int c = 0;

    while(x > 2){
        c = a + b;
        a = b;
        b = c;
        x--;
    }
    return 1;
}
int main(){
    int n = 0;
    printf("请输入你要求的第 n 个斐波那契数：");
    scanf("%d", &n);
    int ret = fib(n);
    printf("%d", n);
    return 0;
}