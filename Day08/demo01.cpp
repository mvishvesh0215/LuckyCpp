#include <iostream>
using namespace std;
template <class T>
void myswap(T *ptr1, T *ptr2)
{
    T temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

template <typename X, typename Y>
void division(X n1, Y n2)
{
    cout << "Division - " << n1 / n2 << endl;
}

int main()
{
    int n1 = 10;
    int n2 = 20;
    // myswap(&n1, &n2);
    myswap<int>(&n1, &n2);

    double num1;
    double num2;
    // division(num1, num2);
    division<double, double>(num1, num2);
    return 0;
}