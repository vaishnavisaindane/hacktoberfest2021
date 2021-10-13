#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    cin >> n1 >> n2;

    cout << "Or of two number is : " << (n1 | n2) << endl;
    cout << "And of two number is : " << (n1 & n2) << endl;
    cout << "Xor of two number is : " << (n1 ^ n2) << endl;
    cout << "Left shift of two number is : " << (n1 << n2) << endl;
    cout << "Right shift of two number is : " << (n1 >> n2) << endl;
    return 0;
}
