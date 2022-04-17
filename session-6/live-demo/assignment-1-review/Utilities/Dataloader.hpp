#ifndef DATALOADER_HPP
#define DATALOADER_HPP

#include <iostream>
#include "Vector.hpp"
#include "../Classes/Windlog.hpp"

using namespace std;

// Provides file IO components
class Dataloader
{
public:
    //.....
    Vector<Windlog> *extractDataFromFile(string filename);

private:
    //.....
};

#endif
