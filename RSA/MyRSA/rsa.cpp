#include "rsa.h"
#include "generatekey.h"
RSA::RSA(){
    long long p=Generar_primo(-1);
    long long q=Generar_primo(p);
    n=p*q;
    long long phi=euler(p,q);
    keypri=Generar_e(phi);
    keypub=euclidesext(keypri,phi);
}
long long RSA::getkeypub(){
    return keypub;
}
long long RSA::getkeypri(){
    return keypri;
}
long long RSA::cifrador(long long a){
    long long b=expomod(a,keypub,n);
    cout<<b<<endl;
	return b;
}
long long RSA::descifrar(long long a){
	long long b=expomod(a,keypri,n);
	cout<<b;
	return b;
}
