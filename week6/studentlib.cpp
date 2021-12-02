#include "studentlib.h"

void clcGrade(struct studentGrade *input){

    int mid , final;

    mid = input->midterm;
    final = input->final;

    double grade = 0.4 * mid + 0.6 * final;

    input->semesterGrade = grade;

    return;
}
