#include<iostream.h>
#include<conio.h>

int main() {
    clrscr();

    int num1, num2, num3;

    cout << "\nName: Chirag\t";
    cout << "SAP ID: 53003230110\n\n";

    cout << "Enter three numbers: \n";
    cin >> num1 >> num2 >> num3;

    if (num1 >= num2 && num1 >= num3)
	cout << "The greatest number is: " << num1;
    else if (num2 >= num1 && num2 >= num3)
	cout << "The greatest number is: " << num2;
    else
	cout << "The greatest number is: " << num3;

    getch();
    return 0;
}
