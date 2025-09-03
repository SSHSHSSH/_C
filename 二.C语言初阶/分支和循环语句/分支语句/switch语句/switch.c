/* #include <stdio.h>
int main(){
    int day = 0;
    scanf("%d", &day);
    if(day == 1){
        printf("星期一\n");
    }
    else if(day == 2){
        printf("星期二\n");
    }
    else if(day == 3){
        printf("星期三\n");
    } 
    else if(day == 4){
        printf("星期四\n");
    } 
    else if(day == 5){
        printf("星期五\n");
    } 
    else if(day == 6){
        printf("星期六\n");
    } 
    else if(day == 7){
        printf("星期天\n");
    }
    return 0;
} */


/* #include <stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    switch(day){//switch 根据整型表达式的值，决定从哪个case语句开始执行
        case 1:
            printf("星期一\n");
            break;//break中断、停止的意思
        case 2:
            printf("星期二\n");
            break;
        case 3:
            printf("星期三\n");
            break;
        case 4:
            printf("星期四\n");
            break;
        case 5:
            printf("星期五\n");
            break;
        case 6:
            printf("星期六\n");
            break;
        case 7:
            printf("星期天\n");
            break;
        default:
            printf("输入错误\n");
            break;
    }
} */

/* #include <stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    switch(day){
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
            printf("weekday\n");
            break;
        case 6:
        case 7:
            printf("weekend\n");
            break;
        default://所有case不能匹配的都会到这里来
            printf("输入错误\n");
            break;
    }
    return 0;
} */

#include <stdio.h>
int main(){
    int n = 1;
    int m = 2;
    switch(n){
        case 1:
            m++;
        case 2:
            n++;
        case 3:
            switch(n){
                case 1:
                    n++;
                case 2:
                    m++;
                    n++;
                    break;
            }
        case 4:
            m++;
            break;
        default:
            break;
    }
    printf("m = %d, n = %d\n", m, n);
    return 0;
}
//switch是可以嵌套的
//break只能跳出它自己所在的switch语句