#include<iostream>
#include<fstream>
#include<vector>
#include< iomanip >
#include<numeric>
#include<algorithm>
#include<string>
#include<fstream>
using namespace std;

fstream open("file1.txt");

/*I Couldn't implement the aimed sense (reading from a file then sorting month report and push to the next file) 
I have done in writing in console instead of;
I've been searching for a while for the correct reading and then sorting it from the file, but my attempt failed,
I understand how it should be (kind of I should read from the file, push into the arrays, every "name, month, logged hours" 
must have their container for scanning/sorting from the file, then making monthly report)
but I haven't found out any function/logic specifically for strings
(it is easy to read numeric values from the file and append it ) to create a monthly report of all employees,
I did my best!*/

//I was able to execute this program by displaying the data in the console
//sorting employee's hours to create a monthly report and write the correct data into the file
//probably this is not the most effective solution out of all possible solutions, but it fully performs its purpose
// here I combined outputting data to the console and also write it into the file file1.txt
//In the main function of the monthly report, I computed the hours with the same names of employees and displayed the result
//I computed all possible cases up to 25 requests (25 working days) per employee
//I added a log class for denoting errors in a file


class employee {
public:
    int cases = 0;
    int totalHours = 0;
 
    int countNameEmployees = 0;
    
    vector<string> names;
    vector < string> emails;
    vector < string> departments;
    vector < string> positions;
    vector < string> projects;
    vector <string> tasks;
    vector<int> dates;
    vector<int> years;
    vector<int> dayOfMonth;
    vector<int> logged_hours;

    void initializing() {

        for (int i = 0; i < 100; i++)
        {
            names.push_back("");
            emails.push_back("");
            departments.push_back("");
            positions.push_back("");
            projects.push_back("");
            tasks.push_back("");
            dates.push_back(0);
            years.push_back(0);
            dayOfMonth.push_back(0);
            logged_hours.push_back(0);

        }
    }
   
    employee(){ open << "Name, Month, Total Hours;" << endl; }
    
    void writingContentToFile(int i,int d)
    {
       
       
        if (open.is_open())
        {
            
            open << names[i] << "," ;

            switch (d)
            {
            case 1: open<< "  January," << " "; break;
            case 2: open << "  February," << " "; break;
            case 3: open << "  March," << " "; break;
            case 4: open << "  April," << " "; break;
            case 5: open << "  May," << " "; break;
            case 6: open << "  June," << " "; break;
            case 7: open << "  July," << " "; break;
            case 8: open << "  August," << " "; break;
            case 9: open << "  September," << " "; break;
            case 10: open << "  October," << " "; break;
            case 11: open << " November," << " "; break;
            case 12: open << " December," << " "; break;
            }
            
            open << totalHours  << endl;
            
        }
        else cout << "Problem with opening file";
    }

    void func(int i, int totalHours) {

        std::cout << names[i] << "," << " ";

        int d = dates[i];
        switch (d)
        {
            case 1: std::cout << "  January," << " "; break;
            case 2: std::cout << "  February," << " " ; break;
            case 3: std::cout << "  March," << " "; break;
            case 4: std::cout << "  April," << " " ; break;
            case 5: std::cout << "  May," << " " ; break;
            case 6: std::cout << "  June," << " " ; break;
            case 7: std::cout << "  July," << " " ; break;
            case 8: std::cout << "  August," << " "; break;
            case 9: std::cout << "  September," << " " ; break;
            case 10: std::cout << "  October," << " " ; break;
            case 11: std::cout << " November," << " " ; break;
            case 12: std::cout << " December," << " " ; break;
        }
       
        std::cout << totalHours << endl;
        writingContentToFile(i,d);
    }

    int monthlyReport(int cases) 
    {

        for (int i = 0; i < cases; i++)
        {
            if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19],
            names[i + 20], names[i + 21], names[i + 22], names[i + 23], names[i + 24],names[i+25]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]
                + logged_hours[i + 19] + logged_hours[i + 20] + logged_hours[i + 21]
                + logged_hours[i + 22] + logged_hours[i + 23] + logged_hours[i + 24]+logged_hours[i+25];

