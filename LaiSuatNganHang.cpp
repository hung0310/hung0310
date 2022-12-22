#include"LaiSuatNganHang.h"

LaiSuat::LaiSuat() {
	this->Ten_NH = "";
	this->Lai_suat_vay = 0;
}

LaiSuat::~LaiSuat() {}

string& LaiSuat::get_Ten_NH() {
	return this->Ten_NH;
}

float& LaiSuat::get_Lai_suat_vay() {
	return this->Lai_suat_vay;
}

void LaiSuat::input(ifstream& in) {
	getline(in, this->Ten_NH);
	in >> this->Lai_suat_vay;
	in.ignore();
}

//____