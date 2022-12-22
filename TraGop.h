#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
using ll = long long;

class TraGop {
	private:
		string Ten_NH, Ma_so_KHTG, Ma_so_XTG, Ngay_tra_gop;
		int Thoi_han_vay;
		ll So_tien_phai_tra_hang_thang, Du_no_goc, Tien_lai_hang_thang, Tien_goc_hang_thang, So_tien_tra_truoc;
		float Phan_tram_tra_truoc;
	public:
		TraGop();
		~TraGop();
		string& get_Ten_NH();
		string& get_Ma_so_KHTG();
		string& get_Ma_so_XTG();
		string& get_Ngay_tra_gop();
		int& get_Thoi_han_vay();
		ll& get_Tien_goc_hang_thang();
		ll& get_So_tien_phai_tra_hang_thang();
		ll& get_Du_no_goc();
		ll& get_Tien_lai_hang_thang();
		ll& get_So_tien_tra_truoc();
		float& get_Phan_tram_tra_truoc();
		void set_Tien_goc_hang_thang(ll);
		void set_So_tien_tra_truoc(ll);
		void set_Tien_lai_hang_thang(ll);
		void set_So_tien_phai_tra_hang_thang(ll);
		void input(ifstream&);
		void output();
};