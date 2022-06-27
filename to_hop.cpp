#include  <iostream>

#define max 20
using namespace std;
int x[max];  int n, k;
void Xuatnghiem()  {
    for (int i = 1; i <= k; i++)
        cout << x[i] <<"    ";
    
    cout <<"\n";
}
void ToHop (int i)  {
    for (int j = x[i-1] + 1; j <= n-k+i; j++)  {
        x[i] = j;
        if (i == k)
            Xuatnghiem();
        else
            ToHop(i+1);
    }
}
int main()  {
    cout <<"Nhap n : ";
    cin >> n;
    cout <<"Nhap k : ";
    cin >> k;
    x[0] = 0;  ToHop(1);
    return 0;  
}