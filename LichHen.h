#pragma once
#include<iostream>
#include<fstream>
#include"DonDathang.h"

using namespace std;

class LichHen : public DonDatHang {
	public:
		void input(ifstream&);
		void output();
};