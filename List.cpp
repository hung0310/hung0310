#include"List.h"
																																																															  
str thaotac[9] = { "QUAN LI THONG TIN KHACH HANG               ","QUAN LI THONG TIN XE                       ", "QUAN LI THONG TIN DANH SACH DON DAT HANG   ", "QUAN LI THONG TIN DANH SACH NHAN VIEN      " , "THONG KE TINH HINH KINH DOANH TRONG NAM    ", "CHINH SUA VA TIM KIEM THONG TIN            ", "DANH SACH KHACH HANG MUA TRA GOP           ", "LOI NHUAN THU DUOC TRONG NAM               ", "KET THUC CHUONG TRINH                      "};
																																								
str doanhthu[4] = { "DOANH THU THU DUOC TRONG NAM               ","DOANH THU TRUNG BINH TREN MOT KHACH HANG   ", "DOANH THU CAO NHAT VA THAP NHAT TRONG NAM  ", "KET THUC CHUC NANG                         " };
str	don_dat_hang[3] = { "QUAN LI THONG TIN DANH SACH DON HANG       ", "QUAN LI THONG TIN DANH SACH LICH HEN       ", "KET THUC CHUC NANG                         " };																		  
																																																				   	   
str thao_tac_ban_phim[7] = {"THEM THONG TIN KHACH HANG                  ", "TIM KIEM THONG TIN HOA DON KHACH HANG      ", "XOA THONG TIN BAT KY CUA MOT KHACH HANG    ", "NHAP THEM XE VAO SHOWROOM                  ","THEM THONG TIN DON DAT HANG                ", "XOA MOT DON DAT HANG BAT KY                ","KET THUC CHUC NANG                         "};
																		                                               
