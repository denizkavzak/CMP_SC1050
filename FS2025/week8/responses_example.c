#include<stdio.h>
#define RESPONSES_SIZE 5
#define RATING_SIZE 6

int main(){

    int answer, rating;

    int responses[RESPONSES_SIZE] = {1,2,4,2,4};
    int frequency[RATING_SIZE] = {0};

    for(answer = 0; answer < RESPONSES_SIZE; answer++){
        int rate = responses[answer];
        frequency[rate]++;
        printf("Loop %d\n",answer);
        printf("For the response at index %d, the rating is: %d\n", answer, rate);
        printf("The updated frequency for the rating %d is: %d\n\n", rate, frequency[rate]);
    }

    for(int i=1; i<RATING_SIZE; i++){
        printf("The number of rating %d is: %d\n", i, frequency[i]);
    }

    return 0;
}