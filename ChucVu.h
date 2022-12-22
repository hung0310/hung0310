#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
using ll = long long;

class ChucVu {
	private:
		string Chuc_vu, Ma_chuc_vu;
		ll Luong_co_ban;
	public:
		ChucVu();
		~ChucVu();
		void input(ifstream&);
		string& get_Ma_chuc_vu();
		string& get_Chuc_vu();
		ll& get_Luong_co_ban();
};