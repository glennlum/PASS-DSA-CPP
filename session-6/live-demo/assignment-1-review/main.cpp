#include <iostream>
#include "Application/Application.hpp"

//Executes the application
int main(void)
{
    Application windLogApp;
    windLogApp.runWithFile("metdata.txt");
}