void Table_Front_1_Khach_Hang() {
	cout << char(218);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_Khach_Hang() {
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
void Table_Back_Khach_Hang() {
	cout << char(192);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(217);
}
void Table_Front_1_Xe() {
	cout << char(218);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_Xe() {
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
void Table_Back_Xe() {
	cout << char(192);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_DonHang() {
	cout << char(218);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_DonHang() {
	cout << char(195);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_1_DonHang() {
	cout << char(195);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_2_DonHang() {
	cout << char(192);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_DoanhThu() {
	cout << char(218);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_DoanhThu() {
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_DoanhThu() {
	cout << char(192);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_TraGop() {
	cout << char(218);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 36; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Back_TraGop() {
	cout << char(192);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 36; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_2_TraGop() {
	cout << char(195);
	for (int i = 1; i <= 18; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 15; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 36; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Front_1_doanh_thu_tb() {
	cout << char(218);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 28; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_doanh_thu_tb() {
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 28; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_doanh_thu_tb() {
	cout << char(192);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 28; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_lich_hen() {
	cout << char(218);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 16; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_lich_hen() {
	cout << char(195);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 16; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_lich_hen() {
	cout << char(192);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 30; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 16; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_hoa_don() {
	cout << char(218);
	for (int i = 1; i <= 11; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_hoa_don() {
	cout << char(195);
	for (int i = 1; i <= 11; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_hoa_don() {
	cout << char(195);
	for (int i = 1; i <= 11; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 19; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Front_1_loi_nhuan() {
	cout << char(218);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_loi_nhuan() {
	cout << char(195);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_loi_nhuan() {
	cout << char(192);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 22; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 26; i++) cout << char(196);
	cout << char(217) << endl;
}
void Table_Front_1_nhan_vien() {
	cout << char(218);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(194);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(191) << endl;
}
void Table_Front_2_nhan_vien() {
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(180) << endl;
}
void Table_Back_nhanvien() {
	cout << char(192);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 24; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 14; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 23; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 20; i++) cout << char(196);
	cout << char(217) << endl;
}

template<class T>
Node<T>::Node() {
	this->next = nullptr;
	this->prev = nullptr;
}

template<class T>
List<T>::List() {
	this->head = this->tail = nullptr;
	this->size = 0;
}

template<class T>
List<T>::~List() {}

template<class T>
Node<T>* List<T>::get_Head() {
	return this->head;
}

template<class T>
Node<T>* List<T>::get_Tail() {
	return this->tail;
}

template<class T>
void List<T>::add_Tail(Node<T>* data) {
	data->next = nullptr;
	data->prev = nullptr;
	if (this->head == nullptr) {
		this->head = data;
		this->tail = this->head;
	}
	else {
		this->tail->next = data;
		data->prev = this->tail;
		this->tail = data;
	}
}

template<class T>
int List<T>::get_Size() {
	return this->size;
}

template<class T>
void List<T>::read_file(T& data, ifstream& in) {
	data.input(in);
}

template<class T>
void List<T>::input(const char* filename) {
	//cout.imbue(locale(cout.getloc(), new space_out));
	ifstream in;
	in.open(filename, ios::in);
	Node<T> p;
	string nd = "Loi doc file ";
	try {
		if (in.good()) {
			while (!in.eof()) {
				read_file(p.data, in);
				Node<T>* node = p.KhoitaoNode(p.data);
				add_Tail(node);
				size++;
			}
		}
		else {
			throw nd;
		}
	}
	catch (string& e) {
		cout << e << filename << ", hay kiem tra lai file ban khoi tao";
	}
}

template<class T>
void List<T>::output(T data) {
	data.output();
}

template<class T>
void List<T>::display() {
	Node<T>* p;
	p = head;
	while (p != nullptr) {
		output(p->data);
		p = p->next;
	}
}

template<class T>
void List<T>::Danh_sach_don_hang(List<DonHang> a, List<KhachHang> b, List<Xe> c) {
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		cout << "|      " << p->data.get_MSDH() << setw(28);
		for (Node<KhachHang>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_MSKH() == k->data.get_MSKH()) {
				cout << k->data.get_Ten_KH() << setw(30);
			}
		}
		for (Node<Xe>* q = c.get_Head(); q != nullptr; q = q->next) {
			if (p->data.get_MSX() == q->data.get_MSX()) {
				cout << q->data.get_Ten_xe() << setw(15);
				cout << p->data.get_Ngay(); cout << "/"; cout << p->data.get_Thang(); cout << "/"; cout << p->data.get_Nam() << setw(15);
				cout << p->data.get_So_luong_xe_ban_ra() << setw(28);
				cout << q->data.get_Gia_thanh() << setw(22);
				p->data.set_Thanh_tien(p->data.get_So_luong_xe_ban_ra() * q->data.get_Gia_thanh());
				cout << p->data.get_Thanh_tien() << setw(5);
				cout << char(179) << endl;
			}
		}
		Table_Back_1_DonHang();
	}
}

template<class T>
void List<T>::Danh_sach_lich_hen(List<LichHen> a, List<KhachHang> b, List<Xe> c) {
	for (Node<LichHen>* p = a.get_Head(); p != nullptr; p = p->next) {
		cout << "|      " << p->data.get_MSDH() << setw(30);
		for (Node<KhachHang>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_MSKH() == k->data.get_MSKH()) {
				cout << k->data.get_Ten_KH() << setw(28);
			}
		}
		for (Node<Xe>* q = c.get_Head(); q != nullptr; q = q->next) {
			if (p->data.get_MSX() == q->data.get_MSX()) {
				cout << q->data.get_Ten_xe() << setw(17);
				cout << p->data.get_Ngay(); cout << "/"; cout << p->data.get_Thang(); cout << "/"; cout << p->data.get_Nam() << setw(17);
				cout << p->data.get_So_luong_xe_ban_ra() << setw(26);
				cout << q->data.get_Gia_thanh() << setw(7);
				cout << char(179) << endl;
			}
		}
		Table_Front_2_lich_hen();
	}
}

template<class T>
void List<T>::Danh_sach_nhan_vien(List<NhanVien> a, List<ChucVu> b) {
	for (Node<NhanVien>* p = a.get_Head(); p!= nullptr; p = p->next) {
		cout << "|    " << p->data.get_MSNV() << setw(25);
		cout << p->data.get_Ten_NV() << setw(15);
		cout << p->data.get_Gioi_tinh() << setw(24);
		cout << p->data.get_Dia_chi() << setw(33);
		for (Node<ChucVu>* k = b.get_Head(); k!= nullptr; k = k->next) {
			if (p->data.get_Ma_chuc_vu() == k->data.get_Ma_chuc_vu()) {
				cout << k->data.get_Chuc_vu() << setw(17);
				cout << k->data.get_Luong_co_ban() << setw(6) << char(179) << endl;
			}
		}
		Table_Front_2_nhan_vien();
	}
}

template<class T>
Node<KhachHang>* List<T>::Tim_kiem_khach_hang(List<KhachHang> a, string nd) {
	Node<KhachHang>* p;
	p = a.head;
	while ((p != nullptr) && (p->data.get_MSKH() != nd)) {
		p = p->next;
	}
	return p;
}

template<class T>
Node<DonDatHang>* List<T>::Tim_kiem_don_dat_hang(List<DonDatHang> a, string nd) {
	Node<DonDatHang>* p;
	p = a.head;
	while ((p != nullptr) && (p->data.get_MSDH() != nd)) {
		p = p->next;
	}
	return p;
}

template<class T>
void List<T>::delete_First(List<T>& a) {
	Node<T>* p = a.head;
	a.head = a.head->next;
	a.head->prev = nullptr;
	if (a.head == nullptr) {
		a.tail = nullptr;
	}
	p->next = nullptr;
	delete p;
}

template<class T>
void List<T>::delete_Last(List<T>& a) {
	Node<T>* p = a.tail;
	a.tail = a.tail->prev;
	a.tail->next = nullptr;
	if (a.tail == nullptr) {
		a.head = nullptr;
	}
	p->prev = nullptr;
	delete p;
}

template<class T>
void List<T>::write_file_khach_hang(List<KhachHang> a) {
	ofstream out;
	out.open("KhachHang.txt", ios::out);
	Node<KhachHang>* p;
	p = a.get_Head();
	while (p != nullptr) {
		out << p->data.get_MSKH() << endl;
		out << p->data.get_Ten_KH() << endl;
		out << p->data.get_Gioi_tinh() << endl;
		out << p->data.get_Ngay_sinh() << endl;
		out << p->data.get_Dia_chi() << endl;
		out << p->data.get_CCCD() << endl;
		if (p->next != nullptr) {
			out << p->data.get_So_dien_thoai() << endl;
		}
		else out << p->data.get_So_dien_thoai();
		p = p->next;
	}
	out.close();
}

template<class T>
void List<T>::write_file_don_dat_hang(List<DonDatHang> a) {
	ofstream out;
	out.open("DonDatHang.txt", ios::out);
	Node<DonDatHang>* p;
	p = a.get_Head();
	while (p != nullptr) {
		out << p->data.get_MSDH() << endl;
		out << p->data.get_MSKH() << endl;
		out << p->data.get_MSX() << endl;
		out << p->data.get_Ngay() << " ";
		out << p->data.get_Thang() << " ";
		out << p->data.get_Nam() << endl;
		if (p->next != nullptr) {
			out << p->data.get_So_luong_xe_ban_ra() << endl;
		}
		else out << p->data.get_So_luong_xe_ban_ra();
		p = p->next;
	}
	out.close();
}

template<class T>
void List<T>::delete_anywhere_khach_hang(List<KhachHang>& a, string nd) {

	Node<KhachHang>* p = Tim_kiem_khach_hang(a, nd);
	if (p != nullptr) {
		if (p->prev == nullptr) {
			delete_First(a);
			return;
		}
		if (p->next == nullptr) {
			delete_Last(a);
			return;
		}
		p->prev->next = p->next;
		p->next->prev = p->prev;
		p->prev = nullptr;
		p->next = nullptr;
		delete p;
	}
}

template<class T>
void List<T>::delete_anywhere_don_dat_hang(List<DonDatHang>& a, string nd) {

	Node<DonDatHang>* p = Tim_kiem_don_dat_hang(a, nd);
	if (p != nullptr) {
		if (p->prev == nullptr) {
			delete_First(a);
			return;
		}
		if (p->next == nullptr) {
			delete_Last(a);
			return;
		}
		p->prev->next = p->next;
		p->next->prev = p->prev;
		p->prev = nullptr;
		p->next = nullptr;
		delete p;
	}
}

template<class T>
void List<T>::Doanh_thu(List<DonHang> a, List<Xe> b) {
	Node<DonHang>* l;
	Node<Xe>* m;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		l->data.get_Thang() = p->data.get_Thang();
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			m = k;
			if (p->data.get_MSX() == k->data.get_MSX()) {
				m->data.get_Gia_thanh() = k->data.get_Gia_thanh();
			}
		}
	}
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		ll sum = 0;
		int tong = 0;
		tong += l->data.get_So_luong_xe_ban_ra();
		for (m = b.get_Head(); m != nullptr; m = m->next) {
			if (l->data.get_MSX() == m->data.get_MSX()) {
				sum += m->data.get_Gia_thanh() * l->data.get_So_luong_xe_ban_ra();
			}
		}
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang() && l->data.get_Tinh_trang() == true && k->data.get_Tinh_trang() == true) {
				k->data.set_Tinh_trang(false);
				for (m = b.get_Head(); m != nullptr; m = m->next) {
					if (k->data.get_MSX() == m->data.get_MSX()) {
						sum += m->data.get_Gia_thanh() * k->data.get_So_luong_xe_ban_ra();
						tong += k->data.get_So_luong_xe_ban_ra();
					}
				}	
			}
		}
		l->data.set_Doanh_thu(sum);
		l->data.set_Tong_so_xe_ban_ra(tong);
	}
	Node<DonHang>* p;
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		p = l;
		int count = 0;
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang()) {
				count++;
			}
		}
		if ((count != 0 && l->data.get_Tinh_trang() == true) || (count == 0 && l->data.get_Tinh_trang() == true)) {
			p->data.set_Tong_so_xe_ban_ra(l->data.get_Tong_so_xe_ban_ra());
			p->data.set_Thang(l->data.get_Thang());
			p->data.set_Doanh_thu(l->data.get_Doanh_thu());
			output_Doanh_thu(p->data);
		}
	}
}

template<class T>
void List<T>::output_Doanh_thu(T data) {
	cout << "|        " << data.get_Thang() << setw(20) << data.get_Tong_so_xe_ban_ra() << setw(31) << data.get_Doanh_thu() << setw(8);
	cout << char(179) << endl;
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(180) << endl;
}

template<class T>
void List<T>::Cap_nhat_thong_tin_Xe(List<DonHang> a, List<Xe> b) {
	ofstream out;
	out.open("Xe.txt", ios::out);
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		int sum = 0;
		if (p->data.get_Tinh_trang() == true) {
			sum += p->data.get_So_luong_xe_ban_ra();
		}
		for (Node<DonHang>* k = p->next; k != nullptr; k = k->next) {
			if (p->data.get_MSX() == k->data.get_MSX() && p->data.get_Tinh_trang()==true && k->data.get_Tinh_trang()==true) { 
				k->data.set_Tinh_trang(false);
				sum += k->data.get_So_luong_xe_ban_ra();
			}
		}
		p->data.get_MSX();
		p->data.set_Tong_so_xe_ban_ra(sum);
	}
	for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
		for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
			if (k->data.get_MSX() == p->data.get_MSX()) {
				k->data.set_So_luong(k->data.get_So_luong() - p->data.get_Tong_so_xe_ban_ra());
			}
		}
	}
	for (Node<Xe>* p = b.get_Head(); p != nullptr; p = p->next) {
		if (p->data.get_So_luong() > 0) {
			out << p->data.get_MSX() << endl;
			out << p->data.get_Hang_xe() << endl;
			out << p->data.get_Ten_xe() << endl;
			out << p->data.get_Mau_xe() << endl;
			out << p->data.get_So_luong() << endl;
			if (p->next != nullptr) {
				out << p->data.get_Gia_thanh() << endl;
			}
			else {
				out << p->data.get_Gia_thanh();
			}
		}
	}
	out.close();
}

template<class T>
void List<T>::Chinh_sach_tra_gop(List<KhachHang> a, List<Xe> b,List<TraGop> c, List<LaiSuat> d) {
	for (Node<TraGop>* p = c.get_Head(); p != nullptr; p = p->next) {
		for (Node<KhachHang>* k = a.get_Head(); k != nullptr; k = k->next) {
				if (p->data.get_Ma_so_KHTG() == k->data.get_MSKH()) {
					cout << "|     " << k->data.get_MSKH() << setw(28);
					cout << k->data.get_Ten_KH() << setw(20);
				}
		}
		for (Node<LaiSuat>* k = d.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_Ten_NH() == k->data.get_Ten_NH()) {
				cout << p->data.get_Ten_NH() << setw(28);
				cout << p->data.get_Ngay_tra_gop() << setw(20);
				cout << k->data.get_Lai_suat_vay() << setw(20);
				cout << p->data.get_Thoi_han_vay() << setw(30);
				cout << p->data.get_Du_no_goc() << setw(26);
				p->data.set_Tien_goc_hang_thang(p->data.get_Du_no_goc() / (p->data.get_Thoi_han_vay()*12));
				p->data.set_Tien_lai_hang_thang((p->data.get_Du_no_goc() * k->data.get_Lai_suat_vay()) / (p->data.get_Thoi_han_vay() * 12));
				p->data.set_So_tien_phai_tra_hang_thang(p->data.get_Tien_goc_hang_thang() + p->data.get_Tien_lai_hang_thang());
			}
		}
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_Ma_so_XTG() == k->data.get_MSX()) {
				p->data.set_So_tien_tra_truoc(p->data.get_Phan_tram_tra_truoc()*k->data.get_Gia_thanh());
			}
		}
		cout << p->data.get_So_tien_tra_truoc() << setw(28);
		cout << p->data.get_Tien_goc_hang_thang() << setw(28);
		cout << p->data.get_Tien_lai_hang_thang() << setw(28);
		cout << p->data.get_So_tien_phai_tra_hang_thang() << setw(15);
		cout << char(179) << endl;
		cout << char(195);
		for (int i = 1; i <= 18; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 25; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 24; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 25; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 15; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 27; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 23; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 27; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 26; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 26; i++) cout << char(196);
		cout << char(197);
		for (int i = 1; i <= 36; i++) cout << char(196);
		cout << char(180) << endl;
	}
}

template<class T>
void List<T>::Don_dat_hang(List<DonDatHang> a, List<Xe> b) {
	ofstream out;
	ofstream outt;
	out.open("DonHang.txt", ios::out);
	outt.open("LichHen.txt", ios::app);
	for (Node<DonDatHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		int tong = 0;
		tong += p->data.get_So_luong_xe_ban_ra();
		Node<DonDatHang>* k = p->next;
		while (k != nullptr) {
			for (Node<Xe>* l = b.get_Head(); l != nullptr; l = l->next) {
				if (p->data.get_MSX() == l->data.get_MSX() && (l->data.get_So_luong() - tong) >= 0) p->data.set_Tinh_trang(false);
				if (p->data.get_MSX() == k->data.get_MSX()) {
					tong += k->data.get_So_luong_xe_ban_ra();
					if ((l->data.get_So_luong() - tong) >= 0 && p->data.get_Tinh_trang() == true) k->data.set_Tinh_trang(false);
				}
			}
			k = k->next;
		}
	}
	for (Node<DonDatHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		if (p->data.get_Tinh_trang() == false) {
			out << p->data.get_MSDH() << endl;
			out << p->data.get_MSKH() << endl;
			out << p->data.get_MSX() << endl;
			p->data.Ngay_mua_xe(p->data.get_Ngay(), p->data.get_Thang());
			out << p->data.get_Ngay() << " " << p->data.get_Thang() << " " << p->data.get_Nam() << endl;
			if (p->next->data.get_Tinh_trang() == false) {
				out << p->data.get_So_luong_xe_ban_ra() << endl;
			}
			else {
				out << p->data.get_So_luong_xe_ban_ra();
			}
		}
		else {
			outt << endl << p->data.get_MSDH();
			outt << endl << p->data.get_MSKH();
			outt << endl << p->data.get_MSX();
			p->data.set_Thang(p->data.get_Thang() + 1);
			outt << endl << p->data.get_Ngay() << " " << p->data.get_Thang() << " " << p->data.get_Nam();
			outt << endl << p->data.get_So_luong_xe_ban_ra();		
		}
	}
		out.close();
		outt.close();
}

template<class T>
ll List<T> ::Tong_so_luong_phai_tra_cho_NV_trong_1nam(List<NhanVien> a, List<ChucVu> b) {
	ll Tong_so_luong = 0;
	for (Node<NhanVien>* p = a.get_Head(); p!= nullptr; p = p->next) {
		for (Node<ChucVu>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_Ma_chuc_vu() == k->data.get_Ma_chuc_vu()) {
				Tong_so_luong += k->data.get_Luong_co_ban() * 12;
			}
		}
	}
	return Tong_so_luong;
}

template<class T>
void List<T>::Doanh_thu_trung_binh_tren_1KH(List<DonHang> a, List<Xe> b) {
	Node<DonHang>* l;
	Node<Xe>* m;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		l->data.get_Thang() = p->data.get_Thang();
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			m = k;
			if (p->data.get_MSX() == k->data.get_MSX()) {
				m->data.get_Gia_thanh() = k->data.get_Gia_thanh();
			}
		}
	}
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		ll sum = 0;
		int tong = 0;
		tong += l->data.get_So_luong_xe_ban_ra();
		for (m = b.get_Head(); m != nullptr; m = m->next) {
			if (l->data.get_MSX() == m->data.get_MSX()) {
				sum += m->data.get_Gia_thanh() * l->data.get_So_luong_xe_ban_ra();
			}
		}
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang() && l->data.get_Tinh_trang() == true && k->data.get_Tinh_trang() == true) {
				k->data.set_Tinh_trang(false);
				for (m = b.get_Head(); m != nullptr; m = m->next) {
					if (k->data.get_MSX() == m->data.get_MSX()) {
						sum += m->data.get_Gia_thanh() * k->data.get_So_luong_xe_ban_ra();
						tong += k->data.get_So_luong_xe_ban_ra();
					}
				}
			}
		}
		l->data.set_Doanh_thu(sum);
		l->data.set_Tong_so_xe_ban_ra(tong);
	}
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		int count = 1;
		for (Node<DonHang>* k = p->next; k != nullptr; k = k->next) {
			if (p->data.get_Thang() == k->data.get_Thang()) {
				count++;
				k->data.set_Tinh_trang(false);
			}
		}
		p->data.set_Tong_so_khach(count);
	}
	Node<DonHang>* p;
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		p = l;
		int count = 0;
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang()) {
				count++;
			}
		}
		if ((count != 0 && l->data.get_Tinh_trang() == true) || (count == 0 && l->data.get_Tinh_trang() == true)) {
			p->data.set_Tong_so_khach(l->data.get_Tong_so_khach());
			p->data.set_Tong_so_xe_ban_ra(l->data.get_Tong_so_xe_ban_ra());
			p->data.set_Thang(l->data.get_Thang());
			p->data.set_Doanh_thu(l->data.get_Doanh_thu());
			p->data.set_ARPU(l->data.get_Doanh_thu() / l->data.get_Tong_so_khach());
			output_doanh_thu_trung_binh_tren_1KH(p->data);
		}
	}
}

template<class T>
void List<T>::output_doanh_thu_trung_binh_tren_1KH(T data) {
	cout << "|        " << data.get_Thang() << setw(30) << data.get_Doanh_thu() << setw(25) << data.get_Tong_so_khach() << setw(30) << data.get_ARPU() << setw(4);
	cout << char(179) << endl;
	Table_Front_2_doanh_thu_tb();
}	  

template<class T>
void List<T>::So_sanh_doanh_thu(List<DonHang> a, List<Xe> b) {
	Node<DonHang>* l;
	Node<Xe>* m;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		l->data.get_Thang() = p->data.get_Thang();
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			m = k;
			if (p->data.get_MSX() == k->data.get_MSX()) {
				m->data.get_Gia_thanh() = k->data.get_Gia_thanh();
			}
		}
	}
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		ll sum = 0;
		int tong = 0;
		tong += l->data.get_So_luong_xe_ban_ra();
		for (m = b.get_Head(); m != nullptr; m = m->next) {
			if (l->data.get_MSX() == m->data.get_MSX()) {
				sum += m->data.get_Gia_thanh() * l->data.get_So_luong_xe_ban_ra();
			}
		}
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang() && l->data.get_Tinh_trang() == true && k->data.get_Tinh_trang() == true) {
				k->data.set_Tinh_trang(false);
				for (m = b.get_Head(); m != nullptr; m = m->next) {
					if (k->data.get_MSX() == m->data.get_MSX()) {
						sum += m->data.get_Gia_thanh() * k->data.get_So_luong_xe_ban_ra();
						tong += k->data.get_So_luong_xe_ban_ra();
					}
				}
			}
		}
		l->data.set_Doanh_thu(sum);
		l->data.set_Tong_so_xe_ban_ra(tong);
	}
	ll max;
	int Thang;
	int So_luong;
	l = a.get_Head();
	max = l->data.get_Doanh_thu();
	Thang = l->data.get_Thang();
	So_luong = l->data.get_Tong_so_xe_ban_ra();
	while (l != nullptr) {
		if (max < l->data.get_Doanh_thu()) {
			max = l->data.get_Doanh_thu();
			Thang = l->data.get_Thang();
			So_luong = l->data.get_Tong_so_xe_ban_ra();
		}
		l = l->next;
	}
	cout << "\t\tTHANG DAT DOANH THU CAO NHAT" << endl << endl;
	Table_Front_1_DoanhThu();
	cout << "|      Thang      |    So xe ban duoc   |       Tong doanh thu      |" << endl;
	Table_Front_2_DoanhThu();
	cout << "|        " << Thang << setw(20) << So_luong << setw(31) << max << setw(8);
	cout << char(179) << endl;
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(180) << endl;
	Table_Back_DoanhThu();

	ll min;
	int thang;
	int so_luong = 0;
	l = a.get_Head();
	min = l->data.get_Doanh_thu();
	thang = l->data.get_Thang();
	so_luong = l->data.get_Tong_so_xe_ban_ra();
	while (l != nullptr) {
		if (min > l->data.get_Doanh_thu()) {
			min = l->data.get_Doanh_thu();
			thang = l->data.get_Thang();
			so_luong = l->data.get_Tong_so_xe_ban_ra();
		}
		l = l->next;
	}
	cout << endl;
	cout << "\t\tTHANG DAT DOANH THU THAP NHAT" << endl << endl;
	Table_Front_1_DoanhThu();
	cout << "|      Thang      |    So xe ban duoc   |       Tong doanh thu      |" << endl;
	Table_Front_2_DoanhThu();
	cout << "|        " << thang << setw(20) << so_luong << setw(31) << min << setw(8);
	cout << char(179) << endl;
	cout << char(195);
	for (int i = 1; i <= 17; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 21; i++) cout << char(196);
	cout << char(197);
	for (int i = 1; i <= 27; i++) cout << char(196);
	cout << char(180) << endl;
	Table_Back_DoanhThu();
}

