#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Numbers
{
    private:
    int number;
    string lessThan20[20] = {"zero", "one", "two", "three", "four", "five", "six", "seven"
                            , "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen"
                            , "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    string zeroToTen[11] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};
    string teenClun[9]= {"eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string theTyClub[10] = {"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    string hundred = "hundred";
    string thousand = "thousand";
    public:
    Numbers(int number)
    {
        this->number=number;
    }
    void print()
    {

        if (number >= 0 && number <= 19)
        {
            cout << lessThan20[number];
        }
            else if (number>=20 && number <=99)
        {
            if (number %=10)
            {
            cout << theTyClub[number*10];
            }
            else {
            cout<< theTyClub[number*10]<<""<<lessThan20[number+20];
            }
        }

    }
};



int main()
{
    int theNum;
    cout <<"insert: ";
    cin>>theNum;

    Numbers num(theNum);
    num.print();

    /*int Number;       // number to be converted to a string

    string Result;          // string which will contain the result

    ostringstream convert;   // stream used for the conversion

    convert << Number;      // insert the textual representation of 'Number' in the characters in the stream

    Result = convert.str(); // set 'Result' to the contents of the stream

    cout << Result;      // 'Result' now is equal to "123"*/

    return 0;
}
