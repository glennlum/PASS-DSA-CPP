#ifndef ADDRESS_HPP
#define ADDRESS_HPP

#include <iostream>
#include <string>

using namespace std;

class Address
{

    friend ostream &operator<<(ostream &, const Address &);
    friend istream &operator>>(istream &, Address &);

public:
    Address();
    Address(int blk, int fl, int un, string st, string c, string ctry, int pc);
    ~Address();
    void seetBlock(int b);
    void setFloor(int f);
    void setUnit(int u);
    void setStreet(string s);
    void setCity(string s);
    void setCountry(string s);
    void setPostalCode(int s);
    void setAddress(int blk, int fl, int un, string st, string c, string ctry, int pc);
    int getBlock() const;
    int getFloor() const;
    int getUnit() const;
    string getStreet() const;
    string getCity() const;
    string getCountry() const;
    int getPostalCode() const;
    void print() const;

private:
    int block;
    int unit;
    int floor;
    string street;
    string city;
    string country;
    int postalCode;
};

#endif
