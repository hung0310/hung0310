#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include"KhachHang.h"

KhachHang::KhachHang() {
	this->MSKH = this->Ten_KH = "";
}
KhachHang::~KhachHang() {}

void KhachHang::input(ifstream& in) {
	getline(in, this->MSKH);
	getline(in, this->Ten_KH);
	getline(in, this->Gioi_tinh);
	getline(in, this->Ngay_sinh);
	getline(in, this->Dia_chi);
	getline(in, this->CCCD);
	getline(in, this->So_dien_thoai);
	if (Ngay_sinh[2] != '/') Ngay_sinh = "0" + Ngay_sinh;
	if (Ngay_sinh[5] != '/') Ngay_sinh.insert(3, "0");
}

void KhachHang::output() {
	cout << "|   " << this->MSKH << setw(30) << this->Ten_KH << setw(20) << this->Gioi_tinh << setw(25) << this->Ngay_sinh << setw(25) << this->Dia_chi << setw(25) << this->CCCD << setw(22) << this->So_dien_thoai << endl;
	cout << "|____________________|__________________________|____________________|______________________|________________________|______________________|_____________________|" << endl;

}

string& KhachHang::get_MSKH() {
	return this->MSKH;
}

string& KhachHang::get_Ten_KH() {
	return this->Ten_KH;
}