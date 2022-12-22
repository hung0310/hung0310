#include"ChiPhi.h"

ChiPhi::ChiPhi() {
	this->Tien_noi_that = this->Tien_thue_mat_bang, this->Thue = 0;
}

void ChiPhi::input(ifstream& in) {
	in >> this->Tien_thue_mat_bang;
	in >> this->Tien_noi_that;
	in >> this->Thue;
}

ll& ChiPhi::get_Thue() {
	return this->Thue;
}

ll& ChiPhi::get_Tien_noi_that() {
	return this->Tien_noi_that;
}

ll& ChiPhi::get_Tien_thue_mat_bang() {
	return this->Tien_thue_mat_bang;
}

ChiPhi::~ChiPhi() {}