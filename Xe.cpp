#include"Xe.h"

Xe::Xe() {
	this->MSX = this->Hang_xe = this->Ten_xe = this->Mau_xe = "";
	this->Gia_thanh = 0;
	this->So_luong = 0;
}

Xe::~Xe() {}

void Xe::input(ifstream& in) {
	getline(in, this->MSX);
	getline(in, this->Hang_xe);
	getline(in, this->Ten_xe);
	getline(in, this->Mau_xe);
	in >> this->So_luong;
	in >> this->Gia_thanh;
	in.ignore();
}

void Xe::output() {
	cout << "|     " << this->MSX << setw(20) << this->Hang_xe << setw(30) << this->Ten_xe << setw(16) << this->Mau_xe << setw(15) << this->So_luong << setw(25) << this->Gia_thanh << setw(6);
	cout << char(179) << endl;
	cout << char(195);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(180) << endl;
}

string& Xe::get_MSX() {
	return this->MSX;
}

string& Xe::get_Ten_xe() {
	return this->Ten_xe;
}

string& Xe::get_Hang_xe() {
	return this->Hang_xe;
}

string& Xe::get_Mau_xe() {
	return this->Mau_xe;
}

int& Xe::get_So_luong() {
	return this->So_luong;
}

ll& Xe::get_Gia_thanh() {
	return this->Gia_thanh;
}

void Xe::set_MSX(string msx) {
	this->MSX = msx;
}

void Xe::set_Hang_xe(string hang_xe) {
	this->Hang_xe = hang_xe;
}

void Xe::set_Mau_xe(string mau_xe) {
	this->Mau_xe = mau_xe;
}

void Xe::set_Ten_xe(string ten_xe) {
	this->Ten_xe = ten_xe;
}

void Xe::set_So_luong(int so_luong) {
	this->So_luong = so_luong;
}

void Xe::set_Gia_thanh(ll gia_thanh) {
	this->Gia_thanh = gia_thanh;
}

