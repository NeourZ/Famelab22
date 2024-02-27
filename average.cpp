#include <iostream>
using namespace std;

int main(int numbers, char *arv[])
{
    float sum = 0;
    if (numbers == 1)  cout << "Please input numbers to find average." << endl;
    else
    {
        for (int i = 0; i < numbers - 1; i++)
        {
            sum += atof(arv[i + 1]);
        }
        cout << "---------------------------------" << endl;
        cout << "Average of " << numbers - 1 << " numbers = " << sum  / double(numbers - 1) << endl;
        cout << "---------------------------------" << endl;
    }
}
