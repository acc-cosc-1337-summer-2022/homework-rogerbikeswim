//write include statement for decisions header
#include "decisions.h"
#include<string>

using std::string;

//Write code for function(s) code here

int get_grade_points(char letter_grade)
{
    int grade_points;

    switch(letter_grade)    //told to be a string - VS Code would not accept if not CHAR
    {
    case'A':
        grade_points = 4;
        break;

    case'B':
        grade_points = 3;
        break;

    case'C':
        grade_points = 2;
        break;

    case'D':
        grade_points = 1;
        break;

    case'F':
        grade_points = 0;
        break;
    
    default:
        grade_points = 0;
    }
    return grade_points;

}

double calculate_gpa(int credit_hours, double credit_points)
{
    return credit_points/credit_hours;    
}