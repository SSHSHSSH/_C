/* #include <stdio.h>

int main(){
    printf("Hello World!");
    return 0;
} */


/* #include <stdio.h>

int main(){
    printf("%d\n",100);
    return 0;
} */


/* #include <stdio.h>

int main(){
    
    int num1 = 0;
    int num2 = 0;

    scanf("%d %d", &num1, &num2);

    int sum = num1 + num2;

    printf("sum = %d\n", sum);

    return 0;
} */


/* #include <stdio.h>

int main(){
    const short a = 10;
    // a = 20;

    printf("%d\n", a);
    return 0;
} */


/* #include <stdio.h>
#define MAX 100
#define STR "Hello, World!"

int main(){
    
    printf("%d\n", MAX);
    printf("%s\n", STR);

    return 0;
} */

//字面常量
// const修饰的常量
// define定义的标识符常量
//枚举常量


/* #include <stdio.h>

enum Color{
    RED,
    GREEN,
    BLUE,
};

int main(){
    enum Color c = RED;
    printf("%s\n", c);
    return 0;
} */


/* #include <stdio.h>
#include <string.h>

int main(){

    char arr1[] = "abcdef";
    char arr2[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    printf("%d\n", strlen(arr1));
    printf("%d\n", strlen(arr2));
} */
// 字符串的末尾隐藏一个\0，字符串的结束标志就是\0


/* #include <stdio.h>

int main(){

    printf("abc\0def");
    
    return 0; 
} */


//%d打印整型int
//%c打印字符char
//%s打印字符串
//%f打印浮点数float
//%lf打印双精度浮点数double

/* \n
\\
\t
\r
\ddd \130 //表示的是八进制数，转换为十进制为88，88对应的ASCII码为X，而且\130代表的是一个字符
\xdd \x60 //表示的是十六进制数，转换为十进制为96，96对应的ASCII码为`,而且\x60代表的是一个字符
*/

/* #include <stdio.h>
#include <string.h>

int main(){

    // printf("%s\n", "(Are you OK\?\?)");
    // printf("%c\n", '\'');
    // printf("abc\\0def");
    // printf("c:\\test\\test.c");
    // printf("\a");
    // printf("%c\n", '\130');
    // printf("%c\n", '\x60');
    // printf("%d\n", strlen("abcd e"));
    printf("%d\n", strlen("c:\test\628\test.c"));

    return 0;
} */


/* #include <stdio.h>

int main(){

    int input = 0;

    printf("加入比特\n");
    printf("要好好学习吗？(1/0)\n");

    scanf("%d", &input);

    if (input == 1){
        printf("好Offer!");
    }
    else{
        printf("继续努力!");
    }

    return 0;
} */


/* #include <stdio.h>

int main(){

    int line = 0;

    while(line < 20000){
        printf("写代码:%d\n", line);
        line++;
    }
    if (line >= 20000){
        printf("代码写完了\n");
    }
    else{
        printf("继续加油！\n");
    }
} */

/* 
#include <stdio.h>

int Add(int x, int y){
    return x + y;
}

int main(){

    int a = 0;
    int b = 0;
    //输入
    scanf("%d %d", &a, &b);
    //求和
    // int sum = a + b;
    int sum = Add(a, b);
    //输出
    printf("sum = %d\n", sum);
    return 0;
} */

//数组可以使用下标来访问
/* #include <stdio.h>

int main(){

    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    while (i < 10){
        printf("%d\n", arr[i]);
        i++;
    }

    // printf("%d\n",arr[8]);
    
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = 1;
    // int a = 2;
    printf("%d\n", a);
} */


/* #include <stdio.h>

int main(){
    printf("     **\n");
    printf("     **\n");
    printf("************\n");
    printf("************\n");
    printf("    *  *\n");
    printf("    *  *\n");
} */


/* #include <stdio.h>

int main(){
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");
} */


/* #include <stdio.h>

int main(){
    printf("I lost my cellphone\n");
    return 0;
} */


/* #include <stdio.h>

int main(){
    printf("Hello World!\n");
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = 40;
    int c = 212;
    int n = 0;

    n = (-8+22)*a-10+c/2;

    printf("%d\n", n);
    return 0;
} */


/* #include <stdio.h>
#include <string.h>
int main(){
    char arr[] = {'a', 'b', 'c', 'd', '\n'};
    printf("%d\n", strlen(arr));
} */


/* #include <stdio.h>
#include <string.h>

int main(){
    char ch[7] = "abcdef";
    printf("%d\n", strlen(ch));
    return 0;
} */


