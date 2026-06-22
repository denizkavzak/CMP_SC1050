#include"grade.h"

int main(){

    int g1 = 75, g2 = 80, g3 = 60;
    float av = avg(g1,g2,g3);
    printf("%f\n", av);
    printf("%c\n", letterGrade(av));

    return 0;
}