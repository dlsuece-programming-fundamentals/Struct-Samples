#include <stdio.h>

typedef char string80[80];


typedef struct Subject {
    string80 code;
    string80 description;
    float grade;
    int class_size;
} Subject;


typedef struct Record {
    long int id;
    string80 last_name;
    string80 first_name;
    string80 course;
    Subject subject[3];
    float gpa;
} Record;


int main(void) {

    Record database[100];

    // long int id[100];
    // char last_name[100][80];
    // char first_name[100][80];
    // char course[100][80];
    // float gpa[100];

    int i,j;
    for (i=0;i<2;i++){
        printf("Enter ID No: ");
        scanf("%li",&database[i].id);

        printf("Last Name: ");
        scanf(" %[^\n]s",database[i].last_name);

        printf("First Name: ");
        scanf(" %[^\n]s",database[i].first_name);

        printf("Course: ");
        scanf("%s",database[i].course);

        printf("GPA: ");
        scanf("%f",&database[i].gpa);

        for (j=0;j<2;j++){
            printf("Course Code:");
            scanf("%s",database[i].subject[j].code);
            printf("Description:");
            scanf(" %[^\n]s",database[i].subject[j].description);
            printf("Grade:");
            scanf("%f",&database[i].subject[j].grade);
            printf("Class Size: ");
            scanf("%i",&database[i].subject[j].class_size);
        }
    }

    // printf("ID No. \t\t Last Name\tFirst Name \t Course \t gpa\n");
    for(i=0;i<2;i++){
        printf("ID No.: %li\nLast Name: %s\nFirst Name: %s\nCourse: %s\nGPA:%f\n",database[i].id,database[i].last_name,database[i].first_name,database[i].course,database[i].gpa);

        printf("Code\tDescription\t\tGrade\tClass Size\n");
        for (j=0;j<2;j++){
            Subject tempsubject;
            tempsubject = database[i].subject[j];
            printf("%s\t%s\t%f\t%i\n",tempsubject.code,tempsubject.description,tempsubject.grade,tempsubject.class_size);
        }
    }

    return 0;
}