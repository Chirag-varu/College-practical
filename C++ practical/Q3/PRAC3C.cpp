#include <iostream.h>
#include <conio.h>

class MyClass {
private:
    static int objectCount;

public:
    MyClass() {
        objectCount++;
    }

    ~MyClass() {
        objectCount--;
    }

    static void showCount() {
        cout << "Number of objects created: " << objectCount << endl;
    }
};

int MyClass::objectCount = 0;

int main() {
    clrscr();

    cout << "\nName= Chirag \tSap_ID= 53003230110\n" << endl;

    MyClass obj1;
    MyClass obj2;
    MyClass obj3;

    MyClass::showCount();

    getch();
    return 0;
}
