#include <iostream>
using namespace std;
class course {
public:
	virtual void duration() = 0;
};
class onlinecourse :public course {
	int week;
	int hoursperweek;
public:
	onlinecourse(int w, int h) {
		week = w;
		hoursperweek = h;

	}
	void duration() override {
		cout << "online course duration:" << endl;
		cout << " weeks:" << endl;
		cout << "hours per week:" << endl;
	}

};
class offline :public course{
	int months;
	int hoursperday;
public:
	offline(int m, int h) {
		months = m;
		hoursperday = h;
	}

	void duration() override {
		cout << "online course duration:" << endl;
		cout << "months" << months << endl;
		cout << "hours per day" << hoursperday << endl;
	}
	};
	int main() {
		offline o(4,4);
		onlinecourse c(4, 20);
		o.duration();
		c.duration();


};