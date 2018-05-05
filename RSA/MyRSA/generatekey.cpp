#include "generatekey.h"
#include "operaciones.h"
using namespace std;
long long  Generar_primo(long long f=-1){
	srand(time(NULL));
	long long x;
	bool b=1;
	while(b){
		x=modulo(rand(),10000)+1;
		b=!(Primalidad(x) && x!=f);
	}
	return x;
}
long long Generar_e(long long n){
	srand(time(NULL));
	long long x=rand();
	while(euclides(x,n)!=1){
		x=rand();
	}
	return x;
}
