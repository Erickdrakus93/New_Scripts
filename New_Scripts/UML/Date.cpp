//
// Created by erick-hdz on 16/03/20.
//

#include "Date.h"


// Here we need to declare the main functions as we can see in the next lines in the next code

class Date{
    friend istream&operator>>(istream&,Date&);
    friend ostream&operator<<(ostream&, const Date&);

public:
    Date(int m=0, int d=0, int y=0):month(m), day(d), year(y){};
    void Set_Date(int m, int d, int y){
        month = m, day = d, year = y;
        return;
    }
private:
    int month, day, year;
};



istream & Date::operator>>(istream& istr, Date& date) {
    istr >> date.month >> date.day >> date.year;
    return istr;
}

ostream& Date::operator<<(ostream& ostr, const Date& date) {
    static char* day_name[7] = {
            "Monday", "Thursday", "Wendsday", "Thuesday",
            "Friday"
    };

    static char* month_name[12] = {
            "January", "February", "March", "May",
            "June", "July", "August", "September", "November",
            "December"};
        ostr << month_name[date.month] << ":" << day_name[date.day] << ":" << date.year;
    return ostr;
    // Here is the emcapsulation in the next lines of the code


}