/* #include <stdio.h>

int Max(int x, int y){
    if(x > y)
        return x;
    else
        return y;
}

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &a, &b);
    int r = Max (a, b);
    printf("%d\n", r);

} */


/* #include <stdio.h>

int main(){
    printf("请输入一个整数（-10000<x<10000）：");
    int x = 0;
    int y = 0;
    scanf("%d", &x);
    if(x < 0)
        y = 1;
    else if(x > 0)
        y = -1;
    else
        y = 0;
    printf("%d\n", y);
    return 0;
} */


/* #include <stdio.h>

int main(){
    float a = 7 / 2.0;//除号的两端都是整数的时候，执行的是整数除法，如果除号两端只要有一个浮点数，执行的是浮点数除法
    int b = 7 % 2;//取余数，两端只能是整数
    printf("%.2f\n", a);
    printf("%d\n", b);
    return 0;
} */


//单目操作符，只有一个操作数的操作符
//C语言中0表示假，非0表示真


/* #include <stdio.h>

int main(){
    int flag = 0;
    if (!flag){
        printf("flag is false\n");
    }
    else
        printf("flag is true\n");

    return 0;
} */


/* #include <stdio.h>

int main (){
    int a = -10;
    int b = -a;
    printf("%d\n", b);
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = 10;
    printf("%d\n", sizeof(a));
    printf("%d\n", sizeof(int));
    return 0;
} */


/* #include <stdio.h>

int main(){
    int arr[10] = { 0 };
    printf("%d\n", sizeof(arr));
    printf("%d\n", sizeof(arr[0]));
    printf("%d\n", sizeof(arr) / sizeof(arr[0]));
    return 0;
} */
//结果40，arr有10个int类型元素，一个元素是一个整型，一个整型是4个字节，所以4个字节乘以10个元素就是40个字节.
//计算的是整个数组arr的大小，单位是字节


/* #include <stdio.h>

int main(){
    int a = 10;
    // int b = a++;//后置++，先使用后++
    // int b = ++a; //前置++，先++后使用
    // int b = a--;//后置--，先使用后--
    int b = --a; //前置--，先--后使用
    printf("%d\n", b);
    printf("%d\n", a);
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = (int)3.14;
    printf("%d\n", a);
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = 10;
    if (a = 3){
        printf("a is 3\n");
    }
    return 0;
} */


/* #include <stdio.h>

int main(){
    //&&逻辑-与，并且
    //||逻辑-或，或者
    int a = 10;
    int b = 20;
    // if (a && b){
    //     printf("a is true and b is true\n");
    // }
   if (a || b){
       printf("a is true or b is true\n");
   }
    return 0;
} */


/* #include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    printf("这是一个判断整数大小的程序\n");
    printf("请在下方输入两个整数，用空格分隔：\n");
    scanf("%d %d", &a, &b);
    int r = a > b ? a : b;//条件操作符
    printf("%d\n", r);
} */


/* #include <stdio.h>

int main(){
    //逗号表达式就是，用逗号隔开的一串表达式
    //逗号表达式的特点是，从左向右依次计算，整个表达式的结果是最后一个表达式的结果
    int a = 10;
    int b = 20;
    int c = 0;
    //       c = 8, a = 28, c = 5      所以d = 5
    int d = (c=a-2, a=b+c, c-3);
    printf("%d\n", d);
    return 0;
} */


/* #include <stdio.h>

int main(){
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int n = 0;
    printf("请输入想要访问的数组下标(0-9)：");
    scanf("%d", &n);
    arr[n] = 20;//[]下标引用操作符，arr与3就是[]的操作数
    printf("%d\n", arr[n]);
    return 0;
} */


/* #include <stdio.h>

int Add(int x, int y){
    return x + y; //函数调用操作符，Add就是函数名，x和y是参数
}

int main(){
    //函数调用操作符
    int sum = Add(2, 3);//()这两个圆括号就是函数调用操作符，Add，2，3都是()操作数
    printf("sum = %d\n", sum);
    return 0;
} */


//关键字-C语言本身内置的，不是自己创建出来的，也不能自建
/* #include <stdio.h>
int main(){
    auto int a = 10;
    printf("%d\n", a);
    return 0;
} */


//typedef类型定义，这里应该理解为类型重命名。
/* #include <stdio.h>
typedef unsigned int uint; //将unsigned int重命名为uint

int main(){
    
    uint a = 10;
    printf("%d\n", a);
    return 0;
} */


