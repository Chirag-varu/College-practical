#include<iostream.h>
#include<conio.h>

int main() {
    int seconds;
    clrscr();

    cout << "\nName: Chirag\t";
    cout << "SAP ID: 53003230110\n\n";

    cout << "Enter seconds: ";
    cin >> seconds;

    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remainingSeconds = seconds % 60;

    cout << "Hours: " << hours << endl;
    cout << "Minutes: " << minutes << endl;
    cout << "Seconds: " << remainingSeconds;

    getch();
    return 0;
}
