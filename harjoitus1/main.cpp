#include <iostream>

using namespace std;


void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        float result = static_cast<float>(a) / b;
        cout << "Osa: " << fixed << result << endl;
    }
}

int retSum(int a, int b) {
    return a + b;
}


float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("Jakaja ei saa olla nolla!");
    }
    return static_cast<float>(a) / b;
}

int main() {
    int a, b;
    cout << "Anna ensimmainen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;


    calcSum(a, b);
    calcDiv(a, b);

    return 0;
}
