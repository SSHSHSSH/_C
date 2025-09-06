// 打印1~10
/* #include <stdio.h>
int main(){
    int a = 1;
    while(a <= 10){
        a++;
        if(5 == a)
            //break;//break终止整个循环
            continue;//跳过本次循环，回到while判断
        
        printf("%d\n", a);
        //a++;
    }
    return 0;
} */
//while语句中
//break语句是永久的终止循环
//continue语句是跳过本次循环后面的代码，直接去判断部分，进行下一次循环的判断


/* #include <stdio.h>
int main(){
    int ch = getchar();
    printf("%c\n", ch);
    putchar(ch);
    
    return 0;
} */

/* #include <stdio.h>
int main(){
    int ch = 0;
    while((ch = getchar()) != EOF){
        putchar(ch);
    }
    return 0;
} */





//scanf与getchar的读取方法
#include <stdio.h>
int main(){
    char password[20] = {0};
    printf("请输入密码：");
    scanf("%s", password);//scanf读取了密码，后面还有留有\n

    //getchar();//读取掉\n，如这里不读取，下面的getchar会读取掉这个\n，然后导致ret里是\n不等于Y然后输出No
    while((getchar()) != '\n');//循环读取掉缓冲区，直到读取完\n
    //键盘和scanf、getchar中间有一个缓冲区，键盘输入的内容会先进入缓冲区

    printf("请确认密码（Y/N）");
    int ret = getchar();
    if('Y' == ret){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
} 