template<class T>
ll List<T>::Tong_chi_phi_phai_tra_trong_1nam(List<ChiPhi> a) {
	ll Tong = 0;
	for (Node<ChiPhi>* p = a.get_Head(); p != nullptr; p = p->next) {
		Tong += p->data.get_Thue() + p->data.get_Tien_noi_that() + p->data.get_Tien_thue_mat_bang() * 12;
	}
	return Tong;
}

template<class T>
void List<T>::Tim_kiem_hoa_don_khach_hang(List<DonHang> dh, List<KhachHang> kh, List<Xe> x) {
	string  kt;
	cout << "Nhap ma so khach hang co dinh dang la: MSKH***:.... ";
	getline(cin, kt);
	int dem = 0;
	int count = 0;
	ll tong = 0;
	int stt = 0;
	cout << "\n\t\t\t\t\t\t\t\tHOA DON" << endl << endl;
	for (Node<DonHang>* p = dh.get_Head(); p != nullptr; p = p->next) {
		if (p->data.get_MSKH() == kt) {
			for (Node<KhachHang>* k = kh.get_Head(); k != nullptr; k = k->next) {
				if (p->data.get_MSKH() == k->data.get_MSKH()) {
					if (count == 0) {
						cout << "\t\t\tMa so khach hang: ";
						cout << k->data.get_MSKH() << endl;
						cout << "\t\t\tHo ten khach hang: ";
						cout << k->data.get_Ten_KH() << endl;
						cout << "\t\t\tDia chi: ";
						cout << k->data.get_Dia_chi() << endl;
						cout << "\t\t\tSo dien thoai: ";
						cout << k->data.get_So_dien_thoai() << endl << endl;
						count++;
						Table_Front_1_hoa_don();
						cout << "|    STT    |     Ma donhang    |           Ten xe          |   So luong   |     Gia Thanh ( VND )    |    Thanh tien ( VND )   |" << endl;
						Table_Front_2_hoa_don();
					}
					++stt;
					cout << "|     " << stt << setw(20);
					cout << p->data.get_MSDH() << setw(30);
				}
			}
			for (Node<Xe>* q = x.get_Head(); q != nullptr; q = q->next) {
				if (p->data.get_MSX() == q->data.get_MSX()) {
					cout << q->data.get_Ten_xe() << setw(12);
					cout << p->data.get_So_luong_xe_ban_ra() << setw(25);
					cout << q->data.get_Gia_thanh() << setw(25);
					p->data.set_Thanh_tien(p->data.get_So_luong_xe_ban_ra() * q->data.get_Gia_thanh());
					cout << p->data.get_Thanh_tien() << setw(10) << char(179) << endl;
					Table_Front_2_hoa_don();
					tong += p->data.get_Thanh_tien();
				}
			}
		}
		else dem++;
	}
	Table_Back_hoa_don();
	cout << "|        Tong         tien        thanh       toan            " << setw(58);
	cout << tong << setw(9) << char(179) << endl;
	cout << char(192);
	for (int i = 1; i <= 101; i++) cout << char(196);
	cout << char(193);
	for (int i = 1; i <= 25; i++) cout << char(196);
	cout << char(217) << endl;
	if (dem == dh.get_Size()) {
		system("cls");
		cout << "\n\n\n\n\t\t\t\t\t\t\tMA SO KHONG HOP LE HOAC KHONG TON TAI TRONG DANH SACH" << endl << endl << endl;
	}
}

