/*
    Created by Alex Karasov. 16.08.2021.
    All rights reserved. Alex Karasov © 2021.

*/

// declaration of headers files 
#include <iostream>
using namespace std;
#include <string>

int main(void)
{
    // declaration of variables used in the further calculations
    string firstName, lastName, position;
    int age, termUntilRetirement, workDays = 250, retirement = 55;
    double dailyWage, annualWage, taxRate = 0.2;
    // input data to variables
    cout <<"Enter your first name, please"<<'\n';
    getline(cin,firstName);

    cout <<"Enter your last name, please"<< '\n';
    getline(cin, lastName);
    
    cout <<"Enter your age, please"<< '\n';
    cin >> age;

    cout <<"Enter your daily wage, please"<< '\n';
    cin >> dailyWage;
    // extract and discard characters ('\n' in buffer at this point)
    cin.ignore();

    cout <<"Enter your position, please"<< '\n';
    getline(cin, position);

    // output of early inputed data 
    cout <<"Name: "<< firstName <<' '<< lastName << '\n';

    cout <<"Age: "<< age << '\n';
    // term until retirement calculation is a difference between retirement age and current age of a person
    termUntilRetirement = retirement - age;

    cout <<"Term until retirement: "<< termUntilRetirement << '\n';
    // Annual salary calculation is a difference between salary before taxes and annual taxes 
    annualWage = (dailyWage * workDays)-(dailyWage * taxRate * workDays);

    cout <<"Annual salary after taxes: "<< annualWage << '\n';

    cout << "Position: " << position << '\n';

    return 0;
}




