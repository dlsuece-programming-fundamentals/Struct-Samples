#include <stdio.h>


int main(void) {

    //We store 10 students
    int ID_number[10];
    // 10 students. For each name, store at most 80 characters
    char name[10][80];
    char course[10][80];
    float cgpa[10];

    int i=0;

    for (i=0;i<2;i++){
        
        printf("ID number of student %d: ",i);
        scanf("%d",&ID_number[i]);
        printf("Name of student %d: ", i);
        scanf(" %[^\n]s",name[i]);
        printf("Course of student %d: ", i);
        scanf("%s",course[i]);
        printf("CGPA of student %d: ",i);
        scanf("%f",&cgpa[i]);

    }

    for (i=0;i<2;i++){
        printf("Student %d\n",i);
        printf("Name: %s\nCourse: %s\nCGPA: %f\n",name[i],course[i],cgpa[i]);
    }

    return 0;
}