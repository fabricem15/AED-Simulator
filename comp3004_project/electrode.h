#ifndef ELECTRODE_H
#define ELECTRODE_H
#include <iostream>
#include <QObject>

using namespace std;
class electrode
{
public:
    electrode();


private:
    string electrodeType;
    string expirationDate;
    bool isConnected;

};

#endif // ELECTRODE_H
