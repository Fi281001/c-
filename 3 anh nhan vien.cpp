#include<iostream>
using namespace std;
#include<string>

/* ======= KHAI B�O C?U TR�C L?P NH�N VI�N S?A ?NG NU?C =======*/
class NhanVienSuaOngNuoc
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_h_sua;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienSuaOngNuoc();
	~NhanVienSuaOngNuoc();
};

// h�m nh?p th�ng tin nh�n vi�n s?a ?ng nu?c
void NhanVienSuaOngNuoc::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so gio sua: ";
	cin >> so_h_sua;
}

// h�m xu?t th�ng tin nh�n vi�n s?a ?ng nu?c
void NhanVienSuaOngNuoc::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo gio sua: " << so_h_sua;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// h�m t�nh ti?n luong nh�n vi�n s?a ?ng nu?c
float NhanVienSuaOngNuoc::Tinh_Tien_Luong()
{
	return so_h_sua * 50000;
}
// h�m t?o
NhanVienSuaOngNuoc::NhanVienSuaOngNuoc()
{

}
// h�m h?y
NhanVienSuaOngNuoc::~NhanVienSuaOngNuoc()
{

}

/* ======= KHAI B�O C?U TR�C L?P NH�N VI�N GIAO H�NG =======*/
class NhanVienGiaoHang
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	int so_hang_giao;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienGiaoHang();
	~NhanVienGiaoHang();
};

// h�m nh?p th�ng tin nh�n vi�n giao h�ng
void NhanVienGiaoHang::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so hang giao: ";
	cin >> so_hang_giao;

}

// h�m xu?t th�ng tin nh�n vi�n giao h�ng
void NhanVienGiaoHang::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo hang giao: " << so_hang_giao;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// h�m t�nh ti?n luong nh�n vi�n giao h�ng
float NhanVienGiaoHang::Tinh_Tien_Luong()
{
	return so_hang_giao * 33500;
}
// h�m t?o
NhanVienGiaoHang::NhanVienGiaoHang()
{

}
// h�m h?y
NhanVienGiaoHang::~NhanVienGiaoHang()
{

}

/* ======= KHAI B�O C?U TR�C L?P NH�N VI�N XE �M 4.0 =======*/
class NhanVienXeOmCongNghe
{
private:
	string hoten;
	int tuoi;
	string gioi_tinh;
	string dia_chi;
	string sdt;
	float chieu_cao;
	float can_nang;
	float so_km;
public:

	void Nhap();
	void Xuat();
	float Tinh_Tien_Luong();

	NhanVienXeOmCongNghe();
	~NhanVienXeOmCongNghe();
};

// h�m nh?p th�ng tin nh�n vi�n xe �m 4.0
void NhanVienXeOmCongNghe::Nhap()
{
	fflush(stdin);
	cout << "\nNhap ho ten: ";
	getline(cin, hoten);
	cout << "\nNhap tuoi: ";
	cin >> tuoi;
	fflush(stdin);
	cout << "\nNhap gioi tinh: ";
	getline(cin, gioi_tinh);
	cout << "\nNhap dia chi: ";
	getline(cin, dia_chi);
	cout << "\nNhap so dien thoai: ";
	getline(cin, sdt);
	cout << "\nNhap chieu cao: ";
	cin >> chieu_cao;
	cout << "\nNhap can nang:";
	cin >> can_nang;
	cout << "\nNhap so km chay duoc: ";
	cin >> so_km;
}

// h�m xu?t th�ng tin nh�n vi�n xe �m 4.0
void NhanVienXeOmCongNghe::Xuat()
{
	cout << "\nHo ten: " << hoten;
	cout << "\nTuoi: " << tuoi;
	cout << "\nGioi tinh: " << gioi_tinh;
	cout << "\nDia chi: " << dia_chi;
	cout << "\nSo dien thoai: " << sdt;
	cout << "\nChieu cao: " << chieu_cao;
	cout << "\nCan nang: " << can_nang;
	cout << "\nSo km: " << so_km;
	cout << "\nTIEN LUONG: " << (size_t)Tinh_Tien_Luong();
}

// h�m t�nh ti?n luong nh�n vi�n xe �m
float NhanVienXeOmCongNghe::Tinh_Tien_Luong()
{
	return so_km * 10000;
}
// h�m t?o
NhanVienXeOmCongNghe::NhanVienXeOmCongNghe()
{

}
// h�m h?y
NhanVienXeOmCongNghe::~NhanVienXeOmCongNghe()
{

}

