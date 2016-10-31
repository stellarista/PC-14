#include <iostream>

using namespace std;

class DayOfYear
{
    private:
    int day;
    string months[12] = {"January","February","March","April",
                        "May","June","July","August","September",
                        "October","November","December"};
    int daysOfTheMonth[13] = {0, 31, 59, 90, 121, 152, 183, 213, 245, 276, 307, 338, 369};

    public:
    DayOfYear(int day)
    {
        this->day =  day;
    }

    void print()
    {
        for(int i = 0; i < 12; i++)
        {
            if(daysOfTheMonth[i + 1] - day >= 0)
            {
					cout << months[i] << " " << day - daysOfTheMonth[i] << endl;
                    break;
            }

        }
    }

};

int main()
{
    int theday;
    cout <<"Input a day from day 1 to 365: ";
    cin>> theday;

    DayOfYear day(theday);
    day.print();

    return 0;
}
