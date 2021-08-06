//Code By Purnendu Tudu

#include <stdio.h>
#include <stdlib.h>

int main() {
    int flag = -2147483648 , shift_flag, xor_flag, second_xor=0;
    while(second_xor != -889275714){
        shift_flag = flag << 3;
        xor_flag = flag ^ 525024598;
        second_xor = shift_flag ^ xor_flag;
        flag += 1;
    }
    printf("Your Flag is CTFlearn{%d}", flag -1);
    
    
    return 0;
}
