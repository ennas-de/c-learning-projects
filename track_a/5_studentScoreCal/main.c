#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define INITIAL_STUDENT_COUNT 10 // 10 students initially

typedef struct Subject {
    char title[20];
    char score;
    char remark;
} Subject;

// typedef struct CourseWork { // couldn't nest more than 2 structs
//     int subjectCount;
//     Subject* subjects[12];
// } CourseWork;

typedef struct Student {
    char name[50];
    int year;
    // CourseWork courseWork;
    Subject subjects[3];
} Student;

char calGrade(int score) {
    if (score < 40) return 'F';
    else if (score >= 40 && score < 45) return 'E';
    else if (score >= 45 && score < 50) return 'D';
    else if (score >= 50 && score < 60) return 'C';
    else if (score >= 60 && score < 75) return 'B';
    else if (score >= 75 ) return 'A';
}

int main () {
    enum grade { A, B, C, D, E, F };
    char studGrade;

    Student students[INITIAL_STUDENT_COUNT];


    // int score;
    for (int i = 0; i < INITIAL_STUDENT_COUNT; i++) {
        srand(time(NULL));
        // score = rand() % 100;



        sprintf(students[i].name, "Student %d", i+1);
        students[i].year = 1;

        strcpy(students[i].subjects[0].title, "Physics");
        students[i].subjects[0].score = rand() % 100;
        students[i].subjects[0].remark = calGrade(students[i].subjects[0].score);

        strcpy(students[i].subjects[1].title, "Biology");
        students[i].subjects[1].score = rand() % 100;
        students[i].subjects[1].remark = calGrade(students[i].subjects[1].score);

        strcpy(students[i].subjects[2].title, "Mathematics");
        students[i].subjects[2].score = rand() % 100;
        students[i].subjects[2].remark = calGrade(students[i].subjects[2].score);
    }

    printf("Students Details: \n");
    printf("Total Numbers of Students: %d\n\n", INITIAL_STUDENT_COUNT);
    printf("========================\n");
    printf("S/No. \t Name |\t Year |\t Subjects (Title & Score)\n");
    for (int i = 0; i < INITIAL_STUDENT_COUNT; i++) {
        printf("%d. %s |\t %d |\t", i, students[i].name, students[i].year);
        for (int j = 0; j < 3; j++) {
            if (j == 0) {
                printf("%s (%d) | %c \n", students[i].subjects[j].title, students[i].subjects[j].score, students[i].subjects[j].remark);
            } else {
                printf("\t\t\t%s (%d) | %c \n", students[i].subjects[j].title, students[i].subjects[j].score, students[i].subjects[j].remark);
            }
        }
        printf("\n");
    }

    return 0;
}


// the above is my final version;
// based on my current level and skills in C language.