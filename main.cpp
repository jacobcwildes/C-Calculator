#include <iostream>
#include "stdio.h"
#include "math.h"
using namespace std;
float add(float arg1, float arg2)
{
    float addition;
    addition = arg1 + arg2;
    cout << "Sum of " << arg1 << " and " << arg2 << " is: " << addition << endl;
    return addition;
};
float subtract(float arg1, float arg2)
{
    float subtraction;
    subtraction = arg1 - arg2;
    cout << "Product of " << arg1 << " and " << arg2 << " is: " << subtraction << endl;
    return subtraction;
}
float division(float arg1, float arg2)
{
    float divide;
    divide = arg1/arg2;
    cout << "Quotient of " << arg1 << " and " << arg2 << " is: " << divide << endl;
    return divide;
}
float multiplication(float arg1, float arg2)
{
    float multiply;
    multiply = arg1 * arg2;
    cout << "The product of " << arg1 << " and " << arg2 << " is: " << multiply << endl;
    return multiply;
}
int squareRoot(int root)
{
    float ans;
    ans = sqrt(root);
    cout << "The square root of " << root << " is: " << ans << endl;
    return ans;
}
bool checkInt(int input)
{
    string Input = to_string(input);
    bool isNeg = false;
    int itr = 0;
    if(Input.size() == 0)
        return false;
    if(Input[0] == '-')
    {
        isNeg == true;
        itr = 1;
    }
    for(int i = itr; i < Input.size(); i++)
    {
        if(!isdigit(Input[i]))
            return false;
    }
    return true;
}
int main()
{
    while(true)
    {
        cout << "Please enter the corresponding number for the action you would like: " << endl;
        cout << "********************************************************************" << endl;
        cout << "1. Addition    2. Subtraction      3. Division     4. Multiplication" << endl;
        cout << "5. Square Root" << endl;
        int arg1;
        cin >> arg1; //arg1 selects the calculator mode
        bool isInt = checkInt(arg1);
        try{

            if(isInt == false)
                throw isInt;
            if (arg1 == 1)
            {
                cout << "Please enter the first number to add: " << endl;
                float add1;
                cin >> add1;
                cout << "Please enter the next number to be added: " << endl;
                float add2;
                cin >> add2;
                add(add1, add2);
            }
            if (arg1 == 2)
            {
                cout << "Please enter the first number to subtract: " << endl;
                float sub1;
                cin >> sub1;
                cout << "Please enter the next number to subtract: " << endl;
                float sub2;
                cin >> sub2;
                subtract(sub1, sub2);
            }
            if (arg1 == 3)
            {
                cout << "Please enter the number to be divided: " << endl;
                float div1;
                cin >> div1;
                cout << "Enter the number to divide by: " << endl;
                float div2;
                cin >> div2;
                division(div1, div2);

            }
            if (arg1 == 4)
            {
                cout << "Please enter the first number to multiply by: " << endl;
                float mult1;
                cin >> mult1;
                cout << "Please enter the next number to multiply by: " << endl;
                float mult2;
                cin >> mult2;
                multiplication(mult1, mult2);
            }
            if (arg1 == 5)
            {
                cout << "Please enter the number to take the square root of: " << endl;
                int root;
                cin >> root;
                squareRoot(root);
            }
            else
                cout << "Please enter a valid value" << endl;
            if(isInt == false)
            {
                throw isInt;
            }
        }
        catch(int n)
        {
            cout << "Please enter a valid value" << endl;
        }
        catch(bool problem)
        {
            cout << "Please enter a number" << endl;
        }
    }

    return 0;
}
