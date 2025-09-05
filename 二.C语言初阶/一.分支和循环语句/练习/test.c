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


//
#include <stdio.h>

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
}