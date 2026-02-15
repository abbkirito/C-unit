#include "include/Timer.h"
 using namespace Timer;
AutoTimer::AutoTimer(const string& message) 
        : message_(message), start_(high_resolution_clock::now()) {}
    
 AutoTimer::~AutoTimer() 
 {
        auto end = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(end - start_).count(); // 修改为微秒单位
        cout << message_ << "耗时: " << duration << "us" << endl; // 单位改为us
}

 

