#include <iostream.h>
#include <conio.h>

class Student{
    int roll_no;
    string name;
    
    void getinfo(){
        cout << endl << "Enter your Info:";
        cout << endl << "Enter your name: "; 
        cin >> name;
        cout << endl << "Enter your Roll no: "; 
        cin >> roll_no;
    }
    
    void displayinfo(){
        cout << endl << "your Info:";
        cout << endl << "your name: " << name;
        cout << endl << "your Roll no: " << roll_no;
    }
    public:
        void Security(){
            getinfo();
            displayinfo();
        }
        
};

int main() {
    clrscr();
    Student S1;
    S1.Security();
    getch();
    return 0;
}