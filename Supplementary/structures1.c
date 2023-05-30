/* Convert into Structures
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

    //We store 1 student
    struct Student student;
    // int ID_number[10];
    // // 10 students. For each name, store at most 80 characters
    // char name[10][80];
    // char course[10][80];
    // float cgpa[10];

    int i=0;

    // for (i=0;i<2;i++){
        
    printf("ID number of student %d: ",i);
    scanf("%d",&student.ID_number);
    printf("Name of student %d: ", i);
    scanf(" %[^\n]s",student.name);
    printf("Course of student %d: ", i);
    scanf("%s",student.course);
    printf("CGPA of student %d: ",i);
    scanf("%f",&student.cgpa);

    // }
    // for (i=0;i<2;i++){
    printf("Student %d\n",i);
    printf("Name: %s\nCourse: %s\nCGPA: %f\n",student.name,student.course,student.cgpa);
    // }

    return 0;
}