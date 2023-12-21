#include<iostream.h>
#include<conio.h>

const double PI = 3.14159;

int main() {
    double side, radius, length, width, height;
    clrscr();

    cout << "\nName: Chirag\t";
    cout << "SAP ID: 53003230110\n\n";

    cout << "Enter side length of square: ";
    cin >> side;
    cout << "Volume of square: " << side * side * side << endl<<endl;

    cout << "Enter radius of cone: ";
    cin >> radius;
    cout << "Enter height of cone: ";
    cin >> height;
    cout << "Volume of cone: " << (1.0 / 3) * PI * radius * radius * height << endl;

    cout << "\nEnter length of rectangle: ";
    cin >> length;
    cout << "Enter width of rectangle: ";
    cin >> width;
    cout << "Enter height of rectangle: ";
    cin >> height;
    cout << "Volume of rectangle: " << length * width * height << endl;

    getch();
    return 0;
}