template<class T>
ll List<T>::Tong_doanh_thu(List<DonHang> a, List<Xe> b) {
	ll Tong_doanh_thu = 0;
	Node<DonHang>* l;
	Node<Xe>* m;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		l->data.get_Thang() = p->data.get_Thang();
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			m = k;
			if (p->data.get_MSX() == k->data.get_MSX()) {
				m->data.get_Gia_thanh() = k->data.get_Gia_thanh();
			}
		}
	}
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		ll sum = 0;
		int tong = 0;
		tong += l->data.get_So_luong_xe_ban_ra();
		for (m = b.get_Head(); m != nullptr; m = m->next) {
			if (l->data.get_MSX() == m->data.get_MSX()) {
				sum += m->data.get_Gia_thanh() * l->data.get_So_luong_xe_ban_ra();
			}
		}
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang() && l->data.get_Tinh_trang() == true && k->data.get_Tinh_trang() == true) {
				k->data.set_Tinh_trang(false);
				for (m = b.get_Head(); m != nullptr; m = m->next) {
					if (k->data.get_MSX() == m->data.get_MSX()) {
						sum += m->data.get_Gia_thanh() * k->data.get_So_luong_xe_ban_ra();
						tong += k->data.get_So_luong_xe_ban_ra();
					}
				}
			}
		}
		l->data.set_Doanh_thu(sum);
		l->data.set_Tong_so_xe_ban_ra(tong);
	}
	Node<DonHang>* p;
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		p = l;
		int count = 0;
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang()) {
				count++;
			}
		}
		if ((count != 0 && l->data.get_Tinh_trang() == true) || (count == 0 && l->data.get_Tinh_trang() == true)) {
			p->data.set_Tong_so_xe_ban_ra(l->data.get_Tong_so_xe_ban_ra());
			p->data.set_Thang(l->data.get_Thang());
			Tong_doanh_thu += l->data.get_Doanh_thu();
			p->data.set_Doanh_thu(l->data.get_Doanh_thu());
		}
	}
	return Tong_doanh_thu;
}

