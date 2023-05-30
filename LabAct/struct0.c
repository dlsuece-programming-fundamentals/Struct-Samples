#include <stdio.h>

int main(void) {

    long int id[100];
    char last_name[100][80];
    char first_name[100][80];
    char course[100][80];
    float final_grade[100];

    int i;
    for (i=0;i<2;i++){
        printf("Enter ID No: ");
        scanf("%li",&id[i]);

        printf("Last Name: ");
        scanf("%s",last_name[i]);

        printf("First Name: ");
        scanf("%s",first_name[i]);

        printf("Course: ");
        scanf("%s",course[i]);

        printf("Final Grade: ");
        scanf("%f",&final_grade[i]);
    }

    printf("ID No. \t\t Last Name\tFirst Name \t Course \t Final Grade\n");
    for(i=0;i<2;i++){
        printf("%li\t%s\t%s\t%s\t%f\n",id[i],last_name[i],first_name[i],course[i],final_grade[i]);
    }

    return 0;
}