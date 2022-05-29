#include<iostream>
#include <utility>
using namespace std;

pair<int, int> swap_values(pair<int, int> values) {
	return make_pair(values.second,values.first);
}
int main() {
	pair<int, int> ex;
	ex.first = 5;
	ex.second = 3;
	swap_values(ex);
	return 0;
}