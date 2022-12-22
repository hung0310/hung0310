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
	cout << char(179);
	cout << "   " << this->MSKH << setw(30) << this->Ten_KH << setw(20) << this->Gioi_tinh << setw(25) << this->Ngay_sinh << setw(25) << this->Dia_chi << setw(25) << this->CCCD << setw(22) << this->So_dien_thoai << setw(5);
	cout << char(179) << endl;
	cout << char(195);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(180) << endl;
}

string& KhachHang::get_MSKH() {
	return this->MSKH;
}

string& KhachHang::get_Ten_KH() {
	return this->Ten_KH;
}

string& KhachHang::get_Dia_chi() {
	return this->Dia_chi;
}

string& KhachHang::get_So_dien_thoai() {
	return this->So_dien_thoai;
}