//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : Newton.cpp
//  @ Date : 19.03.2018
//  @ Author :
//
//


#include "Newton.h"
#using <mscorlib.dll>

long double Newton::newton(int n, int k) {
    return pomSilnia.silnia(n)/( pomSilnia.silnia(k)*pomSilnia.silnia(n-k) );
}
