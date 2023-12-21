#include<iostream.h>
#include<conio.h>

int main() {
    clrscr();

    int n;
    cout << "\nName: Chirag\t";
    cout << "SAP ID: 53003230110\n\n";

    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Prime numbers between 1 and "<<n<<" are: \n";

    for (int i = 2; i <= n; i++) {
	int isPrime = 1;

	for (int j = 2; j * j <= i; j++) {
	    if (i % j == 0) {
		isPrime = 0;
		break;
	    }
	}

	if (isPrime)
	    cout << i << endl;
    }

    getch();
    return 0;
}
