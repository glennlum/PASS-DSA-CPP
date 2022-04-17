#include "Application.hpp"

void Application::runWithFile(string filename)
{
    bool fileLoaded = loadData();
    if (fileLoaded)
    {
        goToMenu();
    }
}

bool Application::loadData()
{
    try
    {
        windLogData = dataloader.extractDataFromFile(filename);
        return true;
    }
    catch (...)
    {
        cout << "Error: file not found" << endl;
        return false;
    }
}

void Application::goToMenu()
{
    int choice = 0;
    do
    {
        choice = display.userInputChoice();
        switch (choice)
        {
        case 1:
            subProgram1();
            break;
        case 2:
            subProgram2();
            break;
        case 3:
            subProgram3();
            break;
        case 4:
            subProgram4();
            break;
        case 5:
            cout << "Closing..." << endl;
            return;
        }
    } while (choice != 5);
    // Continue to run program until 'Exit' option is selected
    return;
}