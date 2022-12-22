#include"DonDatHang.h"

DonDatHang::DonDatHang() {
	this->Ma_soDH = this->Ma_soKH = this->Ma_so_Xe = "";
	this->So_luong_ban_ra = this->Tong_so_khach_hang = this->Tong_so_xe_ban_ra = this->So_xe_con_lai = 0;
	this->Tinh_trang = true;
	Ngay_ban.ngay = Ngay_ban.thang = Ngay_ban.nam = 0;
}

DonDatHang::~DonDatHang() {}

void DonDatHang::input(ifstream& in) {
	getline(in, this->Ma_soDH);
	getline(in, this->Ma_soKH);
	getline(in, this->Ma_so_Xe);
	in >> Ngay_ban.ngay;
	in >> Ngay_ban.thang;
	in >> Ngay_ban.nam;
	in >> this->So_luong_ban_ra;
	in.ignore();
}

string& DonDatHang::get_MSDH() {
	return this->Ma_soDH;
}

string& DonDatHang::get_MSKH() {
	return this->Ma_soKH;
}

string& DonDatHang::get_MSX() {
	return this->Ma_so_Xe;
}

int& DonDatHang::get_So_luong_xe_ban_ra() {
	return this->So_luong_ban_ra;
}

bool& DonDatHang::get_Tinh_trang() {
	return this->Tinh_trang;
}

void DonDatHang::set_So_luong_xe_ban_ra(int so_luong_ban_ra) {
	this->So_luong_ban_ra = so_luong_ban_ra;
}

void DonDatHang::set_Tinh_trang(bool Tinh_trang) {
	this->Tinh_trang = Tinh_trang;
}

void DonDatHang::set_Thang(int thang) {
	Ngay_ban.thang = thang;
}

int& DonDatHang::get_Ngay() {
	return Ngay_ban.ngay;
}

int& DonDatHang::get_Thang() {
	return Ngay_ban.thang;
}

int& DonDatHang::get_Nam() {
	return Ngay_ban.nam;
}

int& DonDatHang::get_Tong_so_xe_ban_ra() {
	return this->Tong_so_xe_ban_ra;
}

int& DonDatHang::get_So_xe_con_lai() {
	return this->So_xe_con_lai;
}

int& DonDatHang::get_Tong_so_khach() {
	return this->Tong_so_khach_hang;
}

void DonDatHang::set_Tong_so_xe_ban_ra(int tong) {
	this->Tong_so_xe_ban_ra = tong;
}

void DonDatHang::set_Tong_so_khach(int tong_so_khach) {
	this->Tong_so_khach_hang = tong_so_khach;
}

void DonDatHang::set_So_xe_con_lai(int so_xe_con_lai) {
	this->So_xe_con_lai = so_xe_con_lai;
}

int& DonDatHang::Ngay_mua_xe(int& d, int& m) {
	if (m == 2) {
		if (d < 28) {
			if (d == 27) {
				d = 2;
				m += 1;
			}
			else if (d == 26) {
				d = 1;
				m += 1;
			}
			else if (d <= 25) {
				d += 3;
			}
		}
		else {
			if (d == 28) {
				d = 3;
				m += 1;
			}
		}
	}
	else if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
		if (d == 31) {
			d = 3;
			m += 1;
		}
		else if (d < 31) {

			if (d == 29) d = 1;
			else if (d == 30) d = 2;
			else d += 3;
		}
	}
	else {
		if (d == 31) {
			d = 3;
			m += 1;
		}
		else if (d < 31) {
			if (d == 30) {
				d = 3;
				m += 1;
			}
			else if (d == 29) {
				d = 2;
				m += 1;
			}
			else {
				d += 3;
			}
		}
	}
	return d, m;
}