#include <iostream>
#include <cmath>
#include <stdio.h>
#include < iomanip >
using namespace std;
float a;
float b;
float c;
float d;
float e;
float f;
float g;
float h;
float i;
float j;
float k;
float l;
float m;
float n;
float o;
float p;
float q;

void Calc() {
	cout << "Calculating..." << endl;
	if (a == INFINITY||b==INFINITY||c==INFINITY||d==INFINITY||e==INFINITY||d==INFINITY||e==INFINITY||f==INFINITY||g==INFINITY||h==INFINITY||i==INFINITY||j==INFINITY) {
		cout << "ERROR! Invalid input data. Please, try again" << endl;
	}
	else {
		float result = a + b;
		printf("%e\n", result);
		result -= c;
		printf("%e\n", result);
		result *= d;
		printf("%e\n", result);
		result *= e;
		printf("%e\n", result);
		result -= f;
		printf("%e\n", result);
		result += g;
		printf("%e\n", result);
		result += h;
		printf("%e\n", result);
		result -= i;
		printf("%e\n", result);
		result -= j;
		printf("%e\n", result);
		if (result == 0 || result == INFINITY) {
			cout << "ERROR!" << endl;
		}
	}
}
int main() {
	printf("Input data:\n");
	scanf_s("%e",&a);
	printf("%e\n", a);
	//+
	scanf_s("%e", &b);
	printf("% e\n", b);
	//-
	scanf_s("%e", &c);
	printf("% e\n", c);
	//*
	scanf_s("%e", &d);
	printf("% e\n", d);
	//*
	scanf_s("%e", &e);
	printf("% e\n", e);
	//-
	scanf_s("%e", &f);
	printf("% e\n", f);
	//+
	scanf_s("%e", &g);
	printf("% e\n", g);
	//+
	scanf_s("%e", &h);
	printf("% e\n", h);
	//-
	scanf_s("%e", &i);
	printf("% e\n", i);
	//-
	scanf_s("%e", &j);
	printf("% e\n", j);

	if (abs(a - b) < 0.0000000000000031) { a = b;}
	if (abs(a - c) < 0.0000000000000031) { a = c; }
	if (abs(a - d) < 0.0000000000000031) { a = d; }
	if (abs(a - e) < 0.0000000000000031) { a = e; }
	if (abs(a - f) < 0.0000000000000031) { a = f; }
	if (abs(a - g) < 0.0000000000000031) { a = g; }
	if (abs(a - h) < 0.0000000000000031) { a = h; }
	if (abs(a - i) < 0.0000000000000031) { a = i; }
	if (abs(a - j) < 0.0000000000000031) { a = j; }

	if (abs(b - c) < 0.0000000000000031) { b = c; }
	if (abs(b - d) < 0.0000000000000031) { b = d; }
	if (abs(b - e) < 0.0000000000000031) { b = e; }
	if (abs(b - f) < 0.0000000000000031) { b = f; }
	if (abs(b - g) < 0.0000000000000031) { b = g; }
	if (abs(b - h) < 0.0000000000000031) { b = h; }
	if (abs(b - i) < 0.0000000000000031) { b = i; }
	if (abs(b - j) < 0.0000000000000031) { b = j; }

	if (abs(c - d) < 0.0000000000000031) { c = d; }
	if (abs(c - e) < 0.0000000000000031) { c = e; }
	if (abs(c - f) < 0.0000000000000031) { c = f; }
	if (abs(c - g) < 0.0000000000000031) { c = g; }
	if (abs(c - h) < 0.0000000000000031) { c = h; }
	if (abs(c - i) < 0.0000000000000031) { c = i; }
	if (abs(c - j) < 0.0000000000000031) { c = j; }

	if (abs(d - e) < 0.0000000000000031) { d = e; }
	if (abs(d - f) < 0.0000000000000031) { d = f; }
	if (abs(d - g) < 0.0000000000000031) { d = g; }
	if (abs(d - h) < 0.0000000000000031) { d = h; }
	if (abs(d - i) < 0.0000000000000031) { d = i; }
	if (abs(d - j) < 0.0000000000000031) { d = j; }

	if (abs(e - f) < 0.0000000000000031) { e = f; }
	if (abs(e - g) < 0.0000000000000031) { e = g; }
	if (abs(e - h) < 0.0000000000000031) { e = h; }
	if (abs(e - i) < 0.0000000000000031) { e = i; }
	if (abs(e - j) < 0.0000000000000031) { e = j; }

	if (abs(f - g) < 0.0000000000000031) { f = g; }
	if (abs(f - h) < 0.0000000000000031) { f = h; }
	if (abs(f - i) < 0.0000000000000031) { f = i; }
	if (abs(f - j) < 0.0000000000000031) { f = j; }

	if (abs(g - h) < 0.0000000000000031) { g = h; }
	if (abs(g - i) < 0.0000000000000031) { g = i; }
	if (abs(g - j) < 0.0000000000000031) { g = j; }

	if (abs(h - i) < 0.0000000000000031) { h = i; }
	if (abs(h - j) < 0.0000000000000031) { h = j; }

	Calc();
	return 0;
	}
	