// h�m t�nh t?ng ti?n luong c?a c�c NH�N VI�N S?A ?NG NU?C
double Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(NhanVienSuaOngNuoc ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// h�m t�nh t?ng ti?n luong c?a c�c NH�N VI�N GIAO H�NG
double Tong_Tien_Luong_Nhan_Vien_Giao_Hang(NhanVienGiaoHang ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// h�m t�nh t?ng ti?n luong c?a c�c NH�N VI�N XE �M C�NG NGH?
double Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(NhanVienXeOmCongNghe ds[], int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += ds[i].Tinh_Tien_Luong();
	}
	return sum;
}

// h�m ho�n v? 2 d?i tu?ng nh�n vi�n S?A ?NG NU?C
void Hoan_Vi_SUA_ONG_NUOC(NhanVienSuaOngNuoc &x, NhanVienSuaOngNuoc &y)
{
	NhanVienSuaOngNuoc tam = x;
	x = y;
	y = tam;
}

// h�m ho�n v? 2 d?i tu?ng nh�n vi�n S?A GIAO H�NG
void Hoan_Vi_GIAO_HANG(NhanVienGiaoHang &x, NhanVienGiaoHang &y)
{
	NhanVienGiaoHang tam = x;
	x = y;
	y = tam;
}

// h�m ho�n v? 2 d?i tu?ng nh�n vi�n S?A XE �M C�NG NGH?
void Hoan_Vi_XE_OM_CN(NhanVienXeOmCongNghe &x, NhanVienXeOmCongNghe &y)
{
	NhanVienXeOmCongNghe tam = x;
	x = y;
	y = tam;
}


// h�m s?p x?p danh s�ch nh�n vi�n S?A ?NG NU?C gi?m d?n theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_SUA_ONG_NUOC_Giam_Dan_Luong(NhanVienSuaOngNuoc ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_SUA_ONG_NUOC(ds[i], ds[j]);
			}
		}
	}
}

// h�m s?p x?p danh s�ch nh�n vi�n GIAO H�NG gi?m d?n theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Luong(NhanVienGiaoHang ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_GIAO_HANG(ds[i], ds[j]);
			}
		}
	}
}
// h�m s?p x?p danh s�ch nh�n vi�n XE �M C�NG NGH? gi?m d?n theo luong
void Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_CN_Giam_Dan_Luong(NhanVienXeOmCongNghe ds[], int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (ds[i].Tinh_Tien_Luong() < ds[j].Tinh_Tien_Luong())
			{
				Hoan_Vi_XE_OM_CN(ds[i], ds[j]);
			}
		}
	}
}

