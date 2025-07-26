#include<stdio.h>
    struct student{
    char name;
    int marks;
    float cgp;
    char course;
}s1,s2,s3;
int main(){

    printf("Enter s1 data\n");
    scanf("%s",&s1.name);
    printf("Enter s1 marks\n");
    scanf("%d",&s1.marks);
    printf("Enter s1 cgp\n");
    scanf("%f",&s1.cgp);
    printf("Enter s1 course\n");
    scanf("%s",&s1.course);

    printf("Enter s2 name\n");
    scanf("%s",&s2.name);
    printf("Enter s2 marks\n");
    scanf("%d",&s2.marks);
    printf("Enter s2 cgp\n");
    scanf("%f",&s2.cgp);
    printf("Enter s2 course\n");
    scanf("%s",&s2.course);
    
    printf("Enter s3 name\n");
    scanf("%s",&s3.name);
    printf("Enter s3 marks\n");
    scanf("%d",&s3.marks);
    printf("Enter s3 cgp\n");
    scanf("%f",&s3.cgp);
    printf("Enter s3 course\n");
    scanf("%s",&s3.course);
    
// print for s1
    printf("%s",s1.name);
    printf("%d",s1.marks);
    printf("%f",s1.cgp);
    printf("%s",s1.course);

// print for s2
    printf("%s",s2.name);
    printf("%d",s2.marks);
    printf("%f",s2.cgp);
    printf("%s",s2.course);

// print for s3
    printf("%s",s3.name);
    printf("%d",s3.marks);
    printf("%f",s3.cgp);
    printf("%s",s3.course);
    return 0;
}
