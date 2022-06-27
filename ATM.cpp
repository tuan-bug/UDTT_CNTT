#include<iostream>
#include<math.h>


using namespace std;


const int MAX = 1000;
const int n = 4;
int c;
int a[n] = {1, 2, 3, 5};

int z[MAX];
int tien;

void sapxep(int a[],int n){
	
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[i] < a[j])
			{
				swap(a[i],a[j]);
			}
		}
	}
}


void input_tien(){
	do {
		cout<<"Nhap vao gia tri c: ";
		cin >> c;
	}while(c < 0 && c > 15);
	int dem = 0;
	
	for(int i = 0; i < n; i++){
		for(int j = 0; j < c; j++){
			z[dem] = a[i] * pow(10, j);
			dem++;
		}
	}
	
	cout <<"Cac menh gia tien: " << endl;
	
	sapxep(z,dem);
	
	for(int i = 0; i < dem;i++){
	    cout << z[i] <<" ";
	}
}


int main () {
	input_tien();
	cout <<"\nNhap vao so tien khach muon rut: "; 
	cin >> tien;
	int sl[4*c];
    int dem = 0;
	for (int i = 0; i < 4 * c; i++) {
		sl[i] = tien / z[i];
		if(sl[i] > 0){
		    cout << "Menh gia " << z[i] << ": " << sl[i] << endl;
		    dem += sl[i];
		}
			
		tien = tien - z[i] * sl[i];
	}
	cout <<"\nTong so to tien la: " << dem << endl;
	
	return 0;
}