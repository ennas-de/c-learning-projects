#include <stdio.h>
#include <stdlib.h>

int main () {
    enum grade { A, B, C, D, E, F };
    int initialStudentCount = 10; // 100 initially

    typedef struct Subject {
        char title[20];
        char score;
    } Subject;

    // typedef struct CourseWork { // couldn't nest more than 2 structs
    //     int subjectCount;
    //     Subject* subjects[12];
    // } CourseWork;

    typedef struct Student {
        char name[50];
        int year;
        // CourseWork courseWork;
        Subject* subjects[3];
    } Student;

    Student* students[initialStudentCount];

    for (int i = 0; i < initialStudentCount; i++) {
        // students[i] = (Student*) malloc(sizeof(Student));
        sprintf(students[i] -> name, "Student %d", i+1);
        students[i] -> year = 1;
        sprintf(students[i] -> subjects[0] -> title, "Mathematics");
        students[i] -> subjects[0] -> score = 63;
        sprintf(students[i] -> subjects[1] -> title, "Physics");
        students[i] -> subjects[1] -> score = 75;
        sprintf(students[i] -> subjects[2] -> title, "Biology");
        students[i] -> subjects[2] -> score = 50;
    }

    printf("Students Details: \n");
    printf("Total Numbers of Students: %d\n\n", initialStudentCount);
    printf("========================\n");
    printf("S/No. |\t Name |\t Year |\t Subjects (Title & Score)\n");
    for (int i = 0; i < initialStudentCount; i++) {
        printf("%d. |\t %s |\t %d |\t", i, students[i] -> name, students[i] -> year);
        for (int j = 0; j < 3; j++) {
            printf("%s (%d)", students[i] -> subjects[j] -> title, students[i] -> subjects[j] -> score);
        }
    }

    // // free students from memory
    // free(students);

    return 0;
}


// currently out of my league
// but will keep researching and working on it.
// 