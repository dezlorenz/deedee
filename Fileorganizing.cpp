
/*Write a code where the user inputs and prints 2 sets of student data in two separate files.*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *nfile1, *nfile2;
    char name1[100], name2[200];
    
    int id1, math1, science1, english1, total1;
    int id2, math2, science2, english2, total2;
    float average1, average2;

/*STUDENT 1*/
/*Write student 1 data*/

    nfile1 = fopen("student_1.txt", "w");
    if(nfile1 == NULL)
    {
        printf("Error opening file!");
        return(-1);
    }

    printf("\nStudent Name: ");
    fgets(name1, sizeof(name1), stdin);
    printf("ID Number: ");
    scanf("%d", &id1);

    printf("Math Grade: ");
    scanf("%d", &math1);
    printf("Science Grade: ");
    scanf("%d", &science1);
    printf("English Grade: ");
    scanf("%d", &english1);

    total1 = math1 + science1 + english1;
    printf("Total Grade: %d", total1);

    average1 = total1 / 3;
    printf("\nTotal Average: %0.2f\n\n", average1);

    fprintf(nfile1, "Student Name: %s", name1);
    fprintf(nfile1, "Student ID: %d\n", id1);
    fprintf(nfile1, "Math Grade: %d\n", math1);
    fprintf(nfile1, "Science Grade: %d\n", science1);
    fprintf(nfile1, "English Grade: %d\n", english1);
    fprintf(nfile1, "Total Grade: %d\n", total1);
    fprintf(nfile1, "Total Average: %0.2f", average1);

    fclose(nfile1);


/*Read student 1 data*/

    nfile1 = fopen("student_1.txt", "r");

    printf("\nStudent Data\n\n");

    printf("Student Name: %s", name1);
    printf("Student ID: %d\n", id1);
    printf("Math Grade: %d\n", math1);
    printf("Science Grade: %d\n", science1);
    printf("English Grade: %d\n", english1);
    printf("Total Grade: %d\n", total1);
    printf("Total Average: %0.2f", average1);

    fclose(nfile1);


/*STUDENT 2*/
/*Write student 2 data*/

    nfile2 = fopen("student_2.txt", "w");
    if(nfile2 == NULL)
    {
        printf("Error opening file!");
        return(-1);
    }

    printf("\n\nStudent Name: ");
    fgetc(stdin); // Cannot enter student name without this
    fgets(name2, sizeof(name2), stdin);
    printf("ID Number: ");
    scanf("%d", &id2);

    printf("Math Grade: ");
    scanf("%d", &math2);
    printf("Science Grade: ");
    scanf("%d", &science2);
    printf("English Grade: ");
    scanf("%d", &english2);

    total2 = math2 + science2 + english2;
    printf("Total Grade: %d", total2);

    average2 = total2 / 3;
    printf("\nTotal Average: %0.2f\n\n", average2);

    fprintf(nfile2, "Student Name: %s", name2);
    fprintf(nfile2, "Student ID: %d\n", id2);
    fprintf(nfile2, "Math Grade: %d\n", math2);
    fprintf(nfile2, "Science Grade: %d\n", science2);
    fprintf(nfile2, "English Grade: %d\n", english2);
    fprintf(nfile2, "Total Grade: %d\n", total2);
    fprintf(nfile2, "Total Average: %0.2f", average2);

    fclose(nfile2);

/*Read student 2 data*/

    nfile2 = fopen("student_2.txt", "r");

    printf("\nStudent Data\n\n");

    printf("Student Name: %s", name2);
    printf("Student ID: %d\n", id2);
    printf("Math Grade: %d\n", math2);
    printf("Science Grade: %d\n", science2);
    printf("English Grade: %d\n", english2);
    printf("Total Grade: %d\n", total2);
    printf("Total Average: %0.2f", average2);

    fclose(nfile2);

    return 0;
}