#include <iostream> 

using namespace std;

int main(void){
    int n, m, x;

    1 <= n <= 100;
    1 <= m <= 300;
    1 <= x <= n;

    cout << "Quantas figurinhas tem no álbum?" << "\n";
    cin >> n;

    cout << "Quantas figurinhas você já comprou e não são repetidas? " << "\n";
    cin >> m;

    if(m > n){
        cout << "Isso é impossível." << "\n";
        return 0;
    }

    cout << "Então falta " << n - m << " figurinhas para você." << "\n";
    
    return 0;
}
