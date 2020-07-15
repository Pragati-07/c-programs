#include <stdio.h>
#include <stdlib.h>
#define N 2
struct Student{
int rollno;
char name[20];
int age;
float total_marks;
};
int main()
{
    int i;
    struct Student s[N];
    printf("Enter details of %d students :\n",N);
    for(i=0;i<N;i++)
    {
        printf("Enter Roll_No, Name, Age, Total_Marks of Student %d\n",i+1);
        scanf("%d",&s[i].rollno);
        scanf("%s",&s[i].name[0]);
        scanf("%d",&s[i].age);
        scanf("%f",&s[i].total_marks);
    }
    printf("Student Records:\n\n");
    for (i = 0; i < N; i++) {
        printf("\tName = %s\n", s[i].name);
        printf("\tRoll Number = %d\n", s[i].rollno);
        printf("\tAge = %d\n", s[i].age);
        printf("\tTotal Marks = %0.2f\n\n", s[i].total_marks);
    }


    return 0;
}
