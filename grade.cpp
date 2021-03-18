/* Name: Sabrina Pinera
Date: 09/06/2018
Section: section 5
Assignment: Assignment# 2
Due Date: 09/21/2018
About this project: Calculate and display the user's homework average, their test average, and their final course percentage.
		    Print these values out to two decimal places.
		    Use either a switch statement or an if/else if block to determine what letter grade the user earned
		    based on their final course grade percentage. See the course syllabus for the letter grade breakdowns.
Assumptions: Program outputs homework average, test average, final course percentage, and final letter grade.

All work below was performed by Sabrina Pinera */
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    int hw1, hw2, hw3, hw4, hw5, hw6, hw7;
    int rec1, rec2, rec3, rec4, rec5, rec6;
    int extra_cred, midterm_1, midterm_2, final, homework, recitation;
    double  homework_avg, test_avg, course_avg, course_grade;


    cout << "Welcome to the Grade Calculator!\n\n";

    //Asking for homework grades
    cout << "HOMEWORK GRADES -->\n";
    cout << "Homework 1: ";
    cin >> hw1;
    cout << "Homework 2: ";
    cin >> hw2;
    cout << "Homework 3: ";
    cin >> hw3;
    cout << "Homework 4: ";
    cin >> hw4;
    cout << "Homework 5: ";
    cin >> hw5;
    cout << "Homework 6: ";
    cin >> hw6;
    cout << "Homework 7: ";
    cin >> hw7;

    //Asking for recitation grades
    cout << "\n\nRECITATION GRADES -->\n";
    cout << "Recitation 1: ";
    cin >> rec1;
    cout << "Recitation 2: ";
    cin >> rec2;
    cout << "Recitation 3: ";
    cin >> rec3;
    cout << "Recitation 4: ";
    cin >> rec4;
    cout << "Recitation 5: ";
    cin >> rec5;
    cout << "Recitation 6: ";
    cin >> rec6;

    //Asking for test grades
    cout << "\n\nTEST GRADES -->\n";
    cout << "Midterm I: ";
    cin >> midterm_1;
    cout << "Midterm II: ";
    cin >> midterm_2;
    cout << "Final: ";
    cin >> final;

    //checking if there is extra credit, no extra credit, or an error input.
    char ch;
    cout << "\nIs there any extra credit to add in? (Y or N) --> ";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        cout << "How many extra credit points should be added? --> ";
        cin >> extra_cred;

	homework = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7);
        recitation = ((rec1 + rec2 + rec3 + rec4 + rec5 + rec6)/6);
        homework_avg = ((homework + recitation + extra_cred)/820.0) * 100;
        test_avg = ((midterm_1 * 17.5) + (midterm_2 * 17.5) + (final * 25))/ 60;
        course_avg = (midterm_1 * .175) + (midterm_2 * .175) + (final * .25) + (homework_avg * .40);
        course_grade = course_avg;

        cout << fixed << setprecision(2) <<"\nHomework Average: " << homework_avg << "%";
        cout << "\nTest Average: " << test_avg << "%";
        cout << "\nCourse Average: " << course_avg << "%\n";

        //course Grade
        if (course_grade >= 90)
        {
            cout << "Course Grade: A\n";
        }
        else if (course_grade >= 80)
        {
            cout << "Course Grade: B\n";
        }
        else if (course_grade >= 70)
        {
            cout << "Course Grade: C\n";
        }
        else if (course_grade >= 60)
        {
            cout << "Course Grade: D\n";
        }
	else
        {
            cout << "Course Grade: F\n";
        }

   }
    else if (ch == 'N' || ch == 'n')
    {
        extra_cred = 0;

	homework = (hw1 + hw2 + hw3 + hw4 + hw5 + hw6 + hw7);
        recitation = ((rec1 + rec2 + rec3 + rec4 + rec5 + rec6)/6);
        homework_avg = ((homework + recitation + extra_cred)/820.0) * 100;
        test_avg = ((midterm_1 * 17.5) + (midterm_2 * 17.5) + (final * 25))/ 60;
        course_avg = (midterm_1 * .175) + (midterm_2 * .175) + (final * .25) + (homework_avg * .40);
        course_grade = course_avg;

        cout << fixed << setprecision(2) <<"\nHomework Average: " << homework_avg << "%";
        cout << "\nTest Average: " << test_avg << "%";
        cout << "\nCourse Average: " << course_avg << "%\n";

        //course Grade
        if (course_grade >= 90)
        {
            cout << "Course Grade: A\n";
        }
        else if (course_grade >= 80)
        {
            cout << "Course Grade: B\n";
        }
        else if (course_grade >= 70)
        {
            cout << "Course Grade: C\n";
        }
        else if (course_grade >= 60)
        {
            cout << "Course Grade: D\n";
        }
        else
        {
            cout << "Course Grade: F\n";
        }

    }
    else
    {
        cout << "\nInvalid option, exiting program.\n";
    }

    return 0;
}
