#include<stdio.h>

float get_average(int, int, int);
// int func2();
// int func3();

int main(){

    int a = 5, b = 10, c = 7;
    float average = get_average(a, b, c);
    printf("Average of given 3 numbers: %.2f\n", average); 

    for(size_t i = 0 ; i < 10; i++){
        printf("%lu\n",i);
    }
    return 0;
}

float get_average(int x, int y, int z){
    return ((float)(x + y + z))/3;
}