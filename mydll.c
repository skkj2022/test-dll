#include "mydll.h"
 
// __declspec (dllexport) 
int add_range (int _sta, int _end) {
	
	int res = 0;
	if (_sta > _end)
		return 0x7fffffff;
	for (; _sta != _end; _sta ++) {
		res += _sta;
	}
	return res;
	
}
 
// __declspec (dllexport)
double average (int* _arr, int _cnt) {
	double res = 0.0;
	int i = 0;
	if (_cnt <= 0)
		return (double) (~0);
	for (; i < _cnt; i ++)
		res += _arr [i];
	return (double) (res /= _cnt);
}