template<class T>
void List<T>::Loi_nhuan_thu_duoc_trong_nam(List<DonHang>a, List<Xe> b, List<NhanVien> c, List<ChucVu> d, List<ChiPhi> e) {
	ll Tong_chi_phi = Tong_chi_phi_phai_tra_trong_1nam(e) + Tong_so_luong_phai_tra_cho_NV_trong_1nam(c, d);
	ll tong_doanh_thu = Tong_doanh_thu(a, b);
	ll Loi_nhuan = tong_doanh_thu - Tong_chi_phi;
	cout << "|     " << tong_doanh_thu << setw(22);
	cout << Tong_chi_phi_phai_tra_trong_1nam(e) << setw(25);
	cout << Tong_so_luong_phai_tra_cho_NV_trong_1nam(c, d) << setw(25);
	cout << Tong_chi_phi << setw(25);
	cout << Loi_nhuan << setw(10) << char(179) << endl;
}

template<class T>
void List<T>::Giai_phong_vung_nho() {
	Node<T>* p = nullptr;
	while (head != nullptr) {
		p = head;
		head = head->next;
		delete p;
	}
}

template<class T>
void List<T>::Nhap_thong_tin_xe(List<Xe>& a) {
	ofstream out;
	out.open("Xe.txt", ios::app);
	string maso, ten_xe, hangxe, mauxe;
	ll gia;
	int soluong;
	bool trang_thai = true;
	Node<Xe>* q = nullptr;
	do {
		cout << "Nhap ma so xe theo dinh dang ky tu CDC_< Viet tat hang xe >*** : " << endl;
		getline(cin, maso);
		q = a.get_Head();
		while (q != nullptr) {
			if (q->data.get_MSX() == maso) {
				cout << "Ma so xe da ton tai. Vui long nhap lai!" << endl << endl;
				trang_thai = false;
				break;
			}
			else {
				trang_thai = true;
			}
			q = q->next;
		}
	} while (trang_thai != true);
	cout << "Nhap hang xe:";
	getline(cin, hangxe);
	cout << "Nhap ten xe: ";
	getline(cin, ten_xe);
	cout << "Nhap mau xe:";
	getline(cin, mauxe);
	cout << "Nhap so luong xe:";
	cin >> soluong;
	cout << "Nhap gia thanh:";
	cin >> gia;
	cin.ignore();

	out << endl << maso;
	out << endl << hangxe;
	out << endl << ten_xe;
	out << endl << mauxe;
	out << endl << soluong;
	out << endl << gia;
	out.close();
}

