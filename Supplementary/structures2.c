/* Convert into Structures
We can store up to 10 students.
*/

#include <stdio.h>

struct Student
{
    int ID_number;
    char name[80];
    char course[80];
    float cgpa;
};


int main(void) {

    //We store 10 student
    struct Student student[10];

    int i=0;

    for (i=0;i<2;i++){
        printf("ID number of student %d: ",i);
        scanf("%d",&student[i].ID_number);
        printf("Name of student %d: ", i);
        scanf(" %[^\n]s",student[i].name);
        printf("Course of student %d: ", i);
        scanf("%s",student[i].course);
        printf("CGPA of student %d: ",i);
        scanf("%f",&student[i].cgpa);
    }
    for (i=0;i<2;i++){
        printf("Student %d\n",i);
        printf("Name: %s\nCourse: %s\nCGPA: %f\n",student[i].name,student[i].course,student[i].cgpa);
    }

    return 0;
}