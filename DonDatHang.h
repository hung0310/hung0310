#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>

using namespace std;
using ll = long long;

struct Date {
	int ngay, thang, nam;
};

class DonDatHang {
	private:
		Date Ngay_ban;
		string Ma_soDH, Ma_soKH, Ma_so_Xe;
		int So_luong_ban_ra, So_xe_con_lai, Tong_so_xe_ban_ra, Tong_so_khach_hang;
		bool Tinh_trang;
	public:
		DonDatHang();
		~DonDatHang();
		void input(ifstream&);
		string& get_MSDH();
		string& get_MSKH();
		string& get_MSX();
		int& get_Tong_so_xe_ban_ra();
		int& get_So_xe_con_lai();
		int& get_Ngay();
		int& get_Thang();
		int& get_Nam();
		int& get_So_luong_xe_ban_ra();
		int& get_Tong_so_khach();
		bool& get_Tinh_trang();
		void set_So_luong_xe_ban_ra(int);
		void set_Tong_so_khach(int);
		void set_Tinh_trang(bool);
		void set_Thang(int);
		void set_Tong_so_xe_ban_ra(int);
		void set_So_xe_con_lai(int);
		int& Ngay_mua_xe(int&, int&);
};