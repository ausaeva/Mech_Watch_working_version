#include "headers/graphics.h"
#include <iostream>
#include <ctime>
#include "MyBtn.h"
#include <cmath>
#include <map>
#define PI 3.1415926


x1y1 find_x1y1_hour(double t) {

	double x1 = 145.0 + (RADIUS - 50) * cos(t);
	double y1 = 145.0 + (RADIUS - 50) * sin(t);
	x1y1 new_x1y1;
	new_x1y1.x1 = x1;
	new_x1y1.y1 = y1;

	return new_x1y1;
}
x1y1 find_x1y1_minute(double t) {
	double x1 = 145.0 + (RADIUS - 25) * cos(t);
	double y1 = 145.0 + (RADIUS - 25) * sin(t);
	x1y1 new_x1y1;
	new_x1y1.x1 = x1;
	new_x1y1.y1 = y1;

	return new_x1y1;
}
x1y1 find_x1y1_cecond(double t) {
	double x1 = 145.0 + RADIUS * cos(t);
	double y1 = 145.0 + RADIUS * sin(t);
	x1y1 new_x1y1;
	new_x1y1.x1 = x1;
	new_x1y1.y1 = y1;

	return new_x1y1;
}

void create_line_h(int x1, int y1) {
	setcolor(COLOR(64, 224, 208));
	line(145, 145, x1, y1);

}
void create_line_m(int x1, int y1) {
	setcolor(COLOR(0, 0, 139));
	line(145, 145, x1, y1);
}

void create_line_s(int x1, int y1) {
	setcolor(COLOR(123, 104, 238));
	line(145, 145, x1, y1);
}

