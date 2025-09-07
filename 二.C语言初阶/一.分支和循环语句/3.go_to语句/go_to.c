//go to语句
#include <stdio.h>
#include <string.h>
#include <windows.h>

int main(){

    char input[20] = {0};

    system("shutdown -s -t 180");
    printf("你的电脑将在180秒内关机\n");

again:
    
    printf("请输入：“No”，以取消关机\n");
    scanf("%s", &input);
    
    if(strcmp(input, "No") == 0){
        system("shutdown -a");
        printf("已取消关机！");
        Sleep(3000);
    }
    else{
        goto again;
    }
    return 0;
}


//while 语句
/* #include <stdio.h>
#include <windows.h>
#include <string.h>

int main(){
    char input[20] = {0};

    system("shutdown -s -t 180");
    

    while(1){
        printf("你的电脑将在180秒内关机,请输入：No, 取消关机\n");
        scanf("%s", input);
        if(strcmp(input, "No") == 0){
            system("shutdown -a");
            printf("已取消关机！");
            Sleep(3000);
            break;
        }
    }
    return 0;
} */