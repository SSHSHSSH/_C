//if语句

/* #include <stdio.h>
int main(){
    if(3 == 3){
        printf("Hello, World!");
    }
    return 0;
}   */

/* #include <stdio.h>
int main(){
    int age = 10;
    if(age < 18){
        printf("未成年");
    }
    return 0;
} */


//if...else语句

/* #include <stdio.h>
int main(){
    int age = 10;
    if(age < 18){
        printf("未成年\n");
        printf("不能饮酒！\n");
    }else{
        printf("成年\n");
    }
    return 0;
} */


//if...else if... else语句

/* #include <stdio.h>
int main(){
    int age = 0;
    scanf("%d", &age);
    if(age < 18){
        printf("青少年\n");
    }
    else if(age >= 18 && age < 25){
        printf("青年\n");
    }
    else if(age >=25 && age<40){
        printf("中年\n");
    }
    else if(age >= 40 && age <60){
        printf("壮年\n");
    }
    else if(age >= 60 && age < 100){
        printf("老年\n");
    }
    else{
        printf("寿星\n");
    }
    return 0;
}  */

/* #include <stdio.h>
int main(){
    int a = 0;
    int b = 2;
    if(a == 1){
        if(b == 2)
            printf("hehe\n");
    }
    else
        printf("haha\n");
    return 0;
} */
//else 就近原则

//判断一个数是否为奇数
/* #include <stdio.h>
int main(){
    int num = 0;
    scanf("%d", &num);
    if(num%2 == 1){//%取余运算符
        printf("奇数\n");
    }
    else{
        printf("偶数\n");
    }
    return 0;
} */
//输出1~100的奇数
#include <stdio.h>
int main(){
    int num = 0;
    while(num <= 100){
        if(num%2 == 1){
            printf("%d\n", num);
        }
        num++;
    }
    return 0;
}
//C语言中 0 表示假，非 0 表示真