template<class T>
void List<T>::Nhap_them_don_dat_hang(List<DonDatHang>& d) {
	ofstream out;
	out.open("DonDatHang.txt", ios::app);
	string maso, mskh, msx, ngaydat, soluong;
	bool trang_thai = true;
	Node<DonDatHang>* q = nullptr;
	do {
		cout << "Nhap ma so don dat hang theo dinh dang ky tu MSDH*** : " << endl;
		getline(cin, maso);
		q = d.get_Head();
		while (q != nullptr) {
			if (q->data.get_MSDH() == maso) {
				cout << "Ma so don dat hang da ton tai. Vui long nhap lai!" << endl << endl;
				trang_thai = false;
				break;
			}
			else {
				trang_thai = true;
			}
			q = q->next;
		}
	} while (trang_thai != true);
	cout << "Nhap ma so khach hang:";
	getline(cin, mskh);
	cout << "Nhap ma so xe: ";
	getline(cin, msx);
	cout << "Nhap ngay dat xe: ";
	getline(cin, ngaydat);
	cout << "Nhap so luong xe can dat:";
	cin >> soluong;
	cin.ignore();

	out << endl << maso;
	out << endl << mskh;
	out << endl << msx;
	out << endl << ngaydat;
	out << endl << soluong;

	out.close();
}

template<class T>
void List<T>::Nhap_them_khach_hang(List<KhachHang>& kh) {
	ofstream out;
	out.open("KhachHang.txt", ios::app);
	string maso, ten_kh, gioitinh, ngaysinh, diachi, cccd, sdt;
	bool trang_thai = true;
	Node<KhachHang>* q = nullptr;
	do {
		cout << "Nhap ma so khach hang theo dinh dang ky tu MSKH*** : "<< endl;
		getline(cin, maso);
		q = kh.get_Head();
		while (q != nullptr) {
			if (q->data.get_MSKH() == maso) {
				cout << "Ma so khach hang da ton tai. Vui long nhap lai!" << endl << endl;
				trang_thai = false;
				break;
			}
			else {
				trang_thai = true;
			}
			q = q->next;
		}
	} while (trang_thai != true);
	cout << "Nhap ten khach hang:";
	getline(cin, ten_kh);
	cout << "Nhap gioi tinh: ";
	getline(cin, gioitinh);
	cout << "Nhap ngay sinh:";
	getline(cin, ngaysinh);
	cin.ignore();
	cout << "Nhap dia chi:";
	getline(cin, diachi);
	cout << "Nhap so CCCD:";
	getline(cin, cccd);
	cout << "Nhap so dien thoai:";
	getline(cin, sdt);

	out << endl << maso;
	out << endl << ten_kh;
	out << endl << gioitinh;
	out << endl << ngaysinh;
	out << endl << diachi;
	out << endl << cccd;
	out << endl << sdt;
	out.close();

}

int menu_doanh_thu(str doanhthu[4], int n) {
	List<DonDatHang> dathang;
	List<DonHang> donhang;
	List<Xe> xe;
	List<KhachHang> khach;
	int mn = 1;
	int tt = 0;
	int* mau = new int[n];
	for (int i = 1; i <= n; i++) {
		mau[i - 1] = MAUCHU;
		mau[0] = MAUNEN;
	}
	do {
		clrscr();
		for (int i = 0; i < n; i++) {
			TextColor(mau[i]);
			cout << "\n\t\t\t\t\t\t\t" << i + 1 << "." << doanhthu[i];
		}
		char c = _getch();
		if ((int)c == -32) c = _getch();
		switch ((int)c) {
		case 72:
			if (tt == 0) {
				mn = 1;
			}
			else {
				tt--;
				mn--;
			}
			break;
		case 80:
			if (tt == n - 1) {
				mn = 4;
			}
			else {
				tt++;
				mn++;
			}
			break;
		case 13:
			cout << endl << endl;
			do {
				switch (mn) {
				case 1:
					cout << "\t\t\tDOANH THU DAT DUOC TRONG CAC THANG" << endl << endl;
					Table_Front_1_DoanhThu();
					cout << "|      Thang      |    So xe ban duoc   |       Tong doanh thu      |" << endl;
					Table_Front_2_DoanhThu();
					xe.input("Xe.txt");
					donhang.input("DonHang.txt");
					donhang.Doanh_thu(donhang, xe);
					Table_Back_DoanhThu();
					xe.Giai_phong_vung_nho();
					donhang.Giai_phong_vung_nho();
					cout << endl;
					system("pause");
					goto again;
				case 2:
					cout << "\t\t\tDOANH THU TRUNG BINH TREN MOT KHACH HANG" << endl;
					Table_Front_1_doanh_thu_tb();
					cout << "|      Thang      |     Doanh thu (1 thang)    | Tong so khach hang (1 thang) |        ARPU       |" << endl;
					Table_Front_2_doanh_thu_tb();
					donhang.input("DonHang.txt");
					xe.input("Xe.txt");
					donhang.Doanh_thu_trung_binh_tren_1KH(donhang, xe);
					Table_Back_doanh_thu_tb();
					donhang.Giai_phong_vung_nho();
					xe.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 3:
					donhang.input("DonHang.txt");
					xe.input("Xe.txt");
					donhang.So_sanh_doanh_thu(donhang, xe);
					donhang.Giai_phong_vung_nho();
					xe.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 4:
					return 0;
				default:
					break;
				}
			} while (mn != 4);
		}
	again:
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	} while (1);
}

