/* #include <stdio.h>

int main(){
    int i = 1;//初始化
    
    while(i <= 10){//条件
        printf("%d\n", i);
        i++;//迭代调整
    }
    return 0;
} */
//太分散了，不好管理


/* #include <stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){//如果在while循环中i++被continue跳过了，那么就会死循环
        if(i == 5)
            //break;//终止for循环
            continue;//跳过continue后面的代码，继续下次循环
        printf("%d\n", i);//循环体
        i = 12;//建议不要再for循环体内修改迭代变量，防止失控
    }
    return 0;
} */


/* #include <stdio.h>

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    for(int i = 0; i <= 9; i++){//建议for循环变量采用“前闭后开区间”写法
        printf("%d\n", arr[i]);
    }
    return 0;
} */



/* #include <stdio.h>

int main(){
    for(;;){//for循环判断部分省略，意味着判断恒成立
        printf("hello world\n");
    }
} */


/* #include <stdio.h>

int main(){
    int i = 0;
    for(; i <= 10; i++){//for循环初始化部分省略，意味着初始化在外部进行
        printf("%d\n", i);
        
    }
    return 0;
} */



/* #include <stdio.h>

int main(){
    int i = 0;
    int j = 0;
    for(; i < 3; i++){
        for(;j < 3; j++){//省略初始化部分，循环过后j = 3，不满足j < 3条件，内层循环不会执行
            printf("哈哈\n");
        }
    }
    return 0;
} */



#include <stdio.h>

int main(){
    for(int i = 0; i < 10; i++)//如果在for循环中初始化变量，有可能在某些编译器中报错无法识别，建议将变量定义放在循环外部，以提高兼容性
        printf("%d\n", i);
    return 0;
}