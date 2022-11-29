#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include"Xe.h"

using namespace std;

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
	cout << "|     " << this->MSX << setw(20) << this->Hang_xe << setw(30) << this->Ten_xe << setw(16) << this->Mau_xe << setw(15) << this->So_luong << setw(25) << this->Gia_thanh  << endl;
	cout << "|____________________|______________________|________________________|__________________|_______________|______________________|" << endl;
}

string& Xe::get_MSX() {
	return this->MSX;
}

string& Xe::get_Ten_xe() {
	return this->Ten_xe;
}

ll Xe::get_Gia_thanh() {
	return this->Gia_thanh;
}

void Xe::set_Gia_thanh(ll gia_thanh) {
	this->Gia_thanh = gia_thanh;
}