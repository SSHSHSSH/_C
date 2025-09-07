//练习
//打印3的倍数的数
/* #include <stdio.h>

int main(){

	int i = 1;

	while(i < 100){
		printf("%d\n", i);
		i*=3;
	}
    
	return 0;

} */



//打印100~200之间的素数
/* #include <stdio.h>
int main(){
    int i = 100;
    while(i <= 200){
        //判断i是否为素数
        //素数：只能被1和它本身整除
        //由于1可以被任何数整除，它本身也可以被它本身整除，所以只需要判断2~(i-1)之间的数是否能整除i
        int j = 2;
        while(j < i){//j表示2~(i-1)之间的数，且j始终小于i即可
            if(i % j == 0){//表示j可以被i整除，说明i不是素数
                break;//终止内层while循环
            }
            j++;
        }
        if(j == i){
            printf("%d\n", i);//说明i是素数,因为i除以j，j从2开始一直加到i，说明i没有被2~(i-1)之间的数整除，然后判断i是否等于j，等于则说明它是素数
        }
        i++;
    }
    return 0;
} */



//求20与40的最大公约数
/* #include <stdio.h>

int main(){
    int a = 20;
    int b = 40;
    int c = 20;
    while(c > 0){
        if(a%c ==0 && b%c == 0){
            printf("%d\n", c);
            break;
        }
        c --;
    }

    return 0;
} */




//打印1000~2000之间的闰年
//闰年：能被4整除但不能被100整除，或者能被400整除的年份
/* #include <stdio.h>

int main(){
    int a = 1000;
    while(a <= 2000){
        //判断a是否为闰年
        if((a % 4 == 0 && a % 100 != 0)||a % 400 == 0){
            printf("%d\n", a);
        }
        a++;
    }
} */


//输入三个数，按从大到小的顺序输出
/* #include <stdio.h>

int main(){
    int a = 2;
    int b = 3;
    int c = 1;
    
    //比较大小
    if(a < b && b < c)
        printf("%d %d %d\n", c, b, a);//从大到小输出
    else if(a < c && c < b)
        printf("%d %d %d\n", b, c, a);//从大到小输出
    else if(b < a && a < c)
        printf("%d %d %d\n", c, a, b);//从大到小输出
    else if(b < c && c < a)
        printf("%d %d %d\n", a, c, b);//从大到小输出
    else if(c < a && a < b)
        printf("%d %d %d\n", b, a, c);//从大到小输出
    else if(c < b && b < a)
        printf("%d %d %d\n", a, b, c);//从大到小输出

    return 0;
} */


/* #include <stdio.h>

int main(){
    printf("%c\n", 'a');
    printf("%c\n", 97);
    return 0;
} */


//字符数组练习
//将字符数组中的内容打印出来，要求：不能改变数组内容，不能使用字符串处理函数
/* #include <stdio.h>

int main(){
    int arr[] = {73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33};
    //sizeof(arr);计算的是总数组的大小（单位是字节）
    //sizeof(arr[0]);计算的是数组第一个元素的大小（单位是字节）
    //两者相除就是数组元素的个数
    int sz = sizeof(arr)/sizeof(arr[0]);
    int i = 0;
    while(i < sz){
        printf("%c", arr[i]);
        i++;
    }
} */


//出生日期输入输出
/* #include <stdio.h>

int main(){
    int year = 0;
    int month = 0;
    int day = 0;
    scanf("%4d%2d%2d", &year, &month, &day);//%4d表示读入4位整数，%2d表示读入2位整数
    printf("year = %4d\n", year);
    printf("month = %02d\n", month);//%02d  2表示打印两位，0表示不足两位时用0补齐
    printf("day = %02d\n", day);
    return 0;
} */



//学生成绩输入输出
/* #include <stdio.h>

int main(){

    int id = 0;
    float c = 0.0f;//初始化赋值0.0时会自动转换为double类型，所以加上f表示float类型
    float math = 0.0f;
    float english = 0.0f;
    //输入
    scanf("%d;%f,%f,%f", &id, &c, &math, &english);//; , 作为分隔符

    //输出
    printf("The each subject score of No.%d is %.2f, %.2f, %.2f\n", id, c, math, english);
    //%.2f表示输出浮点数时保留小数点后两位,而%02f表示输出浮点数时总共占两位，不足两位时用0补齐
    return 0;
} */


//printf的返回值
/* #include <stdio.h>

int main(){
    int n = printf("Hello World!");
    printf("\n%d\n", n);//n表示打印的字符个数
    return 0;
} */



//转义字符练习
/* #include <stdio.h>

int main(){
    printf("printf(\"Hello World!\");\n");
    printf("cout<<\"Hello World!\"<<endl;");
    return 0;
} */





//输入四个整数，求最大值

//方法一：放入数组存起来，使用循环找最大值
/* #include <stdio.h>

int main(){
    int arr[4] = {0};
    int i = 0;
    while(i < 4){
        scanf("%d", &arr[i]);
        i++;
    }
    int max = arr[0];
    i = 1;
    while(i < 4){
        if(arr[i] > max){
            max = arr[i]; 
        }
        i++;
    }
    printf("max = %d\n", max);
    return 0;
} */


//方法二：不放入数组，直接比较
/* #include <stdio.h>

int main(){
    int i = 1;
    int max = 0;
    int n = 0;
    scanf("%d", &max);

    while(i < 4){
        scanf("%d", &n);
        if(n > max)
            max = n;
        i++;
    }
    printf("max = %d\n", max);
    return 0;
} */



