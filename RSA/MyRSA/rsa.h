#ifndef RSA_H
#define RSA_H

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
        long long n;
        RSA();
        long long getkeypub();
        long long getkeypri();
        long long cifrador(long long);
        long long descifrar(long long);
};

#endif // RSA_H
