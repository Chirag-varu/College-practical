#include<iostream>
using namespace std;

int main()
{
    int option;
    double num1,num2,ans;

    cout<<"1) + (Addition)"<<endl;
    cout<<"2) - (Minuse)"<<endl;
    cout<<"3) X (Multiplication)"<<endl;
    cout<<"4) / (Divide)"<<endl;
    cout<<"Choose the Operation you want to perform: ";
    cin>>option;

    switch (option)
    {
    case 1:
        cout<<endl<<"Enter value of your first number: ";
        cin>>num1;
        cout<<endl<<"Enter value of your second number: ";
        cin>>num2;
        ans= num1 + num2;
        cout<<endl<<"Answer of ("<<num1<<" + "<<num2<<") is = "<<ans;
        break;
    case 2:
        cout<<endl<<"Enter value of your first number: ";
        cin>>num1;
        cout<<endl<<"Enter value of your second number: ";
        cin>>num2;
        ans= num1 - num2;
        cout<<endl<<"Answer of ("<<num1<<" - "<<num2<<") is = "<<ans;
        break;
    case 3:
        cout<<endl<<"Enter value of your first number: ";
        cin>>num1;
        cout<<endl<<"Enter value of your second number: ";
        cin>>num2;
        ans= num1 * num2;
        cout<<endl<<"Answer of ("<<num1<<" X "<<num2<<") is = "<<ans;
        break;
    case 4:
        cout<<endl<<"Enter value of your first number: ";
        cin>>num1;
        cout<<endl<<"Enter value of your second number: ";
        cin>>num2;
        ans= num1 / num2;
        cout<<endl<<"Answer of ("<<num1<<" / "<<num2<<") is = "<<ans;
        break;
    
    default:
        cout<<endl<<"Wrong option Entered!!!";
        break;
    }
    return 0;
}
