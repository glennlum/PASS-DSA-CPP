#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "../Utilities/Vector.hpp"
#include "../Utilities/Display.hpp"
#include "../Utilities/Calculation.hpp"
#include "../Utilities/Dataloader.hpp"
#include "../Classes/Windlog.hpp"

using namespace std;

// Encapsulates application business logic
class Application
{
public:
    //.....
    void runWithFile(string filename);

private:
    //.....
    bool loadData();
    void goToMenu();
    void subProgram1();
    void subProgram2();
    void subProgram3();
    void subProgram4();
    //.....
    string filename;
    Vector<Windlog> *windLogData;
    Display display;
    Calculation calculation;
    Dataloader dataloader;
};

#endif
