//
// Created by erick-hdz on 16/03/20.
//
#include <iostrem>
#include <String>
#ifndef NEW_SCRIPTS_DATE_H
#define NEW_SCRIPTS_DATE_H


class Date {
    friend istream&operator>>(istream&, Date&);
    friend ostream&operator<<(ostream&, const Date&);
public:
    Date(int m=0, int d=0, int y=0):month(m), day(d), year(y){};
    void Set_Date(int m, int d, int y) {
        month = m, day = d, year = y;
        return;
    }

private:
    int month, day, year;
};

istream & Date::operator>>(istream& in, Date& date) {
    in >> date.month >> date.day >> date.year;
    return in;
}

ostream & Date::operator<<(ostream& out, const Date& date) {
    static char* day_Name[7] = {
            "", "Monday", "Thursday", "Wenesday", "Thursday", "Friday"};
    };
    static char*  month_Name[13] = {'', "January","February", "March",
                                    "April", "May", "June", "July", "August",
                                    "September", "Octeber", "November", "December"};
    out << month_Name[date.month] << ":" << day_Name[date.day] << ":" << date.year;
    return  out;

}


#endif //NEW_SCRIPTS_DATE_H
