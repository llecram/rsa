#include "rsa.h"
#include "operaciones.h"
#include "generatekey.h"
RSA::RSA(){
    long long p=Generar_primo(-1);
    long long q=Generar_primo(p);
    long long n=p*q;
    long long phi=euler(p,q);

}
ll RSA::getkeypub(){
    return keypub;
}
ll RSA::getkeypri(){
    return keypri;
}
