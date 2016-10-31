#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

class DayOfYear
{
    private:
    int day;
    int month;
    string months[13] = {"","January","February","March","April",
                        "May","June","July","August","September",
                        "October","November","December"};
    int dayOfTheMonth[32] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26,27, 28, 29 ,30, 31};
 /*   //string setMonths()
    {
        return months;
    }
    void getMonths(int dayOfTheMonth)
    {
        int dayOfTheMonth[31] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
                            11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
                            21, 22, 23, 24, 25, 26,27, 28, 29 ,30, 31};
    }
    */
    public:
    DayOfYear(int day)
    {
        this->day =  day;
        this->month = month;
    }

    void printMonth()
    {
        for(int i = 0; i < 13; i++)
        {
            if(dayOfTheMonth[i] - day >= 0)
            {
					cout << months[i] << " " << endl;
                    break;
            }

        }
    }

    void printWithDay()
    {
        for(int i = 0; i < 31; i++)
        {
            if(dayOfTheMonth[i] - day >= 0)
            {
					cout << dayOfTheMonth[i] << endl;
                    break;
            }

        }
    }

};

int main()
{
    int theday;
    int themonth;
    cout <<"Input a month from month 1 to 12: ";
    cin>> themonth;
    cout <<"Input a day: ";
    cin>>theday;

    DayOfYear day(themonth);
    day.printMonth();

    DayOfYear month(theday);
    month.printWithDay();

    return 0;
}
