/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;
int n;
void merge(int a[], int l, int m, int r){
    int TA[100];
    int i = l, j = m + 1;
    for(int k = l; k <= r;k++){
        if(i > m){
            TA[k] = a[j];
            j++;
        } else if(j > r){
            TA[k] = a[i];
            i++;
        }else{
            if(a[i] < a[j]){
                TA[k] = a[i];
                i++;
            }else{
                TA[k] = a[j];
                j++;
            }
            
        }
    }
    for(int k = l; k <= r;k++){
        a[k] = TA[k];
    }
}

void merge_sort(int a[], int l, int r){
    if(l < r){
        int M = (l + r) / 2;
        merge_sort(a,l,M);
        merge_sort(a, M + 1, r);
        merge(a,l,M,r);
    }
}

void xuat(int a[], int n){
    for(int i = 0; i < n;i++){
        cout << a[i] <<" ";
    }
    
}

int main(){
    int a[100];
    cout <<"Nhap n: ";
    cin >> n;
    
    for(int i = 0; i < n;i++){
        cin >> a[i];
    }
    cout <<"\nMang vua nhap: ";
    xuat(a,n);
    
    merge_sort(a,0,n - 1);
    cout <<"\nSau khi sap xep theo merga sort: ";
    xuat(a,n);
    

    return 0;
}
