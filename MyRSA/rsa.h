#ifndef RSA_H
#define RSA_H
#include "operaciones.h"
#include <stdlib.h>
#include <ctime>
#include <string>
#include <vector>
#include <ctime>
class RSA
{
    public:
        long long keypub;
        long long keypri;
        RSA();
        ll getkeypub();
        ll getkeypri();

};

#endif // RSA_H