/* #include <stdio.h>
typedef int a;
int main(){
    a b = 10; //这里的a是int类型的别名
    printf("%d\n", b);
    return 0;
} */


//static是用来修饰变量和函数的
//修饰局部变量-静态局部变量
//修饰全局变量-静态全局变量
//修饰函数-静态函数
/* #include <stdio.h>
void test(){
    static int a = 1;//如不加static，每次调用test函数，a都会被重新创建，重新初始化为1。如果加上static，a只会被创建一次，之后每次调用test函数，a的值都会保留上一次的值。
    a++;
    printf("%d\n", a);
}
int main(){
    int i = 0;
    while(i<10){
        test();
        i++;
    }
    return 0;
} */
//static修饰局部变量的时候，出了作用域不会销毁
//本质上static修饰局部变量的时候，改变了变量的存储位置


/* #include <stdio.h>
//声明外部符号
extern int g_val;
int main(){
    printf("%d\n", g_val);
    return 0;
} */
//全局变量是具有外部链接属性的
//static修饰全局变量的时候，这个全局变量的外部链接属性变成了内部链接属性，其他源文件就无法使用这个全局变量了（我们在使用时，就是感觉作用域变小了）


/* #include <stdio.h>
extern int Add(int x, int y);//extern声明外部符号
int main(){
    int a = 10;
    int b = 20;
    int z = Add(a, b);
    printf("%d\n", z);
    return 0;
} */
//函数是具有外部链接属性的
//static修饰函数的时候，这个函数的外部链接属性变成了内部链接属性，其他源文件就无法是用这个函数了


//register-寄存器
//电脑上的存储设备有哪些？
//寄存器（集成到CPU上）
//高速缓存
//内存
//硬盘


//寄存器-register
/* #include <stdio.h>

int main(){
    register int num = 3;//register的作用建议num = 3存放在寄存器中，提升访问速度
} */


//difine定义的常量和宏
/* #include <stdio.h>
#define NUM 100

int main(){
    printf("%d\n", NUM);
    int arr[NUM] = { 0 };
    printf("%d\n", arr[0]);
    return 0;
} */
//difine定义的标识符常量


/* #include <stdio.h>
#define ADD(x, y) ((x) + (y)) //ADD是一个宏。参数是x和y，参数无类型。x+y是宏体。     宏是完成替换的，int c = ((a)+(b))
int main(){
    int a = 10;
    int b = 20;
    int c = ADD(a, b); //ADD是一个宏，参数是a和b
    printf("%d\n", c);
    return 0;
} */
//define定义宏
//宏是有参数的


//指针就是地址
//内存会划分为一个个内存单元，每个内存单元都有一个编号。    一个内存单元是一个byte
/* #include <stdio.h>

int main(){
    int a = 10;
    // &a;
    // printf("%p\n", &a);
    int* p = &a;//*说明p是指针变量     int说明p指向的对象是int类型
    printf("%p\n", p); //%p是打印指针的格式控制符
    *p = 20;//解引用操作符，意思是通过p中存放的地址，来找到p所指向的对象，*p就是p所指向的对象，在这里即为10
    printf("%d\n", *p);
    return 0;
} */


/* #include <stdio.h>

int main(){
    printf("%zu\n", sizeof(int*));
    printf("%zu\n", sizeof(char*));
    printf("%zu\n", sizeof(float*));
    printf("%zu\n", sizeof(double*));
    printf("%zu\n", sizeof(short*));
    return 0;
} */
//不管是什么类型的指针都是在创建指针变量
//指针变量是用来存放地址的
//指针变量的大小取决于一个地址存放时需要多大空间
//32位机器上的地址：32个bite位=4个byte 所以指针变量的大小是4个byte
//64为机器上的地址：64个bite位=8个byte 所以指针变量的大小是8个byte


//结构体-用户自定义数据类型-struct
//结构体是把一些单一类型组合在一起的做法.
/* #include <stdio.h>

struct Stu{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};
void print(struct Stu* ps){
    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);
    printf("%s %d %s %s\n", ps->name, ps->age, ps->sex, ps->tele);
    //->
    //结构体指针变量->成员名
}
int main(){
    struct Stu s1 = {"张三", 18, "男", "12345678901"};
    // printf("%s %d %s %s\n", s1.name, s1.age, s1.sex, s1.tele);
    //.
    //结构体变量.成员名
    print(&s1);
    return 0;
} */


//#difine是预处理指令


#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    scanf("%d %d", &b, &a);
    int c = b/a;
    int d = b%a;
    printf("%d %d\n", c, d);
    return 0;
}


//C语言初始完毕