#include "exams.h"

int main() {

    set_exam_1(80);
    printf("exam 1: %d\n", get_exam_1());
    printf("exam 2: %d\n", get_exam_2());
    set_exam_2(90);
    printf("exam 2: %d\n", get_exam_2());
    printf("average: %d\n", average_of_exams());

    set_exam_1(100);
    printf("exam 1: %d\n", get_exam_1());
    printf("average: %d\n", average_of_exams());

    return 0;
}