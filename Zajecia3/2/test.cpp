#include <iostream>
#include <vector>
#include <TStudent.h>
#include <TUniversity.h>

using namespace std;

int main(){

    TStudent *testStudent = new TStudent();
    TUniversity *testUniversity = new TUniversity;
    testUniversity->attach(testStudent);
    testUniversity ->setData(0, "Patryk",21);
    testUniversity ->printData(0);
    testUniversity->detach();
    delete testStudent;
    delete testUniversity;
    cin.get();

    return 0;
}
