#include "Bernoulli.h"
#include <iostream>

void Bernoulli::bernoulli(int k, int n, double p) {
    q=1-p;
    P=pomNewton.newton(n,k)*pomPotega.potega(p,k)*pomPotega.potega(q,n-k);
    std::cout<<P;
}
