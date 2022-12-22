#include"NhanVien.h"

NhanVien::NhanVien() {
	this->Ma_so_NV = this->Ho_ten_NV = this->Dia_chi = this->Gioi_tinh = this->CCCD = this->Ngay_sinh = this->So_dien_thoai = this->Ma_chuc_vu = "";
}

NhanVien::~NhanVien() {}

string& NhanVien::get_MSNV() {
	return this->Ma_so_NV;
}

string& NhanVien::get_Ma_chuc_vu() {
	return this->Ma_chuc_vu;
}

string& NhanVien::get_Dia_chi() {
	return this->Dia_chi;
}

string& NhanVien::get_Gioi_tinh() {
	return this->Gioi_tinh;
}

string& NhanVien::get_Ten_NV() {
	return this->Ho_ten_NV;
}

void NhanVien::input(ifstream& in) {
	getline(in, this->Ma_so_NV);
	getline(in, this->Ma_chuc_vu);
	getline(in, this->Ho_ten_NV);
	getline(in, this->Gioi_tinh);
	getline(in, this->Ngay_sinh);
	getline(in, this->Dia_chi);
	getline(in, this->CCCD);
	getline(in, this->So_dien_thoai);
}

void NhanVien::output() {
	cout << Ma_so_NV << setw(20) << Ma_chuc_vu << setw(20) << Ho_ten_NV << setw(20) << Gioi_tinh << setw(20) << Ngay_sinh << setw(20) << Dia_chi << setw(30) << CCCD << setw(20) << So_dien_thoai << endl;
}