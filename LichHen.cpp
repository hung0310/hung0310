#include<iostream>
#include<iomanip>
#include"LichHen.h"
using namespace std;

void LichHen::input(ifstream& in) {
	DonDatHang::input(in);
}

void LichHen::output() {
	cout << DonDatHang::get_MSDH() << setw(20) << DonDatHang::get_MSKH() << setw(20) << DonDatHang::get_MSX() << setw(20) << DonDatHang::get_Ngay() << "/" << DonDatHang::get_Thang() << "/" << DonDatHang::get_Nam() << setw(20) << DonDatHang::get_So_luong_xe_ban_ra() << endl;
}