// 18

#include <stdio.h>
int main() {
    int writtenTest, labeExam, assignments;

    printf( "Enter the Written test mark: " );
    scanf( "%d", &writtenTest );

    printf( "Enter labexam mark: " );
    scanf( "%d", &labeExam );

    printf( "Enter assignment mark: " );
    scanf( "%d", &assignments );

    int overallGrade = ( writtenTest * 70) / 100 + ( labeExam * 20 ) / 100 + ( assignments * 10 ) / 100;
    printf( "Grade of the student is: %d", overallGrade );
}