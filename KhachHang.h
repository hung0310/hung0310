#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

class KhachHang {
	private:
		string MSKH, Ten_KH, Gioi_tinh, Ngay_sinh, Dia_chi, CCCD, So_dien_thoai;
	public:
		KhachHang();
		~KhachHang();
		void input(ifstream&);
		void output();
		string& get_MSKH();
		string& get_Ten_KH();
		string& get_Dia_chi();
		string& get_So_dien_thoai();
		friend class DonHang;
};
