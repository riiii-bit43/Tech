#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s[3] = {{"Alice", 1, 85.5}, {"Bob", 2, 92.0}, {"Charlie", 3, 78.5}};
    float max = s[0].marks;
    int index = 0;
    
    for (int i = 1; i < 3; i++) {
        if (s[i].marks > max) {
            max = s[i].marks;
            index = i;
        }
    }
    
    printf("Student with highest marks:\n");
    printf("Name: %s, Roll: %d, Marks: %.2f\n", s[index].name, s[index].roll, s[index].marks);
    
    return 0;
}