// thi?t k? menu x? l�
void Menu(NhanVienSuaOngNuoc ds_nv_suaongnuoc[], NhanVienGiaoHang ds_nv_giaohang[], NhanVienXeOmCongNghe ds_nv_xeomcongnghe[], int n, int m, int l)
{
	int luachon;
	while (true)
	{
		system("cls");
		cout << "\n\n\t\t ====== CHUONG TRINH QUAN LI ======";
		cout << "\n1. Nhap thong tin nhan vien SUA ONG NUOC";
		cout << "\n2. Nhap thong tin nhan vien GIAO HANG";
		cout << "\n3. Nhap thong tin nhan vien XE OM CONG NGHE";
		cout << "\n4. Xuat danh sach thong tin nhan vien SUA ONG NUOC";
		cout << "\n5. Xuat danh sach thong tin nhan vien GIAO HANG";
		cout << "\n6. Xuat danh sach thong tin nhan vien XE OM CONG NGHE";
		cout << "\n7. Tong tien luong cua 3 loai nhan vien";
		cout << "\n8. Sap xep danh sach cac loai nhan vien giam dan theo luong";
		cout << "\n0. KET THUC";
		cout << "\n\n\t\t ============= END =================";

		cout << "\nNhap lua chon: ";
		cin >> luachon;
		if (luachon < 0 || luachon > 8)
		{
			cout << "\nLUA CHON KHONG HOP LE. XIN KIEM TRA LAI";
		}
		else if (luachon == 0)
		{
			break;
		}
		else if (luachon == 1)
		{
			NhanVienSuaOngNuoc nv_suaongnuoc; // d?i tu?ng gi� tr?
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN SUA ONG NUOC\n";
			nv_suaongnuoc.Nhap();

			// th�m d?i tu?ng gi� tr? "nv_suaongnuoc" v�o danh s�ch "ds_nv_suaongnuoc"
			ds_nv_suaongnuoc[n] = nv_suaongnuoc;
			n++;
		}
		else if (luachon == 2)
		{
			NhanVienGiaoHang nv_giaohang; // d?i tu?ng gi� tr?
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN GIAO HANG\n";
			nv_giaohang.Nhap();

			// th�m d?i tu?ng gi� tr? "nv_giaohang" v�o danh s�ch "ds_nv_giaohang"
			ds_nv_giaohang[m] = nv_giaohang;
			m++;
		}
		else if (luachon == 3)
		{
			NhanVienXeOmCongNghe nv_xeomcongnghe; // d?i tu?ng gi� tr?
			cout << "\n\n\t\t NHAP THONG TIN NHAN VIEN XE OM CONG NGHE\n";
			nv_xeomcongnghe.Nhap();

			// th�m d?i tu?ng gi� tr? "nv_xeomcongnghe" v�o danh s�ch "ds_nv_xeomcongnghe"
			ds_nv_xeomcongnghe[l] = nv_xeomcongnghe;
			l++;
		}
		else if (luachon == 4)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN SUA ONG NUOC\n";
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " <<i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_suaongnuoc, n);
			system("pause");
		}
		else if (luachon == 5)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN GIAO HANG\n";
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_giaohang, m);
			system("pause");
		}
		else if (luachon == 6)
		{
			cout << "\n\n\t\t DANH SACH THONG TIN NHAN VIEN XE OM CONG NGHE\n";
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcongnghe[i].Xuat();
			}
			cout << "\n\n\t\t TONG TIEN LUONG: " << (size_t)Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(ds_nv_xeomcongnghe, l);
			system("pause");
		}
		else if (luachon == 7)
		{
			cout << "\n\n\t\t TONG TIEN CONG TY CAN TRA HANG THANG: " << (size_t)(Tong_Tien_Luong_Nhan_Vien_Sua_Ong_Nuoc(ds_nv_suaongnuoc, n) + Tong_Tien_Luong_Nhan_Vien_Giao_Hang(ds_nv_giaohang, m) + Tong_Tien_Luong_Nhan_Vien_Xe_Om_Cong_Nghe(ds_nv_xeomcongnghe, l));
			system("pause");
		}
		else if (luachon == 8)
		{
			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN SUA ONG NUOC\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_SUA_ONG_NUOC_Giam_Dan_Luong(ds_nv_suaongnuoc, n);
			for (int i = 0; i < n; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN SUA ONG NUOC THU " << i + 1;
				ds_nv_suaongnuoc[i].Xuat();
			}

			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN GIAO HANG\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_GIAO_HANG_Giam_Dan_Luong(ds_nv_giaohang, m);
			for (int i = 0; i < m; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN GIAO HANG THU " << i + 1;
				ds_nv_giaohang[i].Xuat();
			}

			cout << "\n\n\t\t DANH SACH GIAM DAN LUONG NHAN VIEN XE OM CONG NGHE\n";
			Sap_Xep_Danh_Sach_Nhan_Vien_XE_OM_CN_Giam_Dan_Luong(ds_nv_xeomcongnghe, m);
			for (int i = 0; i < l; i++)
			{
				cout << "\n\n\t THONG TIN NHAN VIEN XE OM CONG NGHE THU " << i + 1;
				ds_nv_xeomcongnghe[i].Xuat();
			}
			system("pause");
		}
	}
}

int main()
{
	NhanVienSuaOngNuoc ds_nv_suaongnuoc[100]; // m?ng 1 chi?u c�c nh�n vi�n s?a ?ng nu?c - m?i ph?n t? l� 1 d?i tu?ng gi� tr?
	NhanVienGiaoHang ds_nv_giaohang[100]; // m?ng 1 chi?u c�c nh�n vi�n giao h�ng - m?i ph?n t? l� 1 d?i tu?ng gi� tr?
	NhanVienXeOmCongNghe ds_nv_xeomcongnghe[100]; // m?ng 1 chi?u c�c nh�n vi�n xe �m c�ng ngh? - m?i ph?n t? l� 1 d?i tu?ng gi� tr?
	int n = 0; // s? lu?ng nh�n vi�n s?a ?ng nu?c
	int m = 0; // s? lu?ng nh�n vi�n giao h�ng
	int l = 0; // s? lu?ng nh�n vi�n xe �m c�ng ngh?
	
	Menu(ds_nv_suaongnuoc, ds_nv_giaohang, ds_nv_xeomcongnghe, n, m, l);

	system("pause");
	return 0;
}
