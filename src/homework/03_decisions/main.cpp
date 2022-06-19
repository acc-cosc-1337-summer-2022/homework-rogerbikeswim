//write include statements
#include "decisions.h"
#include<iostream>

using std::cout;
using std::cin;
using std::endl;

int main() 
{
	char letter_grade;
	int credit_hours;
	int grade_points;
	double credit_points;

	grade_points = 0;

	// cin to capture letter_grade and credit_hours from the keyboard with a do-while loop

	cout<<"\nEnter the letter grade (A, B, C, D, or F): ";
	cin>>letter_grade;

	cout<<"\nEnter the credit hours: ";
	cin>>credit_hours;

	//get_grade_points(letter_grade);

	credit_points = credit_hours * get_grade_points(letter_grade);

	//calculate_gpa(credit_hours, credit_points);

	cout<<"\nThe total credit points are "<<credit_points<<endl;
	cout<<"The total credit hours are "<<credit_hours<<endl;
	cout<<"The final GPA is "<< calculate_gpa(credit_hours, credit_points)<<endl<<endl;

	return 0;
}