/* Demonstrate structures in structures

*/

#include <stdio.h>

typedef struct Subject
{
    char code[80];
    char title[80];
    int unit;
    float grade;
} Subject;



typedef struct Student
{
    int ID_number;
    char name[80];
    char course[80];
    float cgpa;
    Subject subjects[10];
} Student;


int main(void) {

    //We store 10 student
    Student student[10];

    int i=0;
    int j=0;
    for (i=0;i<2;i++){
        printf("ID number of student %d: ",i);
        scanf("%d",&student[i].ID_number);
        printf("Name of student %d: ", i);
        scanf(" %[^\n]s",student[i].name);
        printf("Course of student %d: ", i);
        scanf(" %[^\n]s",student[i].course);
        printf("CGPA of student %d: ",i);
        scanf("%f",&student[i].cgpa);

        for (j=0;j<2;j++) {
            printf("Enter code of subject %d: ",j);
            scanf(" %[^\n]s",student[i].subjects[j].code);
            printf("Enter title of subject %d: ",j);
            scanf(" %[^\n]s",student[i].subjects[j].title);
            printf("Enter unit of subject %d: ",j);
            scanf("%d",&student[i].subjects[j].unit);
            printf("Enter grade of subject %d: ",j);
            scanf("%f",&student[i].subjects[j].grade);

        }
    }
    for (i=0;i<2;i++){
        printf("Student %d\n",i);
        printf("Name: %s\nCourse: %s\nCGPA: %f\n",student[i].name,student[i].course,student[i].cgpa);

        for (j=0;j<2;j++) {
            printf("Code of subject %d: %s \n",j, student[i].subjects[j].code);
            printf("Title of subject %d: %s \n",j, student[i].subjects[j].title);
            printf("Unit of subject %d: %d \n",j, student[i].subjects[j].unit);
            printf("Grade of subject %d: %f \n",j, student[i].subjects[j].grade);
        }


    }

    return 0;
}