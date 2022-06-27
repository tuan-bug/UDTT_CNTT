
#include <iostream>

#include<bits/stdc++.h>
using namespace std;
int a;
int b;

int min(int w, int z){
if (w < z)
    return w;
else
    return z;
}
void show(int a, int b){
cout << "(" << a << " , " << b <<")"<<endl;
}

void tim_toa_do(int c, int a, int b)
{
int xq = 0, yq = 0;
int t;
cout << "Toa do cac dinh:" <<endl;
while (xq != c && yq!=c ){
  if (xq == 0){
    xq = a;
    show(xq, yq);
  }
  else if (yq == b){
    yq = 0;
    show(xq, yq);
  }
  else{
    t = min(b - yq, xq);
    yq= yq + t;
    xq = xq - t;
    show(xq, yq);
      }
    }
}

int main(){
int c;
cout << "Nhap vao binh c can tim ";
cin >> c;
cout << "Nhap vao binh a:  ";
cin >> a;
cout << "Nhap vao binh b: ";
cin >> b;
if(c < a || c < b){ 
    
    if( c % ( __gcd(a,b) ) == 0 )
        tim_toa_do(c, a,b);
    else
        cout<<"K the tim duoc....\n";  
}
else
  cout<<"K the tim dc..(*_*)\n"; 
}