#include "Address.hpp"

Address::Address()
{
        block = 1;
        unit = 1;
        floor = 1;
        street = "Orchard Rd";
        city = "Singapore";
        country = "Singapore";
        postalCode = 123456;
}

Address::Address(int blk, int fl, int un, string st, string c, string ctry, int pc)
{
        block = blk;
        unit = un;
        floor = fl;
        street = st;
        city = c;
        country = ctry;
        postalCode = pc;
}

Address::~Address()
{
}

void Address::seetBlock(int b)
{
        block = b;
}
void Address::setFloor(int f)
{
        floor = f;
}
void Address::setUnit(int u)
{
        unit = u;
}
void Address::setStreet(string s)
{
        street = s;
}
void Address::setCity(string s)
{
        city = s;
}
void Address::setCountry(string s)
{
        country = s;
}

void Address::setPostalCode(int pc)
{
        postalCode = pc;
}

void Address::setAddress(int blk, int fl, int un, string st, string c, string ctry, int pc)
{

        block = blk;
        unit = un;
        floor = fl;
        street = st;
        city = c;
        country = ctry;
        postalCode = pc;
}

int Address::getBlock() const
{
        return block;
}
int Address::getFloor() const
{
        return floor;
}
int Address::getUnit() const
{
        return unit;
}
string Address::getStreet() const
{
        return street;
}
string Address::getCity() const
{
        return city;
}
string Address::getCountry() const
{
        return country;
}
int Address::getPostalCode() const
{
        return postalCode;
}

void Address::print() const
{
        cout << "Blk " << block << ", "
             << "# " << floor << "-"
             << unit << ", "
             << street << ", "
             << city << ", "
             << country << ", "
             << postalCode;
}

ostream &operator<<(ostream &os, const Address &A)
{
        os << "Blk " << A.block << ", "
           << "# " << A.floor << "-"
           << A.unit << ", "
           << A.street << ", "
           << A.city << ", "
           << A.country << ", "
           << A.postalCode << endl;

        return os;
}

istream &operator>>(istream &is, Address &A)
{
        is >> A.block >> A.floor >> A.unit >> A.street >> A.city >> A.country >> A.postalCode;

        return is;
}
