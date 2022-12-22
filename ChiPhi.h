#pragma once
#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>

using namespace std;
using ll = long long;

class ChiPhi {
	private:
		ll Tien_thue_mat_bang, Tien_noi_that, Thue;
	public:
		ChiPhi();
		~ChiPhi();
		void input(ifstream&);
		ll& get_Tien_thue_mat_bang();
		ll& get_Tien_noi_that();
		ll& get_Thue();
};