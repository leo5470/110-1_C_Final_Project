#include <stdio.h>
#include <stdlib.h>
#include "student.h"
#include "gpa.h"

int main(){
    student student1;
    student *ptr = &student1;
    int count;
    char grade[3];
    int credit;
    printf("請輸入計算學生名稱，不得超過十個字。\n");
    scanf("%s", (ptr -> name));
    printf("請輸入總課堂數。\n");
    scanf("%d", &(ptr -> total));
    for(count = 0; count < student1.total; ++count){
        printf("請輸入第%d堂課的等第及學分數，以逗號隔開。\n", count + 1);
        scanf("%s %d", grade, &credit);
        gpa(grade, credit, &(student1.gpa));
    }
    printf("%s同學的GPA為%.2f。\n", student1.name, student1.gpa);
}