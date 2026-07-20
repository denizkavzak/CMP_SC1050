struct Student
{
    int id;
    double gpa;
    char grade;
};

int main(void)
{
    struct Student student;

    student.id = 12345;
    student.gpa = 3.80;
    student.grade = 'A';

    struct Student *ptr = &student;

    ptr->gpa = 3.25;
    ptr->grade = 'B';

    return 0;
}