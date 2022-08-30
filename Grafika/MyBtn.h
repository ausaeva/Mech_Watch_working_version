#ifndef HEADER_H_
#define HEADER_H_

const int x = 150 - 5;
const int y = 150 - 5;
const int RADIUS = 129;

struct Time {
	int hour;
	int minute;
	int second;
};

struct x1y1 {
	double x1;
	double y1;
};

//Time get_local_time();//Получаем текущее время в виде структуры


x1y1 find_x1y1_hour(double i);// определяем формулу по которой рассчитываем час
x1y1 find_x1y1_minute(double i);// определяем формулу по которой рассчитываем минуты
x1y1 find_x1y1_cecond(double i);// определяем формулу по которой рассчитываем секунды

void create_line_h(int x1, int y1);// рисуем линию по полученным координатам
void create_line_m(int x1, int y1);
void create_line_s(int x1, int y1);

#endif 
