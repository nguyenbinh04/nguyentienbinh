#include <iostream> 
using namespace std;
//class nguoi{
//	private :
//	int tuoi;
//	char ten[30];
//	float diem;
//	public :
//	void nhap();
//	void xuat();
//};
//void nguoi:nhap() {
//	cout <<"Nhap tuoi: ";
//	cin>>tuoi;
//	cout <<"Nhap ten: ";
//	cin.ignore();
//	cin.getline(ten,30);
//	cout <<"Nhap diem: ";
//	cin >>diem;
//} 
//void nguoi::xuat(){
//	cout <<tuoi <<" "<<ten << " "<< diem;
//}

class sothuc{
	private: 
	int tuso,mauso;
	public:
	void nhap();
	void xuat();
}; 

void sothuc::nhap(){
	cout <<"Nhap tu so: ";
	cin>>tuso;
	cout <<"Nhap mau so: ";
	nhaplai: 
	cin >>mauso;
	if (mauso==0)
	{
		cout <<"Nhap lai mau so: "; 
		goto nhaplai; 
	 } 
}

void sothuc::xuat(){
	cout <<tuso<<"/"<<mauso;
}
int main()
{
	sothuc a;
	a.nhap();
	a.xuat();
	return 0;
}
