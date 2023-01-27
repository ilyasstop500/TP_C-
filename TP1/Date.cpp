#include "Date.h"
#include <cassert>

bool Date::isDate(int day, int month, int year){
    if ((day < 1) || (day>31)) return false; 
    if ((month <1) || (month>12)) return false; 
    if ((month == 2) && (day > 28)) return false; 
    if (((month == 4) || (month == 6) || (month == 9) || (month == 11)) && (day > 30)) return false; 
    return true;
}

Date::Date(){}

Date::Date(int day, int month, int year):_day(day),_month(month),_year(year){
    bool res = isDate(day,month,year) ;
    assert(res) ; 
}

int Date::getday(){
    return _day ;
}

int Date::getmonth(){
    return _month ;
}

int Date::getyear(){
    return _year ;
}

void Date::setDate(int month, int day, int year){
    _day=day;
    _month=month;
    _year=year ;
}