                func(i,totalHours);
                i = +25;
            }

             else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
             names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
             names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
             names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19],
             names[i + 20], names[i + 21], names[i + 22], names[i + 23],names[i+24]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]
                + logged_hours[i + 19] + logged_hours[i + 20] + logged_hours[i + 21] 
                + logged_hours[i + 22] + logged_hours[i + 23]+logged_hours[i+24];

                func(i, totalHours);
                i = +24;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19],
            names[i + 20], names[i + 21], names[i + 22],names[i+23]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]
                + logged_hours[i + 19] + logged_hours[i + 20] + logged_hours[i + 21] 
                    + logged_hours[i + 22]+logged_hours[i+23];

                func(i, totalHours);
                i = +23;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19], names[i + 20], names[i + 21],names[i+22]))
            {
                 totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]
                + logged_hours[i + 19] + logged_hours[i + 20] + logged_hours[i + 21]+logged_hours[i+22];

                 func(i, totalHours);
                i = +22;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19], names[i + 20],names[i+21]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]
                + logged_hours[i + 19] + logged_hours[i + 20]+logged_hours[i+21];

                func(i, totalHours);
                i = +21;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18], names[i + 19],names[i+20]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18] 
                + logged_hours[i + 19]+logged_hours[i+20];

                func(i, totalHours);
                i = +20;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17], names[i + 18],names[i+19]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i + 18]+logged_hours[i+19];

                func(i, totalHours);
                i = +19;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],
            names[i + 15], names[i + 16], names[i + 17],names[i+18]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15] 
                + logged_hours[i + 16] + logged_hours[i + 17] + logged_hours[i+18];

                func(i, totalHours);
                i = +18;
            }

             else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
             names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
             names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14], 
             names[i + 15], names[i + 16],names[i+17]))
             {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15] + logged_hours[i + 16]+ logged_hours[i + 17];

                func(i, totalHours);
                i = +17;
             }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14], names[i + 15],names[i+16]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                    logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                    + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i + 15]+logged_hours[i+16];

                    func(i, totalHours);
                    i = +16;
            }

             if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
            names[i + 10], names[i + 11], names[i + 12], names[i + 13], names[i + 14],names[i+15]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12]
                + logged_hours[i + 13] + logged_hours[i + 14] + logged_hours[i+15];

                func(i, totalHours);
                i = +15;
            }

             else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
             names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9],
             names[i + 10], names[i + 11], names[i + 12], names[i + 13],names[i+14]))
             {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12] 
                + logged_hours[i + 13]+logged_hours[i+14];

                func(i, totalHours);
                i = +14;
             }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9], 
            names[i + 10], names[i + 11], names[i + 12],names[i+13]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11] + logged_hours[i + 12] + logged_hours[i+13];

                func(i, totalHours);
                i = +13;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9], names[i + 10], names[i + 11],names[i+12]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1]
                + logged_hours[i + 2] + logged_hours[i + 3] +
                logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] +
                logged_hours[i + 10] + logged_hours[i + 11]+ logged_hours[i+12];

                func(i, totalHours);
                i = +12;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9], names[i + 10],names[i+11]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] + logged_hours[i + 10]+logged_hours[i+11];

                    func(i, totalHours);
                    i = +11;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9], names[i + 10]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9] + logged_hours[i + 10];

                    func(i, totalHours);
                    i = +10;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8], names[i + 9]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7] + logged_hours[i + 8] + logged_hours[i + 9];

                    func(i, totalHours);
                    i = +9;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7], names[i + 8]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7] + logged_hours[i + 8];

                    func(i, totalHours);
                    i = +8;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6], names[i + 7]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6] +
                    logged_hours[i + 7];

                    func(i, totalHours);
                    i = +7;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5], names[i + 6]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5] + logged_hours[i + 6];

                    func(i, totalHours);
                    i = +6;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4],
            names[i + 5]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] +
                    logged_hours[i + 4] + logged_hours[i + 5];

                    func(i, totalHours);
                    i = +5;
            }

            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3], names[i + 4]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3] + logged_hours[i + 4];

                    func(i, totalHours);
                    i = +4;
            }
            else if (names[i] == (names[i + 1], names[i + 2], names[i + 3]))
            {
                    totalHours = +logged_hours[i] + logged_hours[i + 1]
                    + logged_hours[i + 2] + logged_hours[i + 3];

                    func(i, totalHours);
                    i = +3;
            }

            else if (names[i] == (names[i + 1], names[i + 2]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1] + logged_hours[i + 2];
                func(i, totalHours);
                i += 2;
            }

            else if (names[i] == (names[i + 1]))
            {
                totalHours = +logged_hours[i] + logged_hours[i + 1];
                func(i, totalHours);
                i += 1;
            }
           
             else if (names[i] != names[i + 1])
             {
                    totalHours = +logged_hours[i];
                    func(i,totalHours);
              }

        }
        
        std::cout << endl;
        return 1;

    }

};
