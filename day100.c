// Use pointer to struct to modify and display data using -> operator

#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    struct Student *ptr = (struct Student*)malloc(sizeof(struct Student));
    
    scanf("%s %d %d", ptr->name, &ptr->roll, &ptr->marks);
    
    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n", ptr->name, ptr->roll, ptr->marks);
    
    free(ptr);
    return 0;
}

