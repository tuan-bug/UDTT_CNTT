#include<iostream>

#include<algorithm>
using namespace std;
void show(int *array, int size){
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void combSort(int *array, int size){
   int gap = size; 
   bool flag = false;
   while(gap != 1 || flag == false){
       gap = (gap * 10) / 13; // lấy gấp chia cho 1.3 để ra đc điểm gấp
      if(gap < 1) // nếu ra gấp là 0 thì gán gap bằng 1
         gap = 1;
      flag = true;
      for(int i = 0; i<size-gap; i++){ // chạy và so sánh a[0] vs a[gap] , a[1] vs a[gap + 1] ,...
         if(array[i] > array[i+gap]){ // chạy từ gấp đến hết mảng, so sánh 2 điểm đó vs nhau, nếu a[gap + i] mà nhỏ hơn thì đổi chỗ
            swap(array[i], array[i+gap]);
            if(gap == 1) // gấp = 1 thì gán cờ = false rồi kết thúc 
                flag = false;
         }
      }
   }
}
int main(){
   int n;
   cout << "Nhap so luong phan tu cho mang: ";
   cin >> n;
   int arr[n]; 
   
   for(int i = 0; i<n; i++){
      cout <<"a[" << i <<"] = ";
      cin >> arr[i];
      cout <<"\n";
   }
   cout << "Cac ptu cua mang:  ";
   show(arr, n);
   combSort(arr, n);
   cout << "Sau khi sap xep bang combSort";
   show(arr, n);
}