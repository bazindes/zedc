/*
    ex31.c
    Created by: baz
    Date: 2019-03-09 14:41
*/

#include <unistd.h>

int main(int argc, char *argv[]){
    int i = 0;

    while(i < 100){
        usleep(3000);
    }
    
    return 0;
}