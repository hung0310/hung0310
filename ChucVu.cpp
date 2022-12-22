#include"ChucVu.h"

ChucVu::ChucVu() {
	this->Chuc_vu = this->Ma_chuc_vu = "";
	this->Luong_co_ban = 0;
}

string& ChucVu::get_Chuc_vu() {
	return this->Chuc_vu;
}

ll& ChucVu::get_Luong_co_ban() {
	return this->Luong_co_ban;
}

string& ChucVu::get_Ma_chuc_vu() {
	return this->Ma_chuc_vu;
}

void ChucVu::input(ifstream& in) {
	getline(in, this->Ma_chuc_vu);
	getline(in, this->Chuc_vu);
	in >> this->Luong_co_ban;
	in.ignore();
}

ChucVu::~ChucVu() {}