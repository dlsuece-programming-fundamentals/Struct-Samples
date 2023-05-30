#include <stdio.h>

typedef char string80[80];

typedef struct Record {
    long int id;
    string80 last_name;
    string80 first_name;
    string80 course;
    float final_grade;
} Record;


int main(void) {

    Record database[100];

    // long int id[100];
    // char last_name[100][80];
    // char first_name[100][80];
    // char course[100][80];
    // float final_grade[100];

    int i;
    for (i=0;i<2;i++){
        printf("Enter ID No: ");
        scanf("%li",&database[i].id);

        printf("Last Name: ");
        scanf("%s",database[i].last_name);

        printf("First Name: ");
        scanf("%s",database[i].first_name);

        printf("Course: ");
        scanf("%s",database[i].course);

        printf("Final Grade: ");
        scanf("%f",&database[i].final_grade);
    }

    printf("ID No. \t\t Last Name\tFirst Name \t Course \t Final Grade\n");
    for(i=0;i<2;i++){
        printf("%li\t%s\t\t%s\t%s\t%f\n",database[i].id,database[i].last_name,database[i].first_name,database[i].course,database[i].final_grade);
    }

    return 0;
}