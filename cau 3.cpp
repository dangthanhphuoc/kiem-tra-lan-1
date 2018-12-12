#include <iostream> 
using namespace std;
int  main () {
	int n;
	cout<<"nhap giai thua can tinh:";
	cin>>n;
	int s=1;
	for (int i=1;i<=n;i++){
		s=s*i;
	}cout << "ket qua: "<<s;
	
}
