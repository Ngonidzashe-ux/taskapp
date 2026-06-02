#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>

int main(){

std::thread t;
std::mutex mtx;
std::condition_variable cv;

t(func, args);
std::lock(mtx);
counter++;
std::unlock(mtx);

return 0;
}
