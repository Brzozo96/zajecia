#include "Potega.h"

double Potega::potega(int n, int m) {

    if(m==0) return 1;
    else return n * potega(n, m - 1);

}
