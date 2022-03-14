#include <iostream>
#include <cstdlib>
#include<cmath>
using namespace std;
void add();
void subtract();
void multiply();
void divide();
void find_factorial();
void find_power();
void find_square();
void find_cube();
void find_squareroot();

int main()
{
    cout << "\t\This is a scientific Calculator, developed by Rishita!!\n"
         << endl;
    cout << "*******Press 0 to exit*******\n"
         << endl;
    cout << "Enter 1 for Addition \n";
    cout << "Enter 2 for Subtraction \n";
    cout << "Enter 3 for Multiplication \n";
    cout << "Enter 4 for Division \n";
    cout << "Enter 5 for Power \n";
    cout << "Enter 6 for Factorial \n";
    cout << "Enter 7  for square \n";
    cout << "Enter 8  for cube \n";
    cout << "Enter 9 for squareroot\n\n";
    int choice;
    while (1)
    {
        cout << "Enter you choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            add();
            break;
        case 2:
            subtract();
            break;
        case 3:
            multiply();
            break;
        case 4:
            divide();
            break;
        case 5:
            find_power();
            break;
        case 6:
            find_factorial();
            break;
        case 7:
            find_square();
            break;
        case 8:
            find_cube();
            break;
        case 9:
            find_squareroot();
            break;
        case 0:
            exit(0);
            break;
        default:
            cout << "\n*******Please enter a valid choice*******\n\n";
            break;
        }
    }

    return 0;
}

void add(){
    cout<<"Enter the numbers you want to add: ";
    int x,y;
    cin>>x>>y;
    cout<<"Addition of "<<x<<" and "<<y<<" gives "<<x+y<<endl;
}
void subtract(){
    cout<<"Enter the numbers you want to subtract: ";
    int x,y;
    cin>>x>>y;
    cout<<" Difference of "<<x<<" and "<<y<<" is "<<x-y<<endl;
}
void divide(){
    cout<<"Enter the numbers you want to divide: ";
    int x,y;
    cin>>x>>y;
    cout<<"The division of "<<x<<" and "<<y<<" is "<<(float)x/(float)y<<endl;
}

void multiply(){
    cout<<"Enter the numbers you want to multiply: ";
    int x,y;
    cin>>x>>y;
    cout<<"Multiplication of "<<x<<" and "<<y<<" gives "<<x*y<<endl;
}
void find_factorial(){
    cout<<"Enter the number you want to find the factorial of: ";
    int n;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    cout<<"The factorial of "<<n<<" is "<<fact<<endl;
}
void find_squareroot(){
    cout<<"Enter the number you want the square root of: ";
    double n;
    cin>>n;
    double squareRoot = sqrt(n);
    cout<<"The Square root of "<<n<<" is "<<squareRoot<<endl;
}

void find_square(){
    cout<<"Enter the number you want the sqaure of: ";
    double x;
    cin>>x;
    double power = pow(x,2);
    cout<<"The square of "<<x<<" is "<<power<<endl;
}
void find_cube(){
    cout<<"Enter the number you want to find cube of: ";
    double x;
    cin>>x;
    double power = pow(x,3);
    cout<<"The cube of "<<x<<" is "<<power<<endl;
}
void find_power(){
       cout<<"Enter the base and exponent: ";
    double base,exp;
    cin>>base>>exp;
    double power = pow(base,exp);
    cout<<"The solution for base "<<base<<" and exponent "<<exp<<" is "<<power<<endl;
}

