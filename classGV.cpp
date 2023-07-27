#include <iostream>
using namespace std;

class GV{
	private: 
	char ht[30],bc[15],cn[20];
	int t;
	float bl;
	public:
		void nhap(){
			cout <<"Nhap ten giao vien: ";
			cin.ignore();
			cin.getline(ht,30);
			cout <<"Nhap tuoi cua giao vien: ";
			cin >>this->t;
			cin.ignore();
			cout <<"Nhap bang cap: ";
			cin.getline(bc,15);
			cout <<"Nhap chuyen nganh: ";
			cin.getline(cn,20);
			cout <<"Nhap bac luong: ";
			cin >>this->bl;   
		}
		
		float luongcb(){
			float lcb;
			return lcb=bl*610;
		}
		void xuat(){
			cout <<"Ten giao vien: "<<ht<<endl;
			cout <<"Tuoi giao vien: "<<this->t<<endl;
			cout <<"Bang cap: "<<bc<<endl;
			cout <<"chuyen nganh: "<<cn<<endl;
			cout <<"luong co ban: "<<this->luongcb()<<endl;
		}
		
		void GVcoluongnhohon2000(GV a[],int &n){
			cout <<"Danh sach giao vien co luong nho hon 2000: "<<endl;
			for (int i=0;i<n;i++)
			{
				cout<<"Giao vien "<<i+1<<endl;
				if (a[i].luongcb()<2000)
				{
					a[i].xuat();
				}
			}
		}
		
		void GVcungchuyennganh(GV a[],int &n)
		{
			cout <<"danh sach giao vien cung chuyen nganh: "<<endl;
			
		}
};

void NhapdanhsachGV(GV a[],int &n)
{
	cout <<"Nhap du lieu cho "<<n<<" giao vien"<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<"Giao vien: "<<i+1<<endl;
		a[i].nhap();
		cout <<"\n";
	}
}

void XuatdanhsachGV(GV a[],int &n)
{
	cout <<"Xuat danh sach gom "<<n<<" giao vien"<<endl;
	for (int i=0;i<n;i++)
	{
		cout <<"Giao vien: "<<i+1<<endl;
		a[i].xuat();
		cout <<"\n";
	}
}


int main()
{
	int n;
	cout <<"So giao vien can nhap du lieu: ";
	cin >>n;
	GV a[n];
	NhapdanhsachGV(a,n);
	XuatdanhsachGV(a,n);
	a[n].GVcoluongnhohon2000(a,n);
	return 0;
}
