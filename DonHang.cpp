#include"DonHang.h"

DonHang::DonHang() {
	this->Doanh_thu = this->Thanh_tien = this->ARPU = 0;
}

DonHang::~DonHang() {}

ll& DonHang::get_Doanh_thu() {
	return this->Doanh_thu;
}

ll& DonHang::get_ARPU() {
	return this->ARPU;
}

ll& DonHang::get_Thanh_tien() {
	return this->Thanh_tien;
}

void DonHang::set_Thanh_tien(ll Thanh_tien) {
	this->Thanh_tien = Thanh_tien;
}

void DonHang::set_ARPU(ll arpu) {
	this->ARPU = arpu;
}

void DonHang::set_Doanh_thu(ll doanh_thu) {
	this->Doanh_thu = doanh_thu;
}

//_____