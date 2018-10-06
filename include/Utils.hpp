#pragma once 
#include <thread>

struct NonCopyable {
    NonCopyable() = default;
    NonCopyable(NonCopyable const&) = delete;
    NonCopyable& operator=(NonCopyable const&) = delete;
    virtual ~NonCopyable() = default;
};

template <typename Func, typename ... Args>
std::thread make_thread(Func&& f, Args&& ... args) {
    return std::thread(std::forward<Func>(f), std::forward<Args>(args)...);
}