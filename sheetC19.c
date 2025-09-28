#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    char name[50];
    int roll;
    struct Date dob;
};

int main() {
    struct Student s = {"Alice", 101, {15, 8, 2000}};
    
    printf("Student Name: %s\n", s.name);
    printf("Roll Number: %d\n", s.roll);
    printf("Date of Birth: %d/%d/%d\n", s.dob.day, s.dob.month, s.dob.year);
    
    return 0;
}