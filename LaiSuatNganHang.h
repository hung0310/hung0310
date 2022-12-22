#pragma once
#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class LaiSuat {
private:
	string Ten_NH;
	float Lai_suat_vay;
public:
	LaiSuat();
	~LaiSuat();
	void input(ifstream&);
	string& get_Ten_NH();
	float& get_Lai_suat_vay();
};