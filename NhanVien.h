#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;
using ll = long long;

class NhanVien {
	private:
		string Ma_so_NV, Ho_ten_NV, Gioi_tinh, Dia_chi, CCCD, So_dien_thoai, Ngay_sinh;
		string Ma_chuc_vu;
	public:
		NhanVien();
		~NhanVien();
		void input(ifstream&);
		void output();
		string& get_MSNV();
		string& get_Ma_chuc_vu();
		string& get_Ten_NV();
		string& get_Gioi_tinh();
		string& get_Dia_chi();
};