#include<iostream.h>
#include<conio.h>

int main() {
    clrscr();

    int n;
    cout << "\nName: Chirag\t";
    cout << "SAP ID: 53003230110\n\n";

    cout << "Enter the value of n: ";
    cin >> n;

    int sumEven = 0, sumOdd = 0;

    for (int i = 1; i <= n; i++) {
	if (i % 2 == 0)
	    sumEven += i;
	else
	    sumOdd += i;
    }

    cout<<"\nSum of even numbers from 1 to " << n << ": " << sumEven << endl;
    cout << "Sum of odd numbers from 1 to " << n << ": " << sumOdd;

    getch();
    return 0;
}
