#include<stdio.h>
#include<math.h>
int a[20];
int Check_VT(int x,int y){
    
    for(int i = 1; i < x ;i++)
        if(a[i] == y || abs(i-x) == abs(a[i] - y) ) // xem trùng Vt vs quân hậu trc đó k, hoặc nằmd trên đường chéo của quân hậu khác
            return 0;
            
    return 1;
}
 
void Xuat(int n){
   
    for(int i=1;i<=n;i++)
        printf(" %d",a[i]);
        
    printf("\n");
}
 
void Try(int i,int n){
    for(int j = 1;j<=n;j++){
        if(Check_VT(i,j) == 1){
            a[i] = j;
            if(i==n)
                Xuat(n);
            Try(i+1,n);
        }
    }
}
 
int main(){
    int n;
    printf("Nhap n: ");
    scanf("%d",&n);
    Try(1,n);// đặt vào vị trí đầu tiên trên bàn cờ
    return 0;
}
 