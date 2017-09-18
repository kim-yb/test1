// test1.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "stdafx.h"
#include <iostream>
#include "calc.h"
using namespace std;
int main()
{
	cout << "Second program \n";
	cout << "add "<< add(2, 4) << endl;
	cout << "sub" << sub(2, 4) << endl;
	cout << "mul" << mul(2, 4) << endl;

	getchar();

    return 0;
}

