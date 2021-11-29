#include <iostream>
#include <cmath>
using namespace std;
int unvalid(double a, double b, double c)
{
    double answer;
    answer = pow(b,2) - (4*a*c);
    if (answer < 0)
    {
        return 0;//false
    }
    return 1;//true
}
int main()
{
    double a, b, c;
    cout << "Please enter a: ";
    cin >> a;
    cout << "Please enter b: ";
    cin >> b;
    cout << "Please enter c: ";
    cin >> c;
    if (unvalid(a,b,c))
    {
        double answer1, answer2, valid;
        valid = b*b-4*a*c;
        answer1 = (-b + sqrt(valid)) / (2*a);
        answer2 = (-b - sqrt(valid)) / (2*a);
        cout << "The x's are " << answer1 << " and " << answer2;
    }
    else
    {
        cout << "Unvalid quadratic formula";
    }
}