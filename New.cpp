#include <stdio.h>
#include <iostream>

int add(int a, int b){
    return a+b;
}

int main(){
    int x=4;
    int y=6;
    int z =add(x,y);

    return z;
}