#if !defined(_BERNOULLI_H)
#define _BERNOULLI_H

#include "Newton.h"
#include "Potega.h"

class Bernoulli {
public:
    void bernoulli(int k, int n, int p);
private:
    Newton pomNewton;
    Potega pomPotega;
    long double P;
    double q;
};

#endif
