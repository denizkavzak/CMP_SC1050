#include<stdio.h>

void search_key_values(int n, int key);

int main(){
    int n = 10, key = 6; 
    search_key_values(n, key);
    return 0;
}


void search_key_values(int n, int key){
    for (size_t i = 0; i < n; i++)
    {
        if (i*2 == key)
        {
            printf("Found %ld:!\n", i);
            return;
        }   
    }
}

