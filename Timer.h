#include <iostream>
#include <algorithm>
#include <chrono>
#include<string>



namespace Timer{
using namespace std;
using namespace std::chrono;

// 计时类实现（微秒精度）
    class AutoTimer {
    public:
        explicit AutoTimer(const string& message);
        
        
        ~AutoTimer() ;
    private:
        string message_;
        high_resolution_clock::time_point start_;
        };
}