#pragma once
#include<iostream>
#include<string>
#include<fstream>

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
};
