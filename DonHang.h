#pragma once
#include<iostream>
#include<string>
#include<fstream>
#include"KhachHang.h"
#include"Xe.h"

using namespace std;
using ll = long long;

class DonHang : public KhachHang, public Xe {
	private:
		string Ma_soDH, Ma_soKH, Ma_so_Xe, Ngay_ban, Thang;
		int So_luong_ban_ra, So_xe_con_lai, Tong_so_xe_ban_ra;
		ll Thanh_tien, Doanh_thu;
		bool Tinh_trang;
	public:
		DonHang();
		~DonHang();
		void input(ifstream&);
		string get_MSDH();
		string get_MSKH();
		string get_MSX();
		string get_Ngay_ban();
		string get_Thang();
		int get_So_luong_xe_ban_ra();
		int get_Tong_so_xe_ban_ra();
		ll get_Doanh_thu();
		int& get_So_xe_con_lai();
		ll& get_Thanh_tien();
		bool get_Tinh_trang();
		void set_So_luong_xe_ban_ra(int);
		void set_Tong_so_xe_ban_ra(int);
		void set_Doanh_thu(ll);
		void set_Thanh_tien(ll);
		void set_Thang(string);
		void set_Tinh_trang(bool);
};