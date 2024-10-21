#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
    float chem_marks;
    float maths_marks;
    float phy_marks;
};

int main() {
    struct Student students[5];
    int i;
    
    printf("Enter the details of 5 students:\n");
    for (i = 0; i < 5; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Enter Roll Number: ");
        scanf("%d", &students[i].roll_no);
        printf("Enter Name: ");
        scanf(" %[^\n]", students[i].name);
        printf("Enter Chemistry Marks (out of 100): ");
        scanf("%f", &students[i].chem_marks);
        printf("Enter Mathematics Marks (out of 100): ");
        scanf("%f", &students[i].maths_marks);
        printf("Enter Physics Marks (out of 100): ");
        scanf("%f", &students[i].phy_marks);
    }

    // Display student details and calculate percentage
    printf("\nMark Sheets:\n");
    for (i = 0; i < 5; i++) {
        float total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = (total_marks / 300.0) * 100.0;

        printf("\nStudent %d:\n", i + 1);
        printf("Roll Number: %d\n", students[i].roll_no);
        printf("Name: %s\n", students[i].name);
        printf("Chemistry Marks: %.2f\n", students[i].chem_marks);
        printf("Mathematics Marks: %.2f\n", students[i].maths_marks);
        printf("Physics Marks: %.2f\n", students[i].phy_marks);
        printf("Percentage: %.2f%%\n", percentage);
    }

}

