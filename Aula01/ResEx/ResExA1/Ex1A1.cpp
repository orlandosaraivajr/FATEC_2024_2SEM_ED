#include <iostream>
using namespace std;

// Funcao para somar os antecedentes de um numero com ele mesmo.

int soma_de_precedentes (int n);

int main() {
    int num;
    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    int sum = soma_de_precedentes(num);
    cout << "Soma dos antecedentes do numero " << num << " e: " << sum << endl;
    
    return 0;
}

/*int soma_de_precedentes (int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}*/

/*int soma_de_precedentes (int n) {
    int y = n;
    for(int i=n-1; i>=0; i--) {
        y += i;
    }
    return y;
}*/

int soma_de_precedentes (int n) {
    return (n * (n + 1)) / 2;
}
