#include<iostream>
#include<string>
#include<iomanip>
#include<fstream>
#include"List.h"

using namespace std;

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
void List<T>::intput(const char* filename) {
	cout.imbue(locale(cout.getloc(), new space_out));
	ifstream in;
	in.open(filename, ios::in);
	Node<T> p;
	while (!in.eof()) {
		read_file(p.data, in);
		Node<T>* node = p.KhoitaoNode(p.data);
		add_Tail(node);
		size++;
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
	Node<DonHang>* l;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		l->data.get_MSDH() = p->data.get_MSDH();
		l->data.get_Ngay_ban() = p->data.get_Ngay_ban();
		l->data.set_So_luong_xe_ban_ra(p->data.get_So_luong_xe_ban_ra());
		for (Node<KhachHang>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_MSKH() == k->data.get_MSKH()) {
				l->data.get_Ten_KH() = k->data.get_Ten_KH();
			}
		}
		for (Node<Xe>* q = c.get_Head(); q != nullptr; q = q->next) {
			if (p->data.get_MSX() == q->data.get_MSX()) {
				l->data.get_Ten_xe() = q->data.get_Ten_xe();
				l->data.set_Gia_thanh(q->data.get_Gia_thanh());
				p->data.set_Thanh_tien(p->data.get_So_luong_xe_ban_ra() * q->data.get_Gia_thanh());
			}
		}
		out_Danh_sach_don_hang(l->data);
	}
}

template<class T>
void List<T>::out_Danh_sach_don_hang(T data) {
	cout.imbue(locale(cout.getloc(), new space_out));
	cout << "|      " << data.get_MSDH() << setw(28) << data.get_Ten_KH() << setw(30) << data.get_Ten_xe() << setw(22) << data.get_Ngay_ban() << setw(15) << data.get_So_luong_xe_ban_ra() << setw(28) << data.get_Gia_thanh() << setw(22) << data.get_Thanh_tien() << endl;
	cout << "|__________________|___________________________|___________________________|________________________|__________________|_____________________|_____________________|" << endl;                                                                                                                                                       
}

