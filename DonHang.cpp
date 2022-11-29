#include<iostream>
#include<iomanip>
#include<fstream>
#include"DonHang.h"

using namespace std;

DonHang::DonHang() {
	this->Ma_soDH = this->Ma_soKH = this->Ma_so_Xe = this->Ngay_ban = this->Thang = "";
	this->So_luong_ban_ra = this->So_xe_con_lai = this->Tong_so_xe_ban_ra = 0;
	this->Thanh_tien = this->Doanh_thu = 0;
	this->Tinh_trang = true;
}

DonHang::~DonHang() {}

void DonHang::input(ifstream& in) {
	getline(in, this->Ma_soDH);
	getline(in, this->Ma_soKH);
	getline(in, this->Ma_so_Xe);
	getline(in, this->Ngay_ban);
	in >> this->So_luong_ban_ra;
	if (Ngay_ban[2] != '/') Ngay_ban = "0" + Ngay_ban;
	if (Ngay_ban[5] != '/') Ngay_ban.insert(3, "0");
	in.ignore();
}

string DonHang::get_MSDH() {
	return this->Ma_soDH;
}

string DonHang::get_MSKH() {
	return this->Ma_soKH;
}

string DonHang::get_MSX() {
	return this->Ma_so_Xe;
}

string DonHang::get_Ngay_ban() {
	return this->Ngay_ban;
}

string DonHang::get_Thang() {
	return this->Thang;
}

int DonHang::get_So_luong_xe_ban_ra() {
	return this->So_luong_ban_ra;
}

int DonHang::get_Tong_so_xe_ban_ra() {
	return this->Tong_so_xe_ban_ra;
}

ll DonHang::get_Doanh_thu() {
	return this->Doanh_thu;
}

int& DonHang::get_So_xe_con_lai() {
	return this->So_xe_con_lai;
}

ll& DonHang::get_Thanh_tien() {
	return this->Thanh_tien;
}

bool DonHang::get_Tinh_trang() {
	return this->Tinh_trang;
}

void DonHang::set_So_luong_xe_ban_ra(int so_luong_ban_ra) {
	this->So_luong_ban_ra = so_luong_ban_ra;
}

void DonHang::set_Tong_so_xe_ban_ra(int tong) {
	this->Tong_so_xe_ban_ra = tong;
}

void DonHang::set_Thanh_tien(ll Thanh_tien) {
	this->Thanh_tien = Thanh_tien;
}

void DonHang::set_Doanh_thu(ll doanh_thu) {
	this->Doanh_thu = doanh_thu;
}

void DonHang::set_Thang(string Thang) {
	this->Thang = Thang;
}

void DonHang::set_Tinh_trang(bool Tinh_trang) {
	this->Tinh_trang = Tinh_trang;
}

