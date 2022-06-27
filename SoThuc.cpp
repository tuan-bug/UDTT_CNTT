
#include <iostream>

using namespace std;



bool p(int i){
    return i*i >= 26.5;
}

int main(){
   
   double EPS = 0.00001,lo = -1000.0, hi = 1000.0;
    
    while(hi - lo > EPS){
        double mid = (lo + hi) / 2.0;
        if( p(mid) ){
            hi = mid;
        }else{
            lo = mid;
        }
    }
    cout <<"So can tim : " << lo <<endl;
   

    return 0;
}
