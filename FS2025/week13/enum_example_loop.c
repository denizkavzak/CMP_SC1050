#include <stdio.h>

enum days{
    SUN, MON, TUE, WED, THU, FRI, SAT, A1=0
};

// enum days_ind{
//     SUN = 7, MON = 1, TUE, WED, THU, FRI, SAT
// };

typedef enum days Days;
//typedef enum days_ind Days_ind;

int main(){

    Days day;
    // Days_ind day_ind;
    
    char* day_names[] = {"SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY"};

    for(day = SUN; day <= SAT; day++){
        printf("Day %d has the day: %s\n", day, day_names[day]);
    }

    printf("SUN=%d A1=%d\n", SUN,A1);

    // for(day_ind = MON; day_ind <= SAT; day_ind++){
    //     printf("Day %d has the day: %s\n", day_ind, day_names[day_ind]);
    // }

    // printf("Day %d has the day: %s\n", SUN, day_names[0]);

    return 0;
}