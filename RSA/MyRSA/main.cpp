
#include "rsa.h"
using namespace std;
int main(){
    RSA first;
    first.cifrador(4);
    first.descifrar(first.getkeypri());
}
