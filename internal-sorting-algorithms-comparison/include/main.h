#pragma once
#ifndef MAIN_H
#define MAIN_H

#include <algorithm>
#include <iostream>
#include <cstring>
using namespace std;
using Status = int;
using ElemType = int;

const int N = 1e6 + 7;
const int TRUE = 1;
const int FALSE = 0;
const int OK = 1;
const int ERROR = 0;
const int INFEASIBLE = -1;
// const int OVERFLOW = -2;
 
struct Cnt {
	int cmp = 0;
	int mov = 0;
};

struct Result {
	string name;
	Cnt cnt;
}; 

#endif
