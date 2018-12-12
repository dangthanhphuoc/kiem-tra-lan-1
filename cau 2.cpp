#include <iostream>
using namespace std;
int main (){
	char i;
	int a,b,c;
	cout << "Nhap ten sinh vien: ";
	cin >> i;
	cout << "Diem toan: ";
	cin >> a;
	cout << "Diem ly: ";
	cin >> b;
	cout << "Diem hoa: ";
	cin >>c;
	float s;
	s= (float)(a+b+c)/3;

	if (s>=8){
		cout << i<<endl<<"Diem trung binh: "<< s<<endl <<"Xep loai xuat sac";}
	
	else if  (s>=7&&s<8){
		cout << i <<endl<<"Diem trung binh: "<< s<<endl<< "Xep loai gioi";
	}
	else if (s>=6&&s<7){
		cout << i <<endl<<"Diem trung binh: "<< s<<endl <<"Xep loai kha";
	}
	else if  (s>=5&&s<6){
		cout << i <<endl<<"Diem trung binh: "<< s<<endl <<"Xep loai trung binh";
	}
 else {cout << i <<endl<<"Diem trung binh: "<< s<<endl<< "Xep loai yeu";
	}
}
