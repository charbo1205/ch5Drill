// ch5Drill.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "std_lib_facilities.h"

int main()

	try{

	//cout << "Success!"<<'\n';

	string res = "7"; 
	vector <int>v(10);
	v[5] = res;
		cout<<"success!\n";











	keep_window_open();
	return 0;
}
catch (exception& e) {
	cerr << "error:" << e.what() << '\n';
	keep_window_open();
	return 1;
}
catch (...) {
	cerr << "Oops: unknown exception!\n";
	return 2;
}