template<class T>
void List<T>::Doanh_thu(List<DonHang> a, List<Xe> b) {
	string nd1, nd2, tmp1;
	Node<DonHang>* l;
	for (Node<DonHang>* p = a.get_Head(); p != nullptr; p = p->next) {
		l = p;
		nd1 = p->data.get_Ngay_ban()[3];
		nd2 = p->data.get_Ngay_ban()[4];
		tmp1 = nd1 + nd2;
		p->data.set_Thang(tmp1);
		l->data.get_Thang() = p->data.get_Thang();
		for (Node<Xe>* k = b.get_Head(); k != nullptr; k = k->next) {
			if (p->data.get_MSX() == k->data.get_MSX()) {
				l->data.set_Gia_thanh(k->data.get_Gia_thanh());
			}
		}
	}
	for (l = a.get_Head(); l != nullptr; l = l->next) {
		ll sum = 0;
		int tong = 0;
		sum += l->data.get_Gia_thanh();
		tong += l->data.get_So_luong_xe_ban_ra();
		for (Node<DonHang>* k = l->next; k != nullptr; k = k->next) {
			if (l->data.get_Thang() == k->data.get_Thang() && l->data.get_Tinh_trang() == true && k->data.get_Tinh_trang() == true) {
				k->data.set_Tinh_trang(false);
				sum += k->data.get_Gia_thanh();
				tong += k->data.get_So_luong_xe_ban_ra();
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
		if (count != 0 && l->data.get_Tinh_trang() == true) {
			p->data.set_Tong_so_xe_ban_ra(l->data.get_Tong_so_xe_ban_ra());
			p->data.set_Thang(l->data.get_Thang());
			p->data.set_Doanh_thu(l->data.get_Doanh_thu());
			output_Doanh_thu(p->data);
		}
		if (count == 0 && l->data.get_Tinh_trang() == true) {
			p->data.set_Tong_so_xe_ban_ra(l->data.get_Tong_so_xe_ban_ra());
			p->data.set_Thang(l->data.get_Thang());
			p->data.set_Doanh_thu(l->data.get_Doanh_thu());
			output_Doanh_thu(p->data);
		}
	}
}

template<class T>
void List<T>::output_Doanh_thu(T data) {
	cout.imbue(locale(cout.getloc(), new space_out));
	cout << "|        " << data.get_Thang() << setw(20) << data.get_Tong_so_xe_ban_ra() << setw(28) << data.get_Doanh_thu() << endl;
	cout << "|_________________|_____________________|___________________________|" << endl;
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

int main() {
	List<KhachHang> khach;
	List<Xe> xe;
	List<DonHang> donhang;
	int mn;
	do {
		cout << "\t 1. THONG TIN KHACH HANG" << endl;
		cout << "\t 2. THONG TIN XE" << endl;
		cout << "\t 3. THONG TIN DANH SACH DON HANG" << endl;
		cout << "\t 4. DOANH THU TRONG THANG" << endl;
		cout << "\t 5. KET THUC CHUONG TRINH" << endl;
		cout << "\nNhap lua chon cua ban: ";
		cin >> mn;
		cout << endl;
		switch (mn) {
		case 1:
			cout << "\t\t\t\t\t\t\t\tDANH SACH THONG TIN KHACH HANG" << endl << endl;
			cout << "+--------------------+--------------------------+--------------------+----------------------+------------------------+----------------------+---------------------+" << endl;
			cout << "|  Ma so khach hang  |    Ten khach hang        |      Gioi tinh     |       Ngay sinh      |       Dia chi          |         CCCD         |    So dien thoai    |" << endl;
			cout << "|--------------------|--------------------------|--------------------|----------------------|------------------------|----------------------|---------------------|" << endl;
			khach.intput("KhachHang.txt");
			khach.display();
			khach.Giai_phong_vung_nho();
			break;
		case 2:
			cout << "\t\t\t\t\tDANH SACH THON TIN XE" << endl << endl;
			cout << "+--------------------+----------------------+------------------------+------------------+---------------+----------------------+" << endl;
			cout << "|      Ma so xe      |        Hang xe       |         Ten xe         |      Mau sac     |    So luong   |       Gia thanh      |" << endl;
			cout << "|--------------------|----------------------|------------------------|------------------|---------------|----------------------|" << endl;
			xe.intput("Xe.txt");
			xe.display();
			xe.Giai_phong_vung_nho();
			break;
		case 3:
			cout << "\t\t\t\t\t\t\t\tDANH SACH THONG TIN CAC DON HANG" << endl << endl;
			cout << "+------------------------------------------------------------------------------------------------------------------------------------------------------------------+" << endl;
			cout << "|  Ma so don hang  |       Ten khach hang      |          Ten xe           |        Ngay ban        | So luong ban ra  |      Gia Thanh      |    Thanh tien       |" << endl;
			cout << "|------------------|---------------------------|---------------------------|------------------------|------------------|---------------------|---------------------|" << endl;
			khach.intput("KhachHang.txt");
			xe.intput("Xe.txt");
			donhang.intput("DonHang.txt");
			donhang.Danh_sach_don_hang(donhang, khach, xe);
			khach.Giai_phong_vung_nho();
			xe.Giai_phong_vung_nho();
			donhang.Giai_phong_vung_nho();
			break;
		case 4:
			cout << "\t\t\tDOANH THU TRONG THANG" << endl << endl;
			cout << "+-------------------------------------------------------------------+" << endl;
			cout << "|      Thang      |    So xe ban duoc   |       Tong doanh thu      |" << endl;
			cout << "|-----------------|---------------------|---------------------------|" << endl;
			xe.intput("Xe.txt");
			donhang.intput("DonHang.txt");
			donhang.Doanh_thu(donhang, xe);
			xe.Giai_phong_vung_nho();
			donhang.Giai_phong_vung_nho();
			break;
		case 5:
			cout << "Ket thuc chuong trinh" << endl;
			break;
		default:
			cout << "\n\n\t\tE-R-R-O-R! Vui long nhap lai lua chon" << endl;
		}
		cout << endl << endl;
		system("pause");
		system("cls");
	} while (mn != 5);
	return 0;
}