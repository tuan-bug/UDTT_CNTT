
#include <iostream>

using namespace std;


int main()
{
    int MAX = 6;
    int c[MAX] = {500, 100, 50, 10, 5 , 1};
    int t[MAX], n;
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
