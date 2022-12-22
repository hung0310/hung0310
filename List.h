#pragma once
#include<iostream>
#include<fstream>
#include<string>
#include<windows.h>
#include<iomanip>
#include"KhachHang.h"
#include"Xe.h"
#include"DonHang.h"
#include"TraGop.h"
#include"LaiSuatNganHang.h"
#include"LichHen.h"
#include"ChucVu.h"
#include"NhanVien.h"
#include"ChiPhi.h"
#include"console.h"
#include<conio.h>
#define MAUNEN 229
#define MAUCHU 15

typedef char str[100];

using namespace std;

struct space_out : std::numpunct<char> {
	char do_thousands_sep() const { return '.'; }
	string do_grouping() const { return "\3"; }
};

template<class T>
struct Node {
	T data;
	Node<T>* next;
	Node<T>* prev;
	Node();
	Node<T>* KhoitaoNode(T data) {
		Node<T>* node = new Node<T>;
		node->data = data;
		node->next = nullptr;
		node->prev = nullptr;
		return node;
	}
};

template<class T>
class List {
	private:
		Node<T>* head;
		Node<T>* tail;
		int size;
	public:
		List();
		~List();
		int get_Size();
		Node<T>* get_Head();
		Node<T>* get_Tail();
		void input(const char*);
		void output(T);
		void display();
		void read_file(T&, ifstream&);
		void Danh_sach_don_hang(List<DonHang>, List<KhachHang>,  List<Xe>);
		void Danh_sach_lich_hen(List<LichHen>, List<KhachHang>, List<Xe>);
		void Danh_sach_nhan_vien(List<NhanVien>, List<ChucVu>);
		void Doanh_thu(List<DonHang>, List<Xe>);
		ll Tong_doanh_thu(List<DonHang>, List<Xe>);
		ll Tong_so_luong_phai_tra_cho_NV_trong_1nam(List<NhanVien>, List<ChucVu>);
		ll Tong_chi_phi_phai_tra_trong_1nam(List<ChiPhi>);
		void Loi_nhuan_thu_duoc_trong_nam(List<DonHang>, List<Xe>, List<NhanVien>, List<ChucVu>, List<ChiPhi>);
		void output_Doanh_thu(T);
		void Doanh_thu_trung_binh_tren_1KH(List<DonHang>, List<Xe>);
		void output_doanh_thu_trung_binh_tren_1KH(T);
		void Chinh_sach_tra_gop(List<KhachHang>, List<Xe>, List<TraGop>, List<LaiSuat>);
		void Cap_nhat_thong_tin_Xe(List<DonHang>, List<Xe>);
		void Don_dat_hang(List<DonDatHang>, List<Xe>);
		void So_sanh_doanh_thu(List<DonHang>, List<Xe>);
		void add_Tail(Node<T>*);
		void Nhap_thong_tin_xe(List<Xe>&);
		void Nhap_them_don_dat_hang(List<DonDatHang>&);
		void Nhap_them_khach_hang(List<KhachHang>&);
		void Tim_kiem_hoa_don_khach_hang(List<DonHang>, List<KhachHang>, List<Xe>);
		Node<KhachHang>* Tim_kiem_khach_hang(List<KhachHang>, string);
		Node<DonDatHang>* Tim_kiem_don_dat_hang(List<DonDatHang>, string);
		void delete_First(List<T>&);
		void delete_Last(List<T>&);
		void delete_anywhere_khach_hang(List<KhachHang>&, string);
		void delete_anywhere_don_dat_hang(List<DonDatHang>&, string);
		void write_file_khach_hang(List<KhachHang>);
		void write_file_don_dat_hang(List<DonDatHang>);
		void Giai_phong_vung_nho();
};