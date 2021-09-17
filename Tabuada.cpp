#include <iostream>

using namespace std;

    int main ()  {

        cout << "Insira um valor: " ;

        int n = 0;
        cin >> n;

        for (int i = 1; i<=10; i++) {
    
        cout << "O  resultado e: " <<  n << " x " << i << " = " << i*n << endl;

    }

    return 0;

}
