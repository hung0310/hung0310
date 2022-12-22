#pragma once
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
#include"DonHang.h"

using namespace std;
using ll = long long;

class Xe {
	private:
		string MSX, Hang_xe, Ten_xe, Mau_xe;
		ll Gia_thanh;
		int So_luong;
		bool Tinh_trang;
	public:
		Xe();
		~Xe();
		void input(ifstream&);
		void output();
		string& get_MSX();
		string& get_Hang_xe();
		string& get_Ten_xe();
		string& get_Mau_xe();
		int& get_So_luong();
		ll& get_Gia_thanh();
		void set_MSX(string);
		void set_Hang_xe(string);
		void set_Ten_xe(string);
		void set_Mau_xe(string);
		void set_Gia_thanh(ll);
		void set_So_luong(int);
};