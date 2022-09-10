#include"TechTask.h"
#include"log.h"
#include <iostream>

int cases = 0;
int oneCase = 0;


int main()
{
    BasicLogger bl;
    employee e;
    
    
        cout << "Type the amount of shifts of an employee's you want to add: ";
        std::cin >> cases;
        cout << endl;
        
        while (cases < 1)
        {
            std::cout << "Wrong input, try again! " << endl;
            std::cout << "Type atleast one request!" << endl;
            bl.Log(FatalP, "Uncorrectly typed the amount of requests! ",cases);
            std::cin >> cases;
        }
 
    std::cout << "Now you have to type: Name, email, ";
    std::cout << "department, position, project, task, year, date, logged_hours of an employee; " << std::endl << std::endl;

    try {

        for (int i = 0; i < cases; i++) {

            std::cout << "Name: ";
            std::cin >> e.names[i];

            std::cout << "Email: ";
            std::cin >> e.emails[i];

            std::cout << "Department: ";
            std::cin >> e.departments[i];

            std::cout << "Position: ";
            std::cin >> e.positions[i];

            std::cout << "Project: ";
            std::cin >> e.projects[i];

            std::cout << "Tasks: ";
            std::cin >> e.tasks[i];

            std::cout << "Year: ";
            std::cin >> e.years[i];

            std::cout << "Month: ";
            std::cin >> e.dates[i];

            while (e.dates[i] > 12)
            {
                std::cout << "Wrong input, try again! " << endl;
                std::cout << "There is only 12 months in a year!" << endl;
                bl.Log(ErrorP, "Uncorrectly typed the amount of months! ", e.dates[i]);
                std::cin >> e.dates[i];
            }

            std::cout << "Day of month: ";
            std::cin >> e.dayOfMonth[i];

            while (e.dayOfMonth[i] > 31)
            {
                std::cout << "Wrong input, try again! " << endl;
                std::cout << "There is only 31 days in a month! " << endl;
                bl.Log(ErrorP, "Uncorrectly typed day of month! ", e.dayOfMonth[i]);
                std::cin >> e.dayOfMonth[i];
            }


            std::cout << "logged hours: ";
            std::cin >> e.logged_hours[i];
            std::cout << endl;

            while (e.logged_hours[i] <= 0)
            {
                std::cout << "Wrong input, try again! " << endl;
                bl.Log(ErrorP, "Uncorrectly typed the logged hours! ", e.logged_hours[i]);
                std::cin >> e.logged_hours[i];
            }

            if (cases > 1)
                std::cout << endl << "Next request:------------------------------------------" << endl;

        }

        std::cout << std::endl;
        std::cout << "       --- Table of employees--- " << endl << endl;
        std::cout << "Name, Month, Total hours\n";

        int check;
        if (check = e.monthlyReport(cases)) {
            bl.Log(InfoP, "Succussfully made monthly report of all employees!", check);
        }
        else
        {
            bl.Log(ErrorP, "Error spotted in function (montlyReport) !", check);
            throw "error";
        }
        
    }
    catch (...) {
        std::cout << "Exeption caught " << std::endl;
    }
   
    open.close();
}
