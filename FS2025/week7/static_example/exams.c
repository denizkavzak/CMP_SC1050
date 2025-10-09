#include "exams.h"

static int _exam_handler(int op, int exam) {
    static int exam1 = 0;
    static int exam2 = 0;
    if(op == 1) { //set exam 1
        exam1 = exam;
        return 1;
    }
    else if(op == 2) { // set exam 2
        exam2 = exam;
        return 1;
    }
    else if(op == 3) {  // get exam 1
        return exam1;
    }
    else if(op == 4) {  // get exam 2
        return exam2;
    }
    else if(op == 5) // average of exams
        return (exam1 + exam2)/2.0;
    return -1;
}

int set_exam_1(int exam1) {
    return _exam_handler(1, exam1);
}

int get_exam_1() {
    return _exam_handler(3, 0);
}

int set_exam_2(int exam2) {
    return _exam_handler(2, exam2);
}

int get_exam_2() {
    return _exam_handler(4, 0);
}

int average_of_exams() {
    return _exam_handler(5, 0);
}