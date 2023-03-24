#include <iostream>
using namespace std;

int main() {
    
    int x;

    cout << "Test sprawdzający, czy liczba jest parzysta, czy nieparzysta. Wprowadź swoją liczbę: " << endl;
    cin >> x;
    

    if (x%2==0)
        cout << "Ta liczba jest parzysta" << endl;
    else
        cout << "Ta liczba jest nieparzysta" << endl;

    return 0;
}