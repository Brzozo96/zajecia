//
//
//  Generated by StarUML(tm) C++ Add-In
//
//  @ Project : Untitled
//  @ File Name : TBook.cpp
//  @ Date : 05.03.2018
//  @ Author :
//
//


#include "TBook.h"

TBook::TBook() {
}

TBook::~TBook() {
}

void TBook::setTitle(string title) {
    bookTitle=title;
}

string TBook::getTitle() {
    return bookTitle;
}

void TBook::setShelfMark(string mark) {
    shelfMark=mark;
}

string TBook::getShelfMark() {
    return shelfMark;
}

