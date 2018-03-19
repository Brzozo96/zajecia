#include "Newton.h"

long double Newton::newton(int n, int k) {
    return pomSilnia.silnia(n)/( pomSilnia.silnia(k)*pomSilnia.silnia(n-k) );
}
