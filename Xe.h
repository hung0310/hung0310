#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;
using ll = long long;

class Xe {
	private:
		string MSX, Hang_xe, Ten_xe, Mau_xe;
		ll Gia_thanh;
		int So_luong;
	public:
		Xe();
		~Xe();
		void input(ifstream&);
		void output();
		string& get_MSX();
		string& get_Ten_xe();
		ll get_Gia_thanh();
		void set_Gia_thanh(ll);
};