int menu_don_dat_hang(str don_dat_hang[3], int n) {
	List<DonDatHang> dathang;
	List<LichHen> lichhen;
	List<DonHang> donhang;
	List<Xe> xe;
	List<KhachHang> khach;
	int mn = 1;
	int tt = 0;
	int* mau = new int[n];
	for (int i = 1; i <= n; i++) {
		mau[i - 1] = MAUCHU;
		mau[0] = MAUNEN;
	}
	do {
		clrscr();
		for (int i = 0; i < n; i++) {
			TextColor(mau[i]);
			cout << "\n\t\t\t\t\t\t\t" << i + 1 << "." << don_dat_hang[i];
		}
		char c = _getch();
		if ((int)c == -32) c = _getch();
		switch ((int)c) {
		case 72:
			if (tt == 0) {
				mn = 1;
			}
			else {
				tt--;
				mn--;
			}
			break;
		case 80:
			if (tt == n - 1) {
				mn = 3;
			}
			else {
				tt++;
				mn++;
			}
			break;
		case 13:
			cout << endl << endl;
			do {
				switch (mn) {
				case 1:
					cout << "\t\t\t\t\t\t\t\tDANH SACH THONG TIN CAC DON HANG DA DUOC BAN" << endl << endl;
					Table_Front_1_DonHang();
					cout << "|  Ma so don hang  |       Ten khach hang      |          Ten xe           |        Ngay ban        | So luong ban ra  |   Gia Thanh (VND)   |  Thanh tien (VND)   |" << endl;
					Table_Front_2_DonHang();
					khach.input("KhachHang.txt");
					xe.input("Xe.txt");
					donhang.input("DonHang.txt");
					donhang.Danh_sach_don_hang(donhang, khach, xe);
					Table_Back_2_DonHang();
					khach.Giai_phong_vung_nho();
					xe.Giai_phong_vung_nho();
					donhang.Giai_phong_vung_nho();
					cout << endl;
					system("pause");
					goto again;
				case 2:
					cout << "\t\t\t\t\t\t\t\tDANH SACH THONG TIN LICH HEN KHACH HANG" << endl << endl;
					Table_Front_1_lich_hen();
					cout << "|    Ma don hang    |        Ten khach hang        |          Ten xe          |       Ngay dat xe       |    So luong    |    Gia Thanh ( VND )  |" << endl;
					Table_Front_2_lich_hen();
					khach.input("KhachHang.txt");
					xe.input("Xe.txt");
					lichhen.input("LichHen.txt");
					lichhen.Danh_sach_lich_hen(lichhen, khach, xe);
					Table_Back_lich_hen();
					khach.Giai_phong_vung_nho();
					xe.Giai_phong_vung_nho();
					lichhen.Giai_phong_vung_nho();
					cout << endl;
					system("pause");
					goto again;
				case 3:
					return 0;
				default:
					break;
				}
			} while (mn != 3);
		}
	again:
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	} while (1);
}

int menu_thao_tac_ban_phim(str thao_tac_ban_phim[7], int n) {
	system("cls");
	List<DonDatHang> dathang;
	List<DonHang> donhang;
	List<Xe> xe;
	List<KhachHang> khach;
	List<NhanVien> nhanvien;
	int mn = 1;
	int tt = 0;
	string kh, ddh;
	int* mau = new int[n];
	for (int i = 1; i <= n; i++) {
		mau[i - 1] = MAUCHU;
		mau[0] = MAUNEN;
	}
	do {
		clrscr();
		for (int i = 0; i < n; i++) {
			TextColor(mau[i]);
			cout << "\n\t\t\t\t\t\t\t" << i + 1 << "." << thao_tac_ban_phim[i];
		}
		char c = _getch();
		if ((int)c == -32) c = _getch();
		switch ((int)c) {
		case 72:
			if (tt == 0) {
				mn = 1;
			}
			else {
				tt--;
				mn--;
			}
			break;
		case 80:
			if (tt == n - 1) {
				mn = 7;
			}
			else {
				tt++;
				mn++;
			}
			break;
		case 13:
			cout << endl << endl;
			do {
				switch (mn) {
				case 1:
					khach.input("KhachHang.txt");
					khach.Nhap_them_khach_hang(khach);
					khach.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 2:
					donhang.input("DonHang.txt");
					khach.input("KhachHang.txt");
					xe.input("Xe.txt");
					donhang.Tim_kiem_hoa_don_khach_hang(donhang, khach, xe);
					donhang.Giai_phong_vung_nho();
					khach.Giai_phong_vung_nho();
					xe.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 3:
					cout << "Nhap ma so khach hang ban can xoa ( dinh dang ky tu : MSKH*** ) :";
					getline(cin, kh);
					khach.input("KhachHang.txt");
					khach.delete_anywhere_khach_hang(khach, kh);
					khach.write_file_khach_hang(khach);
					khach.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 4:
					xe.input("Xe.txt");
					xe.Nhap_thong_tin_xe(xe);
					xe.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 5:
					dathang.input("DonDatHang.txt");
					dathang.Nhap_them_don_dat_hang(dathang);
					dathang.Giai_phong_vung_nho();
					system("pause");
					goto again;
				case 6:
					cout << "Nhap ma so don dat hang ban can xoa ( dinh dang ky tu : MSDH*** ) :";
					getline(cin, ddh);
					dathang.input("DonDatHang.txt");
					dathang.delete_anywhere_don_dat_hang(dathang, ddh);
					dathang.write_file_don_dat_hang(dathang);
					system("pause");
					goto again;
				case 7:
					return 0;
				default:
					break;
				}
			} while (mn != 4);
		}
	again:
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	} while (1);
}

