
#include<iostream>
#include <iomanip>
#include<cstdio>
#include<cmath>
#include<algorithm>

using namespace std;
const double PI = 3.1415926;
int n,f;
double a[10001];
double Max(double x,double y)
{
    if( x >= y)
        return x;
    else
        return y;
}

// điều kiện đúng
double p(double m){
    int sum = 0;
    for(int i = 1;i <= n ; i++)
    {
        sum = floor(sum+a[i]  / m );
    }
    return sum >= ( f + 1 );
}
int main(){
    double EPS = 0.000001;
    int T = 1;
    
    
    cout <<"Nhap so banh: ";
    cin >> n;
    cout <<"\nNhap so ban tham gia bua tiec:  ";
    cin >> f;

    double max = 0;
    cout <<"\n === Nhap the tich cua banh ===\n";
    for(int i = 1; i <= n; i++){
        cout <<"\nNhap ban kinh cua banh thu " << i <<" : ";
        cin >> a[i];
        // tính thể tích của những cái bánh, độ cao của bánh luôn bằng 1 theo đề bài
        a[i] = a[i] * a[i] * PI * 1;
        // Tìm cái bánh có thể tích lớn nhất
        max = Max( max, a[i] );
    }
    
    double lo = 0.0 , hi = max;
    while( hi - lo > EPS){
            double mid = ( lo + hi ) / 2.0;
            if ( p(mid) ) 
                lo = mid;
            else 
                hi = mid;
        }
        cout << "The tich moi nguoi duoc nhan : "<< fixed << setprecision(6) << lo;
        

    return 0;
}