/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


int main()
{
    int MAX = 6;
    int c[MAX] = {500, 200, 100, 50, 20, 10};
    int t[MAX], n;
    cout<<"Nhap vao so tien can rut: ";
    cin >> n;
    
    for(int i = 0; i < MAX ; i++){
        t[i] = n / c[i];
        cout << c[i] <<" co " << t[i] <<" to" << endl;
        n = n - t[i] * c[i];
    }

    return 0;
}
