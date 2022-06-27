
#include <iostream>

using namespace std;


int main()
{
    int MAX = 11;
    long c[MAX] = {500, 300,200, 100, 50, 20, 10, 5, 3, 2, 1};
    long t[MAX], n;
    cout<<"Nhap vao so tien can rut: ";
    cin >> n;
    int sl = 0;
    for(int i = 0; i < MAX ; i++){
        t[i] = n / c[i];
        if(t[i] > 0){
            sl += t[i];
            cout << c[i] <<" co " << t[i] <<" to" << endl;
        }
        n = n - t[i] * c[i];
    }
    
    cout <<"So luong to tien: " << sl <<endl;

    return 0;
}