//计算求的体积
/* #include <stdio.h>

int main(){
    double r = 0.0;//编译器默认0.0为double类型，加上f表示float类型
    double Π = 3.1415926;
    double v = 0.0;
    //输入半径
    scanf("%lf", &r);
    //计算体积
    v = 4/3.0 * Π * r * r * r;
    //输出体积
    printf("v = %.3lf\n", v);//double类型输出使用%lf
    return 0;
} */



//计算BMI指数
//BMI=体重(kg)÷身高^2(m^2)
/* #include <stdio.h>

int main(){
    int ht = 0;
    int wt = 0;
    
    scanf("%d %d", &wt, &ht);
    float bmi = wt / ((ht/100.0) * (ht/100.0));
    printf("bmi = %.2f\n", bmi);
    return 0;
} */


//计算n的阶乘
/* #include <stdio.h>

int main(){
    int i = 1;
    int n = 0;
    int ret = 1;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        ret = ret * i;
    printf("%d", ret);
    return 0;
} */






//计算1!+2!+3!+...+10!
//方法一
/* #include <stdio.h>

int main(){
    int i = 1;
    int ret = 1;
    int n = 1;
    int sum = 0;
    for(n = 1;  n <=3; n++){
        ret = 1;
        for(i = 1; i <= n; i++)
            ret = ret * i;
        sum = sum + ret;
    }
    printf("%d", sum);
} */

//方法二：
//1! = 1 * 1
//2! = 1! * 2
//3! = 3! * 3
//以此类推····
/* #include <stdio.h>

int main(){
    int i = 1;
    int ret = 1;
    int n = 0;
    int t = 0;
    int sum = 0;
    for(i = 1; i <= 3; i++){//i = 1时，ret = 1！，i = 2时，ret = 1! * 2(也就是2的阶乘)，i = 3时，ret = 2！，ret = 2！ * 3
        ret = ret * i;
        sum = sum + ret;
    }
    printf("%d", sum);
} */




//在有序数组中查找数字下标
//顺序查找
/* #include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i = 0;
    int k = 0;
    scanf("%d", &k);
    int sz = sizeof(arr) / sizeof(arr[0]);
    for(i = 0; i < sz; i++){
        if(arr[i] == k){
            printf("找到了，下标是 %d", i);
            break;
        }
    }
    if(i == sz)
        printf("没找到");
    return 0;
} */

//二分法查找
/* #include <stdio.h>

int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;
    int i = 0;
    int sz = sizeof(arr) / sizeof(arr[0]);
    
    int left = 0;
    int right = sz - 1;

    while(left <= right){
        int mid = (left + right) / 2;
        if(arr[mid] > k)
            right = mid - 1;    
        else if(arr[mid] < k)
            left = mid + 1;
        else{
            printf("找到了，下标是%d" ,mid);
            break;
        }
    }
    if(left > right)
        printf("找不到");
    return 0;
} */


//编写代码，演示多个字符从两端移动，向中间汇聚
/* #include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){
    char arr1[] = ("Welcome to bit!!!!");
    char arr2[] = ("##################");
    
    //由于数组是由字符串初始化的所以末尾有一个隐藏的\n
    //strlen求的是字符串长度，不包含\n
    //sizeof求的是空间的大小，包含\n
    int sz = sizeof(arr2) / sizeof(arr2[0]);//计算数组个数
    

   

    int left = 0;//左下标
    //int right = sz-2;//右下标 = 数组个数 - 1
    int right = strlen(arr2) - 1;

    while(left <= right){
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];

        left++;
        right--;

        printf("%s\r", arr2);// /r回车符，使光标回到行首
        
        Sleep(1000);//休眠 1 秒
        
        //system("cls");//清理屏幕  //system是一个库函数 可以执行系统命令
    }
    return 0;


} */


//一个简陋的登陆程序
/* #include <stdio.h>
#include <string.h>
//

int main(){
    int i = 0;
    char arr[20] = {0};
    for(i = 0; i < 3; i++){
        printf("请输入密码：");
        scanf("%s", arr);//arr本省就是i地址所以不需要使用 & 符号
        if(strcmp(arr, "abc") == 0){
            printf("登陆成功\n");
            break;
        }
        else{
            printf("密码错误\n");
        }
    }
    if(i == 3)
        printf("三次密码错误！");
    return 0;
} */



//猜数字
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void menu(){
    printf("********************\n");
    printf("*****  1.play  *****\n");
    printf("*****  0.exit  *****\n");
    printf("********************\n");
}

//0~RAND_MAX(32767)
void game(){
    int guess = 0;
    //1.生成随机数
    //0~99 --> 1~100
    int ret = rand()%100+1;//生成1~100随机数
    //printf("%d\n", ret);
    //2.猜数字
    while(1){
        printf("请猜数字：");
        scanf("%d", &guess);
        if(guess < ret){
            printf("猜小了\n");
        }
        else if(guess > ret){
            printf("猜大了\n");
        }
        else{
            printf("恭喜你，猜对了\n");
            break;
        }
    }
}
int main(){
    int input = 0;
    srand((unsigned int)time(NULL));

    do{
        menu();
        printf("请选择：");
        scanf("%d", &input);
        switch(input){
            case 1:
                game();
                break;
            case 0:
                printf("退出游戏\n");
                break;
            default:
                printf("选择错误，重新选择！\n");
                break;
        }
    }
    while(input);

    return 0;
}