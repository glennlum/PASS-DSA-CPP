#include "Date.hpp"

Date::Date()
{
        day = 0;
        month = 0;
        year = 0;
}

Date::Date(int d, int m, int y)
{
        day = d;
        month = m;
        year = y;
}

Date::~Date()
{
}

int Date::getDay() const
{
        return day;
}

int Date::getMonth() const
{
        return month;
}

int Date::getYear() const
{
        return year;
}

bool Date::operator<(const Date &d) const
{
        return ((year < d.getYear()) ||
                (year < d.getYear() && month < d.getMonth()) ||
                (year < d.getYear() && month < d.getMonth() && day < d.getDay()));
}

bool Date::operator==(const Date &d) const
{
        if (year == d.getYear() && month == d.getMonth() && day == d.getDay())
                return true;
        else
                return false;
}

ostream &operator<<(ostream &os, const Date &d)
{
        os << d.day << "-" << d.month << "-" << d.year;

        return os;
}
