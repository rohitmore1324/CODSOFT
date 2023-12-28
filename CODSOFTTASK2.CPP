// Develop a calculator program that performs basic arithmetic operations such as addition, subtraction, multiplication, and division. Allow the user to input two numbers and choose an operation to perform.
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result;
    string operation;
    char choice;
    do
    {
        cout << "Do you want to start the calculator? (y/n): ";
        cin >> choice;

        if (tolower(choice) != 'y')
        {
            cout << "Calculator program terminated." << endl;
            break;
        }
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
        cout << "Enter the operation (add, sub, mul, div): ";
        cin >> operation;
        for (char &c : operation)
        {
            c = tolower(c);
        }
        if (operation == "add")
        {
            result = num1 + num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == "sub")
        {
            result = num1 - num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == "mul")
        {
            result = num1 * num2;
            cout << "Result: " << result << endl;
        }
        else if (operation == "div")
        {
            if (num2 != 0)
            {
                result = num1 / num2;
                cout << "Result: " << result << endl;
            }
            else
            {
                cout << "Error: Cannot divide by zero." << endl;
            }
        }
        else
        {
            cout << "Invalid operation. Please enter add, sub, mul, or div." << endl;
        }
    } while (true);
    return 0;
}
