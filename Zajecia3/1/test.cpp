#include <iostream>
#include <TUniversity.h>
#include <TStudent.h>
#include <vector>

using namespace std;


void TUniversity::attach() {
    TStudent* stu = new TStudens[5];
    students.push(stu);
}

void TUniversity::detach() {
    for (it=students.begin(); it!=students.end(); it++){
        delete [] *it;
    }
}

TStudent::TStudent() {
    cout<<"Konstruktor TStudent"<<endl;
}

TStudent::~TStudent() {
    cout<<"Destruktor TStudent"<<endl;
}


int main(){

    TUniversity *test = new TUniversity;
    test->attach();
    test->detach();
    delete test;
    cin.get();
    return 0;


    return 0;
}
