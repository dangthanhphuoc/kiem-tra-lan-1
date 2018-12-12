#include <iostream>
using namespace std;
int main (){
	int n;
	cout << "nhap vao nam: ";
	cin >> n;
	if(n%4==0&&n%100!=0||n%400==0){
		cout << "nam nhuan"<<endl;
	}
	else {cout << "nam khong nhuan";
	}
}
