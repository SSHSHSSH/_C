#include <stdio.h>
int main(){
    int i = 0;
    scanf("%d", &i);
    if(i == 1){
        printf("星期一\n");
    }
    else if(i == 2){
        printf("星期二\n");
    }
    else if(i == 3){
        printf("星期三\n");
    } 
    else if(i == 4){
        printf("星期四\n");
    } 
    else if(i == 5){
        printf("星期五\n");
    } 
    else if(i == 6){
        printf("星期六\n");
    } 
    else if(i == 7){
        printf("星期天\n");
    }
    return 0;
}