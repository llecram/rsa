#include "operaciones.h"
ll euclides(ll a, ll b) {
	ll r1 = a;
	ll r2 = b;
	while (r2 > 0) {
		ll q = r1 / r2;
		ll r = r1 - q * r2;
		r1 = r2;
		r2 = r;
	}
	return r1;
}
long long euclidesext(int a, int b) {
	long long r1 = a;
	long long r2 = b;
	long long s1 = 1;
	long long s2 = 0;
	long long t1 = 0;
	long long t2 = 1;
	long long s = 0;
	long long t = 0;
	while (r2 > 0) {
		int q = r1 / r2;
		int r = r1 - q * r2;
		r1 = r2;
		r2 = r;
		s = s1 - q * s2;
		s1 = s2;
		s2 = s;
		t = t1 - q * t2;
		t1 = t2;
		t2 = t;
	}
	s = s1;
	t = t1;
	return s;
}
ll modulo(ll a, ll b) {
	if (b == 0) {
		return 0;
	}
    while(a%b<0){
        a+=b;
    }
    return a%b;
}
ll expomod(ll a, ll b, ll c){
    ll exp;
    exp=1;
    ll x=a%c;
    while(b>0 and x>1){
        if(b%2!=0){
            exp=(exp*x)%c;
        }
        x=(x*x)%c;
        b=b/2;
    }
    return exp;
}
ll euler(ll a,ll b){
    ll c;
    c=(a-1)*(b-1);
    return c;
}
bool Primalidad(ll a){
	if(a<2)return 0;
	if(a<4)return 1;
	if(modulo(a,2)==0)return 0;
	ll e=sqrt(a)+1;
	bool arr[e];
	for(ll i=0;i<e;i++)arr[i]=1;
	for(ll i=3;i<e;i+=2){
		if(arr[i]){
			if(modulo(a,i)==0)return 0;
			for(ll j=i*i;j<e;j+=i){
				arr[j]=0;
			}
		}
	}
	return 1;
}
