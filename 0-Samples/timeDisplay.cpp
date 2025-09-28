#include <iostream> // For console output (std::cout)
#include <chrono>   // For handling time points and clocks
#include <ctime>    // C-style time functions (like std::localtime and std::mktime)

int main() {
    std::chrono::system_clock::time_point now = std::chrono::system_clock::now();
    std::time_t now_time_t = std::chrono::system_clock::to_time_t(now);
    std::tm* local_time = std::localtime(&now_time_t);

    std::cout << "Current System Time: " << std::ctime(&now_time_t) << std::endl;

    std::cout << "Date: " << (local_time->tm_mon + 1) << "/"
              << local_time->tm_mday << "/"
              << (local_time->tm_year + 1900) << std::endl;

    std::cout << "Time: " << local_time->tm_hour << ":"
              << local_time->tm_min << ":"
              << local_time->tm_sec << std::endl;

    return 0;
}