int menu(str thaotac[9], int n) {
	List<KhachHang> khach;
	List<Xe> xe;
	List<DonHang> donhang;
	List<DonDatHang> dondathang;
	List<TraGop> tragop;
	List<LaiSuat> laisuat;
	List<LichHen> lichhen;
	List<NhanVien> nhanvien;
	List<ChucVu> chucvu;
	List<ChiPhi> chiphi;
	int mn = 1;
	int tt = 0;
	int* mau = new int[n];
	for (int i = 1; i <= n; i++) {
		mau[i - 1] = MAUCHU;
		mau[0] = MAUNEN;
	}
	do {
		clrscr();
		for (int i = 0; i < n; i++) {
			TextColor(mau[i]);
			cout << "\t\t\t\t\t\t\t" << i + 1 << "." << thaotac[i] << endl;
		}
		char c = _getch();
		if ((int)c == -32) c = _getch();
		switch ((int)c) {
		case 72:
			if (tt == 0) {
				mn = 1;
			}
			else {
				tt--;
				mn--;
			}
			break;
		case 80:
			if (tt == n - 1) {
				mn = 9;
			}
			else {
				tt++;
				mn++;
			}
			break;
		case 13:
			cout << endl << endl;
			do {
			switch (mn) {
			case 1:
				cout << "\t\t\t\t\t\t\t\tDANH SACH THONG TIN KHACH HANG" << endl << endl;
				Table_Front_1_Khach_Hang();
				cout << char(179);
				cout << "  Ma so khach hang  |    Ten khach hang        |      Gioi tinh     |       Ngay sinh      |       Dia chi          |         CCCD         |    So dien thoai    |" << endl;
				Table_Front_2_Khach_Hang();
				khach.input("KhachHang.txt");
				khach.display();
				Table_Back_Khach_Hang();
				khach.Giai_phong_vung_nho();
				cout << endl;
				system("pause");
				goto again;
			case 2:
				cout << "\t\t\t\t\tDANH SACH THONG TIN CAC LOAI XE CO TRONG SHOWROOM" << endl << endl;
				Table_Front_1_Xe();
				cout << "|      Ma so xe      |        Hang xe       |         Ten xe         |      Mau sac     |    So luong   |    Gia thanh (VND)   |" << endl;
				Table_Front_2_Xe();
				xe.input("Xe.txt");
				xe.display();
				Table_Back_Xe();
				xe.Giai_phong_vung_nho();
				cout << endl;
				system("pause");
				goto again;
			case 3:
				dondathang.input("DonDatHang.txt");
				xe.input("Xe.txt");
				dondathang.Don_dat_hang(dondathang, xe);
				menu_don_dat_hang(don_dat_hang, 3);
				dondathang.Giai_phong_vung_nho();
				xe.Giai_phong_vung_nho();
				goto again;
			case 4:
				cout << "\t\t\t\t\t\t\tDANH SACH THONG TIN NHAN VIEN" << endl << endl;
				Table_Front_1_nhan_vien();
				cout << "| Ma so nhan vien |    Ho ten nhan vien    |   Gioi tinh  |        Dia chi        |      Bo phan lam viec     |        Luong       |" << endl;
				Table_Front_2_nhan_vien();
				nhanvien.input("NhanVien.txt");
				chucvu.input("ChucVu.txt");
				nhanvien.Danh_sach_nhan_vien(nhanvien, chucvu);
				Table_Back_nhanvien();
				nhanvien.Giai_phong_vung_nho();
				chucvu.Giai_phong_vung_nho();
				system("pause");
				goto again;
			case 5:
				menu_doanh_thu(doanhthu, 4);
				goto again;
				goto again;
			case 6: 
				menu_thao_tac_ban_phim(thao_tac_ban_phim, 7);
				goto again;
			case 7:
				cout << "\t\t\t\t\t\tDANH SACH THONG TIN KHACH HANG MUA TRA GOP VA TIEN LAI CAN TRA HANG THANG" << endl << endl;
				Table_Front_1_TraGop();
				cout << "| Ma so khach hang |      Ten khach hang     |      Ten ngan hang     |    Thoi gian tra gop    | Lai suat vay  |    Thoi han vay ( nam )   |       Du no goc       |     So tien tra truoc     |    Tien goc hang thang   |    Tien lai hang thang   |   Tong tien phai tra hang thang    |" << endl;
				Table_Front_2_TraGop();
				tragop.input("TraGop.txt");
				laisuat.input("LaiSuatNH.txt");
				khach.input("KhachHang.txt");
				xe.input("Xe.txt");
				donhang.Chinh_sach_tra_gop(khach, xe, tragop, laisuat);
				Table_Back_TraGop();
				donhang.Giai_phong_vung_nho();
				laisuat.Giai_phong_vung_nho();
				khach.Giai_phong_vung_nho();
				tragop.Giai_phong_vung_nho();
				xe.Giai_phong_vung_nho();
				cout << endl;
				system("pause");
				goto again;
			case 8:
				Table_Front_1_loi_nhuan();
				cout << "|    Tong doanh thu     |       Chi phi        |   Tong luong nhan vien   |      Tong chi phi      |     Loi nhuan thu duoc   |" << endl;
				Table_Front_2_loi_nhuan();
				donhang.input("DonHang.txt");
				xe.input("Xe.txt");
				nhanvien.input("NhanVien.txt");
				chucvu.input("ChucVu.txt");
				chiphi.input("ChiPhi.txt");
				donhang.Loi_nhuan_thu_duoc_trong_nam(donhang, xe, nhanvien, chucvu, chiphi);
				Table_Back_loi_nhuan();
				donhang.Giai_phong_vung_nho();
				xe.Giai_phong_vung_nho();
				nhanvien.Giai_phong_vung_nho();
				chucvu.Giai_phong_vung_nho();
				chiphi.Giai_phong_vung_nho();
				system("pause");
				goto again;
			case 9:
				/*donhang.input("DonHang.txt");
				xe.input("Xe.txt");
				donhang.Cap_nhat_thong_tin_Xe(donhang, xe);
				donhang.Giai_phong_vung_nho();
				xe.Giai_phong_vung_nho();*/
				cout << "Ket thuc chuong trinh" << endl;
				exit(1);
			default:
				break;
			}
			} while (mn != 9);
		}
		again:
		for (int i = 0; i < n; i++)
			mau[i] = MAUCHU;
		mau[tt] = MAUNEN;
	} while (1);
}

int main() {
	menu(thaotac, 9);
	return 0;
}