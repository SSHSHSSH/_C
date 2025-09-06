#include <stdio.h>

int main(){
    int i = 0;
    do{
        i++;
        if(i == 5)
            break;
        printf("%d\n", i);
    }
    while(i < 10);
    return 0;
}
//do while至少循环一次