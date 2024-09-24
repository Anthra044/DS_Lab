#include <stdio.h>

struct student 
{
    char name[50];
    char usn[10];
    int mn;
};

void stu(struct student s) 
{
    printf("Name: %s\n", s.name);
    printf("USN: %s\n", s.usn);
    printf("No.: %d\n", s.mn);
}

int main() 
{
    int x;
    printf("Enter no. of students: ");
    scanf("%d", &x);
    
    struct student s[x];
    for (int i = 0; i < x; i++) {
        printf("Enter Name: ");
        scanf("%s", s[i].name);
        printf("Enter USN: ");
        scanf("%s", s[i].usn);
        printf("Enter No.: ");
        scanf("%d", &s[i].mn);
    }

    // Display student information
    for (int i = 0; i < x; i++) {
        stu(s[i]);
    }

    return 0;
}
