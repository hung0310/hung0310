#include"TraGop.h"

TraGop::TraGop() {
	this->Ten_NH = this->Ma_so_KHTG = this->Ma_so_XTG = this->Ngay_tra_gop = "";
	this->Du_no_goc = this->So_tien_phai_tra_hang_thang = this->Tien_lai_hang_thang = this->Tien_goc_hang_thang = this->So_tien_tra_truoc = 0;
	this->Thoi_han_vay = 0;
}

TraGop::~TraGop() {}

string& TraGop::get_Ten_NH() {
	return this->Ten_NH;
}

string& TraGop::get_Ma_so_KHTG() {
	return this->Ma_so_KHTG;
}

string& TraGop::get_Ma_so_XTG() {
	return this->Ma_so_XTG;
}

string& TraGop::get_Ngay_tra_gop() {
	return this->Ngay_tra_gop;
}

ll& TraGop::get_Du_no_goc() {
	return this->Du_no_goc;
}

ll& TraGop::get_So_tien_phai_tra_hang_thang() {
	return this->So_tien_phai_tra_hang_thang;
}

ll& TraGop::get_Tien_lai_hang_thang() {
	return this->Tien_lai_hang_thang;
}

ll& TraGop::get_Tien_goc_hang_thang() {
	return this->Tien_goc_hang_thang;
}

ll& TraGop::get_So_tien_tra_truoc() {
	return this->So_tien_tra_truoc;
}

float& TraGop::get_Phan_tram_tra_truoc() {
	return this->Phan_tram_tra_truoc;
}

int& TraGop::get_Thoi_han_vay() {
	return this->Thoi_han_vay;
}

void TraGop::input(ifstream& in) {
	getline(in, this->Ma_so_KHTG);
	getline(in, this->Ma_so_XTG);
	getline(in, this->Ten_NH);
	getline(in, this->Ngay_tra_gop);
	in >> this->Thoi_han_vay;
	in >> this->Du_no_goc;
	in >> this->Phan_tram_tra_truoc;
	in.ignore();
	if (Ngay_tra_gop[2] != '/') Ngay_tra_gop = "0" + Ngay_tra_gop;
	if (Ngay_tra_gop[5] != '/') Ngay_tra_gop.insert(3, "0");
}

void TraGop::output() {
	cout << Ma_so_KHTG << setw(30) << Ma_so_XTG << setw(20) << Ten_NH << setw(20) << Ngay_tra_gop << setw(20) << Thoi_han_vay << setw(20) << Du_no_goc << endl;
}

void TraGop::set_So_tien_tra_truoc(ll so_tien_tra_truoc) {
	this->So_tien_tra_truoc = so_tien_tra_truoc;
}

void TraGop::set_Tien_lai_hang_thang(ll tien_lai_hang_thang) {
	this->Tien_lai_hang_thang = tien_lai_hang_thang;
}

void TraGop::set_Tien_goc_hang_thang(ll tien_goc_hang_thang) {
	this->Tien_goc_hang_thang = tien_goc_hang_thang;
}

void TraGop::set_So_tien_phai_tra_hang_thang(ll so_tien_phai_tra_hang_thang) {
	this->So_tien_phai_tra_hang_thang = so_tien_phai_tra_hang_thang;
}

//----