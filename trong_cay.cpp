#include<iostream>
using namespace std;

void sapxep(int a[], int n){
    
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n;j++){
            if(a[i] < a[j]){
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}
void nhap(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<"thoi gian no hat giong thu "<<i+1<<":";
		cin>>a[i];
	}
	sapxep(a,n);
}


void xuat(int a[],int n,int b[])
{
	
	for(int i=0;i<n;i++)
	{
		b[i] = (a[i]+(i+1));
	}
	for(int i=0;i<n;i++)
	{
	
		cout<<"\n hat giong  thu "<<i+1<<" trong ngay thu "<<i+1<<" :"<<b[i]<<"ngay no";
	}
	
}
void sx(int b[],int n,int a[])
{
	xuat(a,n,b);
	int max = b[0];
	 for (int i = 1; i < n; i++)
        if (max < b[i])
            max = b[i];
    cout <<"\nNgay to chuc duoc tiec la: "<<  max + 1;
	
}

#define max 100
int main()
{
	int a[max],n;
	int b[max];
	cout<<"nhap so luong hat giong:";
	cin>>n;
	nhap(a,n);
	sx(b,n,a);

}