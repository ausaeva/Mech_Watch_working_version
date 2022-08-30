#define _CRT_SECURE_NO_WARNINGS
#include "headers/graphics.h"
#include <iostream>
#include "MyBtn.h"
#include <cmath>
#include <ctime>
using namespace std;

const int WIDTH = 300;
const int HEIGHT = 300;

#define PI 3.1415926

int main() {

	initwindow(WIDTH, HEIGHT, "Анимация", 0, 0, false);

	time_t now = time(nullptr);
	tm* ltm = localtime(&now);

	Time New_Time;

	New_Time.hour = (double)ltm->tm_hour;
	New_Time.minute = (double)ltm->tm_min;
	New_Time.second = (double)ltm->tm_sec;


	x1y1 coord_hour;
	x1y1 coord_minute;
	x1y1 coord_second;

	double t = 0.0;

	while (true) {

		setbkcolor(COLOR(240, 128, 128));
		setcolor(COLOR(47, 79, 79));

		clearviewport();

		circle(x, y, RADIUS);

		outtextxy(145, 0, "12");
		
		outtextxy(0, 145, "9");
		outtextxy(145, 275, "6");
		outtextxy(279, 145, "3");

		t = -PI / 2.0 + (double)New_Time.hour * PI / 6.0;
		coord_hour = find_x1y1_hour(t);

		create_line_h(coord_hour.x1, coord_hour.y1);

		t = -PI / 2.0 + (double)New_Time.minute * PI / 30.0;

		coord_minute = find_x1y1_minute(t);

		create_line_m(coord_minute.x1, coord_minute.y1);

		t = -PI / 2.0 + (double)New_Time.second * PI / 30.0;

		coord_second = find_x1y1_cecond(t);

		create_line_s(coord_second.x1, coord_second.y1);

		if (New_Time.hour == 12) {
				New_Time.hour = 1;
		}

		if (New_Time.minute == 60) {
			New_Time.hour += 1;
			New_Time.minute = 1;
		}

		New_Time.second += 1;


		if (New_Time.second == 60.0) {
			New_Time.minute += 1;
			New_Time.second = 1.0;
		}

		swapbuffers(); // делаем активную страницу видимой
		delay(1000);

		if (kbhit()) break; // если нажата клавиша - завершить работу
	}
	closegraph();
}