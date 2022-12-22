#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include"DonDatHang.h"

using namespace std;

class DonHang : public DonDatHang {
	private:
		ll Thanh_tien, Doanh_thu, ARPU;
	public:
		DonHang();
		~DonHang();
		ll& get_Doanh_thu();
		ll& get_Thanh_tien();
		ll& get_ARPU();
		void set_ARPU(ll);
		void set_Doanh_thu(ll);
		void set_Thanh_tien(ll);
};